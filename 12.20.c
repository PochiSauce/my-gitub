#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"



//  1 ��������Ϸ
//void meun()
//{
//	printf("*********************************\n");
//	printf("*********     1.����    *********\n");
//	printf("*********     0.�˳�    *********\n");
//	printf("*********************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num;
//	printf("�������\n");
//	while (1)
//	{
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("�´���\n");
//			continue;
//		}
//		else if (num < ret)
//		{
//			printf("��С��\n");
//			continue;
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳��ɹ�\n");
//			break;
//		default:
//			printf("ѡ���������������\n");
//		}
//	}while (input);
//	return 0;
//}







//  2  ���ֲ���
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
//				printf("�ҵ���,���ֵ��±��� %d", mid);
//				break;
//		}
//	}
//	if (left > right)
//		printf("û���ҵ�");
// 
//	return 0;
//}




//  3  дһ�����ֲ��Һ���
//���ܣ���һ�����������в���ָ������ֵ���ҵ��˾ͷ����±꣬�Ҳ����ͷ��� - 1.
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
//		printf("û���ҵ�");
//	else
//		printf("���ֵ��±���%d", Binary_Search(arr, sz, key));
//	return 0;
//}



// 4   ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���
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
//	printf("����%dƿ", total);
//}




