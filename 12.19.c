#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"


//  1 �������룬��ӡ����������
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




//  2 �������룬��ӡXͼ��
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




// 3 ��дһ�����򣬴��û������ж�ȡ10���������洢��һ�������С�Ȼ�󣬼��㲢�����Щ������ƽ��ֵ��

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



//  4  KiKi��һ����������֪��ת�ú�ľ��󣨽���������л����õ����¾����Ϊת�þ��󣩣����̰������
  //   vs û�б䳤�����޷�ʵ��
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
//				scanf("%d", &arr[i][j]);       // ��[i][j]���д��
//			}
//		}
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				scanf("%d", &arr[j][i]);         //��[j][i]���д�ӡ�������ת��
//			}
//		}
//
//	}
//	return 0;
// }




//   5  ����10��������Ҫ������ʱ���������10������ӡ������
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




//  6  ������A�е����ݺ�����B�е����ݽ��н�����������һ����
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





//   7���������������е����У����������кϲ�Ϊһ���������в������
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



//  8 ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
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



//    9   ʵ�ֺ����ж�year�ǲ������ꡣ
//void Leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d������\n", year);
//	}
//	else
//		printf("%d��������\n", year);
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



//   10   ʵ��һ������is_prime���ж�һ�����ǲ���������
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
//			printf("%d������\n",num);
//		else
//			printf("%d��������\n", num);
//	}
//	return 0;
//}




//  11  ��������ʵ�ֵ�is_prime��������ӡ100��200֮���������
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




// 12   ����һ���������飬��ɶ�����Ĳ���

//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
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








