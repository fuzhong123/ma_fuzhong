// 键盘输入一个二阶矩阵并打印结果
#include<iostream>
#include<stdio.h>
#include<string.h>
int main()
{
    int A[2][2];
    int i, j;
    printf("请输入矩阵A中的元素:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("这个矩阵A为:\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%8d",A[i][j]);
        }
        printf("\n");
    }

}
