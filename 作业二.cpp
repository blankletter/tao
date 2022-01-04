#include<stdio.h>
#include<math.h>
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
	for(int p=2;p<99999;p++)
	{
		for(int q=2;q<99999;q++)
		{
		if(isprime(pow(q,p)+pow(p,q))==1)
		{
			printf("q=%d p=%d\n",q,p);
		}
		}
	}
	
	
	return 0;
 } 
