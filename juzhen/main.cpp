// ��������һ�����׾��󲢴�ӡ���
#include<iostream>
#include<stdio.h>
#include<string.h>
int main()
{
    int A[2][2];
    int i, j;
    printf("���������A�е�Ԫ��:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("�������AΪ:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%8d",A[i][j]);
        }
        printf("\n");
    }

}
