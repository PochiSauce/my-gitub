#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;   
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//    //把数组首元素的地址强制类型转换成了short*类型
//    //第一次+i直接修改首元素，但是后续元素仍然为int类型
//    //short*的指针+两次才可以修改一次;
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//int main()
//{
//    unsigned long pulArray[] = { 6,7,8,9,10 };
//    unsigned long* pulPtr;
//    pulPtr = pulArray;
//    *(pulPtr + 3) = *(pulPtr + 3) + 3;
//    //将 *(pulPtr + 3) + 3赋值给 *(pulPtr + 3)
//    //*(pulPtr + 3) += 3;       // *(pulPtr + 3)== *(pulPtr + 3) +3;
//    printf("%d,%d\n", *pulPtr, *(pulPtr + 3));   
//    //所以打印的第一个值为数组的首元素，而第二个值为数组的第三个元素加上3，则结果为6，12
//    return 0;
//}




//  不创建临时变量，交换两个变量的内容
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}



//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}




//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i;
//	for (i = 1; i <=9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	while (a%b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是%d", b);
//	return 0;
//}




//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main()
{
	double ret = 0;
	double num = 0;
	int flag = 1;
	for (int i = 1; i <= 100; i++)
	{
		ret = (1.0 / i) * flag;
		num += ret;
		flag = -flag;
	}
	printf("%f", num);
	return 0;
}



