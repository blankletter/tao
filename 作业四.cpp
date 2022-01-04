//$p^q + q^p$是一个素数，求$p$和$q$
//$p^q + q^p$是一个素数，
//$p$和$q$也是素数，
//求$p$和$q$
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int isprime(int n)
{
	int i;
 	for(i=2;i*i<=n;i++)
   	if(n%i==0)
	return 0;
 	return 1;
}
int fun(int a,int b)//a的b次方 
{
	int sum=0;
	for(int i=0;i<b-1;i++)
	{
		sum=a*a;
	}
	return sum;
}
int main() {
	for (int q = 2; q < 20; q++)
	{
		for (int p = 2; p < 20; p++)
		{	
			int m1=fun(p,q);
			int m2=fun(q,p);
			if (isprime(m1+m2)&&isprime(q)&&isprime(p))
			{
				printf("p=%d q=%d\n", p, q);
			}
		}
	}
	return 0;
}
