#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"

//    1   ��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//int Func1(int i, int j)
//{
//	if (j == 0)
//		return 1;
//	else
//		return i * Func1(i, j - 1);
//}
//int main()
//{
//	int i, j;
//	scanf("%d%d", &i, &j);
//	//printf("%d", Func1(i, j));
//	int tmp = i;
//	// ѭ��ʵ��
//	for (int n = 0; n < j-1; n++)
//	{
//		i*=tmp;
//	}
//	printf("%d", i);
//	return  0;
//}




//   2   дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//   ���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//   ���룺1729�������19
//int DigitSum(int n)
//{
//	int ret = n % 10;
//	if (n<10)
//		return ret;
//	else
//		return ret+DigitSum(n/10);
//}
//int main()
//{
//	int n,ret;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//	return 0;
//}



//  3  �ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//int Factorial(int i)
//{
//	if (i == 0)
//		return 1;
//	else
//		return i * Factorial(i - 1);
//}
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	//  �ݹ�
//	printf("%d\n", Factorial(i));
//	  //ѭ��
//	int ret = 1;
//	int num = 0;
//	for (int j = 1; j <= i; j++)
//	{
//		ret *= j;
//		//num += ret;
//	}
//	printf("%d\n", ret);
//	//printf("%d", num);
//	return 0;
//}




//  4   �ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void Printf(int n)
//{
//	if (n == 0)
//		return 0;
//	Printf(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	Printf(n);
//	return 0;
//}



//   5   쳲�������  ѭ���͵ݹ�ʵ��
int Func(int n)
{
	if (n<=2)
		return 1;
	else
		return Func(n - 2) + Func(n-1);
}
int main()
{
	int n;
	scanf("%d", &n);
	//�ݹ�
	printf("%d\n",Func(n));
	//ѭ��
	int i = 1;
	int j = 1;
	int ret = 0;
	if (n <= 2)
		printf("1");
	else
	{
		while (n>2)
		{
			ret = i + j;
			i = j;
			j = ret;
			n--;
		}
	}
	printf("%d", ret);
	return 0;
}
