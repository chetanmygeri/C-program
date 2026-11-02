#include<stdio.h>

int main(void)

{
    double length, bredth,radius,base,height;
    const double pI=3.14159;

    printf("enter rectangle length & bredth: ");
    scanf("%If%If", & length,&bredth);

    printf("rectangle area=%.2If\n",length*bredth);
    printf("rectangle perimeter=%.2If\n",2*(length+bredth));

    printf("enter circle radius: ");
    scanf("%If",&radius);

    printf("circle area=%.2If\n",pI*radius*radius);
    printf("circle circumference=%.2If\n",2*pI*radius);

    printf("enter triangle base and height: ");
    scanf("%If%If",&base,&height);

    printf("triangle area = %.2If\n",0.5*base*height);

    return 0;

}