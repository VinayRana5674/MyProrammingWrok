#include<stdio.h>
#include<conio.h>
int isPrime(int n)//Function to check if a number is Prime.
{
int c=0;
for(int i=2;i<=n/2;i++)
{
if(n%i==0)
c++;
}
if(c==0)//Prime no.has 2 factors-1 and number itself.
return 1;
else
return 0;
}

int main()
{
int num,diff1=0,diff2=0,num1=0,num2=0;
printf("Enter number whose nearest prime is to be found.");
scanf("%d",&num);

for(int i=num;;i++)//No end limit as when prime will be found we will break the loop.
{
if(isPrime(i))
{
diff1=i-num;
num1=i;
break;
}
}
for(int i=num;;i--)//No end limit as when prime will be found we will break the loop.
{
if(isPrime(i))
{
diff2=num-i;
num2=i;
break;
}
}}
