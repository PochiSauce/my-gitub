#define _CRT_SECURE_NO_WARNINGS 1
#include"标头.h"

// 1 求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//int main()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int count = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		int num = 0;
//		while (tmp)
//		{
//			num+=pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (num == i)
//			printf("%d ", i);
//	}
//	return 0;
//}



//   2  求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	int tmp = 0;
	int num = 0;
	for (int i = 0; i < y; i++)
	{
		tmp =tmp * 10 + x;
		num += tmp;
	}
	printf("\n%d", num);
	return 0;
}

