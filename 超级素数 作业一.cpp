#include<stdio.h>
int isprime(int n)
{
	int i;
 	for(i=2;i<n;i++)
   	if(n%i==0)
	{
	return 0;
    }
	else 
    {
 	return 1;
    }
}
int main()
{	
	int sum=0;
	int q=0;
	for(int i=101;i<10000;i++)
  	{
  	if(i>100&&i<1000)
	{
		int a,b,c;
	  	a=i%10;
	  	b=((i-a)/10)%10;
	  	c=i%100;
	  	if(isprime(i)&&isprime(a+b+c)&&isprime(a*a+b*b+c*c)==1)
	  	{
	  	printf("%d\n",i);
		sum=sum+i;
		q+=1;
		}
	}
	if(i>=1000&&i<10000)
	{
		int w,x,y,z;
		w=i%10;
		x=((i-w)/10)%10;
		y=((i-w-x*10)/100)%10;
		z=i/1000;
		if(isprime(i)&&isprime(w+x+y+z)&&isprime(w*w+x*x+y*y+z*z)==1)
		{
		printf("%d\n",i);
		sum=sum+i;
		q+=1;	
		}	
	}	
	}
	float averg=0;
	averg=sum/q;
	printf("\n");
	printf("%lf",averg);
	return 0;
}
