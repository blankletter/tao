#include<stdio.h>
#include<math.h>
int main(){
	int cout=0;
	for(int i=1;i<=2000000;i++)//2000000表示在这个范围内的满足条件的 
	{	
		int t=i;
		while(t!=0)
		{
		cout+=(t%10==1)?1:0;
		t=t/10;
		}
		if(cout==i)
		{
		printf("%d\n",cout);
		}
	}
	return 0;
}
