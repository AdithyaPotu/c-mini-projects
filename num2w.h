#include<stdio.h>
#include<stdlib.h>
#define limit 100
void num2word(int n)
{
char *str[100]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN"};
char *str2[100]={"ELEVEN","TWELEVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINETEEN"};
char *str3[100]={"TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"};
char *str4[100]={"HUNDRED","THOUSAND","LAKHS","CRORE"};
switch(n)
{
if(n<=10)
{
case 0: printf("%s",str[0]);break;
case 1: printf("%s",str[1]);break;
case 2: printf("%s",str[2]);break;
case 3: printf("%s",str[3]);break;
case 4: printf("%s",str[4]);break;
case 5: printf("%s",str[5]);break;
case 6: printf("%s",str[6]);break;
case 7: printf("%s",str[7]);break;
case 8: printf("%s",str[8]);break;
case 9: printf("%s",str[9]);break;
case 10: printf("%s",str[10]);break;
}
else if(n>10&&n<20)
{
case 11: printf("%s",str2[0]);break;
case 12: printf("%s",str2[1]);break;
case 13: printf("%s",str2[2]);break;
case 14: printf("%s",str2[3]);break;
case 15: printf("%s",str2[4]);break;
case 16: printf("%s",str2[5]);break;
case 17: printf("%s",str2[6]);break;
case 18: printf("%s",str2[7]);break;
case 19: printf("%s",str2[8]);break;
}

else if(n<=20||n<=30||n<=40||n<=50||n<60||n<=70||n<=80||n<=90)
{
if(n==20&&n<30){printf("%s",str3[0]);break;}
if(n==30&&n<40){printf("%s",str3[1]);break;}
if(n==40&&n<50){printf("%s",str3[2]);break;}
if(n==50&&n<60){printf("%s",str3[3]);break;}
if(n==60&&n<70){printf("%s",str3[4]);break;}
if(n==70&&n<80){printf("%s",str3[5]);break;}
if(n==80&&n<90){printf("%s",str3[6]);break;}
if(n==90){printf("%s",str3[7]);break;}
}
}
}
