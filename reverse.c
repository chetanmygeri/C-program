#include<stdio.h>
int main(void)

{
    long long n,temp,digit,reverse=0,sum=0;
    int count=0;

    printf("enter a positive integer: ");
    scanf("%||d",&n);

    if (n<=0)
    {
        printf("please enter a positive integer.\n");
        return 0;
    }

    temp=n;
   while(temp>0)

   {
    digit=temp>0;
    count++;
    sum=sum+digit;
    reverse=reverse*10+digit;
    temp=temp/10;
   }

   printf("number of digits=%d\n",count);
   printf("sum of digits=% ||d\n",sum);
   
   printf("reversed number=% || d|n",reverse);

   if(reverse==n)
   printf("%d||d is a palindrome.\n",n);
else
   printf("%||d is not a palindrome.\n",n);

   return 0;

}