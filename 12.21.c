#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"


//  1  打印菱形

//int main()
//{
//	int line;
//	while (scanf("%d", &line) != EOF)
//	{
//		//on_line用于打印上半部分，down_line用于打印下半部分
//		int on_line = line / 2 + 1;
//		int down_line = line / 2;
//
//		//打印上半部分
//		for (int i = 0; i < on_line; i++)
//		{
//			//打印空格
//			for (int j = 0; j < on_line-i-1; j++)
//			{
//				printf(" ");
//			}
//			//打印*号
//			for (int j = 0; j < 2 * i + 1; j++)
//			{
//				printf("*");
//			}
//			//打印完一轮换行
//			printf("\n");
//		}
//		//打印下半部分
//		for (int i = 0; i < down_line; i++)
//		{
//			//打印空格
//			for (int j = 0; j <i+1; j++)
//			{
//				printf(" ");
//			}
//			//打印*号
//			              //   两种公式都可以用于此处
//			//for (int j = 0; j < (down_line - 1 - i)*2+1; j++)
//			for (int j = 0; j < (down_line- i) * 2 -1; j++)
//			{
//				printf("*");
//			}
//			//打印完一轮换行
//			printf("\n");
//		}
//	}
//	return 0;
//}



int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        //打印上半部分
        for (int x = 0; x < n + 1; x++)
        {
            for (int y = 0; y < n - x; y++)
            {
                printf(" ");
            }
            for (int y = 0; y <= x; y++)
            {
                printf("* ");
            }
            printf("\n");
        }
        //打印下半部分
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y <=x; y++)
            {
                printf(" ");
            }
            for (int y = 0; y < n - x; y++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}