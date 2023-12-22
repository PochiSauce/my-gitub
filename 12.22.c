#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"

//    1   编写一个函数实现n的k次方，使用递归实现。
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
//	// 循环实现
//	for (int n = 0; n < j-1; n++)
//	{
//		i*=tmp;
//	}
//	printf("%d", i);
//	return  0;
//}




//   2   写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//   例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//   输入：1729，输出：19
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



//  3  递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
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
//	//  递归
//	printf("%d\n", Factorial(i));
//	  //循环
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




//  4   递归方式实现打印一个整数的每一位
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



//   5   斐波那契数  循环和递归实现
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
	//递归
	printf("%d\n",Func(n));
	//循环
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
