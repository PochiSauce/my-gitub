#define _CRT_SECURE_NO_WARNINGS 1
#include"��ͷ.h"


//  1  ��ӡ����

//int main()
//{
//	int line;
//	while (scanf("%d", &line) != EOF)
//	{
//		//on_line���ڴ�ӡ�ϰ벿�֣�down_line���ڴ�ӡ�°벿��
//		int on_line = line / 2 + 1;
//		int down_line = line / 2;
//
//		//��ӡ�ϰ벿��
//		for (int i = 0; i < on_line; i++)
//		{
//			//��ӡ�ո�
//			for (int j = 0; j < on_line-i-1; j++)
//			{
//				printf(" ");
//			}
//			//��ӡ*��
//			for (int j = 0; j < 2 * i + 1; j++)
//			{
//				printf("*");
//			}
//			//��ӡ��һ�ֻ���
//			printf("\n");
//		}
//		//��ӡ�°벿��
//		for (int i = 0; i < down_line; i++)
//		{
//			//��ӡ�ո�
//			for (int j = 0; j <i+1; j++)
//			{
//				printf(" ");
//			}
//			//��ӡ*��
//			              //   ���ֹ�ʽ���������ڴ˴�
//			//for (int j = 0; j < (down_line - 1 - i)*2+1; j++)
//			for (int j = 0; j < (down_line- i) * 2 -1; j++)
//			{
//				printf("*");
//			}
//			//��ӡ��һ�ֻ���
//			printf("\n");
//		}
//	}
//	return 0;
//}



int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        //��ӡ�ϰ벿��
        for (int x = 0; x < n + 1; x++)
        {
            for (int y = 0; y < n - x; y++)
            {
                printf(" ");
            }
            for (int y = 0; y <= x; y++)
            {
                printf("* ");
            }
            printf("\n");
        }
        //��ӡ�°벿��
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y <=x; y++)
            {
                printf(" ");
            }
            for (int y = 0; y < n - x; y++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}