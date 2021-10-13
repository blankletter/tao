#include<stdio.h>
#include<math.h>
int main(){
	int x;
	printf("请输入想求的立方根：\n");
	scanf("%d",&x);
	double a=pow(x,1.0/3);
	printf("%f\n",a);
	int b;
	printf("请输入想求的平方根\n");
	scanf("%d",&b);
	printf("%f",sqrt(b));
	
	return 0;
}
