#define _CRT_SECURE_NO_WARNINGS 1
#include"头.h"
#include<graphics.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")


#define ROW 15  //定义棋盘的行数
#define COL 15  //定义棋盘的列数
#define Mine_num 13  //定义地雷的个数
#define SIZE 40    // 定义每一格的宽度
//定义一个数组，用于存放棋盘
int map[ROW][COL];   //全局变量的定义的数据，其中默认为0
IMAGE  image[13];  //定义一个数组用于存放图片
int count = 0;

//难度选择函数
int Choose()
{
	char arr[8] = "";
	printf("请选择难度<简单><普通><困难>");
	scanf("%s", arr);
	if (strcmp(arr, "简单\0") == 0)
	{
		return 0;
	}
	if (strcmp(arr, "普通\0")==0)
	{
		return 2;
	}
	if (strcmp(arr, "困难\0") == 0)
	{
		return 4;
	}
}


void jude(int row,int col)
{
	if (map[row][col] == -1)  
	{
		for (int i = 0; i <= ROW; i++)
		{
			for (int j = 0; j <= COL; j++)
			{
				putimage(j * SIZE, i * SIZE, &image[9]);
			}
		}
		//开到地雷
		MessageBox(GetHWnd(), "钱被凉借完了",NULL, MB_OKCANCEL);
	}
	if (count == ROW * COL - Mine_num)
	{
		//成功开完所有不是雷的格子
		MessageBox(GetHWnd(), "扫凉成功",NULL, MB_OKCANCEL);
	}

}
//   播放音乐
void PlayMusic(const char file[])
{
	char str[50] = "";
	sprintf_s(str, "close image/%s", file);
	mciSendString(str, 0, 0, 0);

	sprintf_s(str, "open image/%s", file);
	mciSendString(str, 0, 0, 0);

	sprintf_s(str, "play image/%s", file);
	mciSendString(str, 0, 0, 0);
	
}

//  自动打开附件空白
void OpenNull(int row,int col)
{
	if (map[row][col] == 0)
	{
		for (int i = row - 1; i <= row + 1; i++)
		{
			for (int j = col - 1; j <= col + 1; j++)
			{
				if (i>=0 && i<ROW && j>=0 && j<COL && map[i][j] > 19)
				{
					count++;
					map[i][j] -= 20;
					OpenNull(i, j);
				}
			}
		}
	}
}
//  扫雷功能实现
void GameInit()
{
	PlayMusic("GDYG.mp3");
	//生成地雷
	for (int i = 0; i < Mine_num;)
	{
		int n = rand() % ROW;
		int m = rand() % COL;
		if (map[n][m] == 0)
		{
			map[n][m] = -1;
			i++;
		}
	}//  遍历整个数组
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			// 当发现雷时
			if (map[i][j] == -1)
			{
				for (int n = i - 1; n <= i + 1; n++)
				{
					for (int m = j - 1; m <= j + 1; m++)
					{
						PlayMusic("");
						//   用于让数组不越界访问 ,并给雷一周的非雷单位+1
						if (n >= 0 && n < ROW && m >= 0 && m < COL && map[n][m] != -1)
						{
							map[n][m]++;
						}
					}
				}
			}
		}
	}
	//   加载图片
	char str[50] = "";
	for (int i = 0; i < 12; i++)
	{
		sprintf(str, "image/%d.jpg", i);
		loadimage(&image[i], str,SIZE,SIZE);  // 在加载图片时设置图片大小
	}
	//用于加载空白格子
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			map[i][j] += 20;
		}
	}
}

//在窗口上实现图片渲染
void Gamedraw()
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (map[i][j] == -1)   //加载地雷
			{
				putimage(j * SIZE, i * SIZE, &image[9]);
			}
			else if (map[i][j] >= 0 && map[i][j] <= 8)   //加载非地雷格子
			{
				putimage(j * SIZE, i * SIZE, &image[map[i][j]]);
			}
			else if (map[i][j] >= 19 && map[i][j] <= 28)   //覆盖所有格子
			{
				putimage(j * SIZE, i * SIZE, &image[10]);
			}
			else if (map[i][j] > 28)    //  设定标记格子
			{
				putimage(j * SIZE, i * SIZE, &image[11]);

			}
			else if (map[i][j] < -1)
			{
				putimage(j * SIZE, i * SIZE, &image[12]);

			}

		}
	}
}

//   鼠标事件操作
void MouseChoose()
{
	MOUSEMSG msg = GetMouseMsg();//获取鼠标消息
	int row = msg.y / SIZE;
	int col = msg.x / SIZE;
	if (msg.uMsg == WM_LBUTTONDOWN)   //鼠标左键打开格子
	{
		PlayMusic("click.wav");
		if(map[row][col]>=19)
		{
			count++;
			map[row][col] -= 20;
			OpenNull(row,col);
			jude(row, col);
			
		}
	}
	else if (msg.uMsg == WM_RBUTTONDOWN)
	{
		PlayMusic("search.wav");
		if(map[row][col]>=19&&map[row][col]<=28)  // 鼠标右键标记格子
		{
			map[row][col] += 20;
		}
		else if (map[row][col] > 28)
		{
			map[row][col] -= 20;

		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));  //设置随机数函数
	//int r =Choose();   //难度选择函数，未完工
	initgraph(ROW*SIZE, COL*SIZE,SHOWCONSOLE);   //  根据ROW 和 COL 初始化窗口的大小
	GameInit();    //游戏功能的实现
	
	while (1)
	{
		Gamedraw();   //游戏界面初始化
		MouseChoose();
	}
	getchar();
	return 0;
}

