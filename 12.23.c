#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;   
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//    //��������Ԫ�صĵ�ַǿ������ת������short*����
//    //��һ��+iֱ���޸���Ԫ�أ����Ǻ���Ԫ����ȻΪint����
//    //short*��ָ��+���βſ����޸�һ��;
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
//    //�� *(pulPtr + 3) + 3��ֵ�� *(pulPtr + 3)
//    //*(pulPtr + 3) += 3;       // *(pulPtr + 3)== *(pulPtr + 3) +3;
//    printf("%d,%d\n", *pulPtr, *(pulPtr + 3));   
//    //���Դ�ӡ�ĵ�һ��ֵΪ�������Ԫ�أ����ڶ���ֵΪ����ĵ�����Ԫ�ؼ���3������Ϊ6��12
//    return 0;
//}




//  ��������ʱ������������������������
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



//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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




//����Ļ�����9*9�˷��ھ���
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



//���������������������������Լ��
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
//	printf("���Լ����%d", b);
//	return 0;
//}




//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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



