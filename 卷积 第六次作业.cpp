// 卷积（Convolution）是当前神经网络的基础算法
// 卷积的原理不复杂，网上有大量资料和实现，包括C语言实现
// 大家自行设计一个卷积函数，输入一个向量和卷积核，输出卷积的结果
//单通道单卷积核  5*5矩阵，3*3卷积核 
#include<stdio.h>
#include<math.h>
int main(){
	int a[5][5];//输入矩阵 
	for(int i1=0;i1<5;i1++)
	{
		for(int j1=0;j1<5;j1++)
		{
			scanf("%d",&a[i1][j1]);
		}
	} 
	int b[3][3];//输入卷积核 
	for(int i2=0;i2<3;i2++)
	{
		for(int j2=0;j2<3;j2++)
		{
			scanf("%d",&b[i2][j2]);
		}
	}
	int c[3][3];//最后卷积的结果 
	for(int i3=0;i3<3;i3++)
	{
		for(int j3=0;j3<3;j3++)
		{
		c[i3][j3]=a[i3][j3]*b[i3][j3]+a[i3+1][j3]*b[i3+1][j3]+a[i3+2][j3]*b[i3+2][j3]+a[i3][j3+1]*b[i3][j3+1]+a[i3][j3+2]*b[i3][j3+2]+a[i3+1][j3+1]*b[i3+1][j3+1]+a[i3+1][j3+2]*b[i3+1][j3+2]+a[i3+2][j3+1]*b[i3+2][j3+1]+a[i3+2][j3+2]*b[i3+2][j3+2]+1; 
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
