#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"

// 1 ���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

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



//   2  ��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

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

