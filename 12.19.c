#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"


//  1 多组输入，打印空心正方形
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1)
//					printf("* ");
//				else if (j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//  2 多组输入，打印X图形
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




// 3 编写一个程序，从用户输入中读取10个整数并存储在一个数组中。然后，计算并输出这些整数的平均值。

//int main()
//{
//	int arr[10] = { 0 };
//	int ret = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		ret = ret + arr[i];
//	}
//	printf("%f", ret / 10.0);
//	return 0;
//}



//  4  KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答。
  //   vs 没有变长数组无法实现
//int main()
//{
//	int n,m;
//	while (scanf("%d%d", &n, &m))
//	{
//		int arr[n][m];
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				scanf("%d", &arr[i][j]);       // 按[i][j]序列存放
//			}
//		}
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				scanf("%d", &arr[j][i]);         //按[j][i]序列打印即可完成转置
//			}
//		}
//
//	}
//	return 0;
// }




//   5  输入10个整数，要求按输入时的逆序把这10个数打印出来。
//int main()
//{
//	int arr[10] = { 0 };
//	for(int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 9; i <= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}




//  6  将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int arr1[3] = { 22,33,66 };
//	int arr2[3] = { 55,88,99 };
//	for (int i = 0; i < 3; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}





//   7输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i, j;
//	scanf("%d%d",&n, &m);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (j = 0; j < m;j++)
//	{
//		scanf("%d", &arr2[j]);
//	}
//	i = 0;
//	j = 0;
//	while (i<n&&j<m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	while (i < n)
//	{
//		printf("%d ", arr1[i]);
//		i++;
//	}
//	while (j<m)
//	{
//		printf("%d ", arr2[j]);
//		j++;
//	}
//	return 0;
//}



//  8 实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定如
//void Kjb(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		Kjb(n);
//	}
//	return 0;
//}



//    9   实现函数判断year是不是润年。
//void Leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//		printf("%d不是闰年\n", year);
//}
//int main()
//{
//	int year;
//	while(scanf("%d", &year)!=EOF)
//	{
//		Leap_year(year);
//	}
//	return 0;
//}



//   10   实现一个函数is_prime，判断一个数是不是素数。
//int is_prime(int num)
//{
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int num;
//	while (scanf("%d", &num) != EOF)
//	{
//		if (is_prime(num) == 0)
//			printf("%d是素数\n",num);
//		else
//			printf("%d不是素数\n", num);
//	}
//	return 0;
//}




//  11  利用上面实现的is_prime函数，打印100到200之间的素数。
//void is_prime()
//{
//	int count = 0;
//	int flag = 0;
//	for (int num =101; num <=200; num+=2)
//	{
//		flag = 1;
//		for (int i = 2; i <= sqrt(num); i++)
//		{
//			if (num % i == 0)
//			{
//				flag = -flag;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", num);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//}
//int main()
//{
//    is_prime();
//	return 0;
//}




// 12   创建一个整形数组，完成对数组的操作

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
void init(int arr[5], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[5], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[5],int sz)
{
	int i = 0;
	while(sz/2)
	{
		int tmp = arr[i];
		arr[i] = arr[sz-1];
		arr[sz-1] = tmp;
		sz--;
		i++;
	}
}
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//init(arr,sz);
	reverse(arr, sz);
	print(arr, sz);

	return 0;
}








