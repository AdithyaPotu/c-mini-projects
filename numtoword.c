#include"num2w.h"
int getplace(int n)
{
	int dp;
	while(n!=0)
	{
		if(n>10000000)//this is check more one crore
		{
			dp=8;
		}
		else if( n>1000000)//this is check more than ten lakhs
		{
			dp=7;
		}
		else if(n>100000)//this is check more one lakhs 
		{
			dp=6;
		}
		else if(n>10000)//this is check more than ten thousands
		{
			dp=5;
		}
		else if(n>1000)//this checks more than thousand
		{
			dp=4;
		}
		else if(n>100)// this checks more than hundred
		{
			dp=3;
		}
		else if(n>10)// this checks more then tens
		{
			dp=1;
		}
		else if(n<10)
		{
			dp=1;
		}
		switch(dp)
		{
			case 8:
				{
					n/=1000000;
					num2word(n);
					printf("\tcrore");
				}
				break;
			case 7:
				{
					n/=1000000;
					num2word(n);
				}
				break;
			case 6:
				{
					n/=100000;
					num2word(n);
					printf("\tlakhs");
				} 

				break;
				printf("\tlakhs");
			case 5:
				{
					n/=10000;
					num2word(n);

				}
				break;
			case 4:
				{ 
					n/=1000;
					num2word(n);
					printf("\tthousands");
				}
				break;
			case 3:
				{
					n/=100;
					num2word(n);
					printf("\tHundreds");
				}
			case 2:
				{
					num2word(n);
				}
			case 1:
				{
					num2word(n);
				}
			default:
				{
					printf("\tis the value in Words");
				}
		}break;
	}
	return 0;
}
void main()
{
	int n;
	printf("Enter the number upto 8 digits:");
	scanf("%d",&n);
	getplace(n);
}
