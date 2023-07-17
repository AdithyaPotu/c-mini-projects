#include"calc.h"
int main()
{
	int a,b,loop=0,chance=10;
	//do{
Runagain://loop to get back and run
		printf("\nEnter the two numbers:");
		scanf("%d%d",&a,&b);
		int sum,option;
		printf("Choose the operation: \n1.Addition \n2.Subtraction based on greater number\n3.Multiplication \n4.Division based on greaternum \nEnter the operation :");
		scanf("%d",&option);
		switch(option)
		{
			case 1:printf("\nyou have choosed addition");
			       sum=add(a,b);
			       printf("\nresult of addition:\n%d",sum);
			       break;
			case 2:printf("\nYou have choosed difference");
			       sum=sub(a,b);
			       printf("\nresult of subtraction:\n%d",sum);
			       break;
			case 3:printf("\nyou have choosed Multiplication");
			       sum=mul(a,b);
			       printf("\nresult of multiplication\n:%d",sum);
			       break;
			case 4:printf("\nyou have choosed Division");
			       sum=div(a,b);
			       printf("\nresult of Division:\n%d",sum);
			       break;
			default:
				printf("\nInvalid Choice....Please try again to enter you have %d chances",chance);  
				chance--;
				loop++;
				if(loop>=10&&chance==0)
                                {
                                        //goto Runagain;
                                        break;
                                }
                                goto Runagain;
				
		}
	//}while(loop>=10);
}
