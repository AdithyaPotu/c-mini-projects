#include<stdio.h>
//#include<stdlib.h>
int add(int a,int b)
{
	int sum = a+b;
	return sum;
}
int sub(int a,int b)
{
	int diff;
	if(a>b)
	{
		diff= a-b;
	}
	else if(b>a)
	{
		diff =b-a;
	}
	return diff;
}
int mul(int a, int b)
{
	int product;
	product=a*b;
	return product;
}
int div(int a,int b)
{
	int quot;
	if(a>b)
	{
		quot=a/b;
	}
	else if(b>a)
	{
		quot=b/a;
	}
	return quot;
}

