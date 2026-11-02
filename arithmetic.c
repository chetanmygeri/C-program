#include<stdio.h>

int main(void)

{
    int a,b;

    printf("enter two integers: ");
    scanf("%d%d",&a,&b);

    printf("sum=%d\n", a+b);
    printf("differnce=%d\n", a-b);
    printf("product=%d\n", a*b);

if(b!=0)
     {
        printf("Quptient=%d\n",a/b);
        printf("Remainder=%d\n",a%b);
     }
     else
     {
        printf("division & remainder cannot be performed because the second integer is zero.\n");
     }
     return 0;
}

