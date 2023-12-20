#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"



//  1 猜数字游戏
//void meun()
//{
//	printf("*********************************\n");
//	printf("*********     1.进入    *********\n");
//	printf("*********     0.退出    *********\n");
//	printf("*********************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num;
//	printf("请猜数字\n");
//	while (1)
//	{
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("猜大了\n");
//			continue;
//		}
//		else if (num < ret)
//		{
//			printf("猜小了\n");
//			continue;
//		}
//		else
//		{
//			printf("猜对了\n");
//			Sleep(2000);
//			system("CLS");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		meun();
//		printf("请选择");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出成功\n");
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//		}
//	}while (input);
//	return 0;
//}







//  2  二分查找
//int main()
//{
//	int arr[] = {25,36,54,89,96,758,965,9655};
//	int key = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = --mid;
//		}
//		else if (arr[mid] < key)
//		{
//			left = ++mid;
//		}
//		else
//		{
//			if (arr[mid] == key)
//				printf("找到了,数字的下标是 %d", mid);
//				break;
//		}
//	}
//	if (left > right)
//		printf("没有找到");
// 
//	return 0;
//}




//  3  写一个二分查找函数
//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.
//int Binary_Search(int arr[], int sz,int key)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] < key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 5;
//	if (Binary_Search(arr, sz, key) == -1)
//		printf("没有找到");
//	else
//		printf("数字的下标是%d", Binary_Search(arr, sz, key));
//	return 0;
//}



// 4   喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
//int main()
//{
//	int money=20;
//	//scanf("%d", &money);
//	int total = money;
//	int kp = money;
//	while (kp >= 2)
//	{
//		total = total + kp / 2;
//		kp = kp / 2 + kp % 2;
//	}
//	printf("喝了%d瓶", total);
//}




