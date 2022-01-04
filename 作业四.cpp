#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int fun(long long n)
{
	for (long long i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
int main() {
	for (long long q = 2; q < 9223372036854775807; q++)
	{
		for (long long p = 2; p < 9223372036854775807; p++)
		{
			if (fun(pow(p, q) + pow(q, p)) == true && fun(q) == true && fun(p) == true)
			{
				printf("p=%lld q=%lld\n", p, q);
			}
		}
	}
	return 0;
}
