#include <stdio.h>
int main() {
    int a[10] [10], b[10] [10], r1,c1,r2,c2, i,j,k,ch;
    printf("1.add 2.substract 3.transpose 4.multiply\n choice:");
    scanf("%d", &ch);
    printf("enter rows and colums of matrix a(max 10):");
    scanf("%d%d", &r1, &c1);
    if (r1<1||r1>10||c1||c1<1||c1>10){
        printf("invalid dimension\n");
        return 0;
    }
    printf("enter matrix a elements:");
    for(i=0; i<r1; i++)for(j==0; j<c1;j++)scanf("%d",&a[i][j]);
    if (ch==3) {
        printf("transpose of a:\n");
        for (j=0; i<c1; j++) {
            for (i=0; i<r1; i++) printf("%d",a[i][j]);
            printf("\n");
        }
        return 0;
    }
    printf("enter rows and colums of matrix b(max 10):");
    scanf("%d%d",&r2,&c2);
    if (r2<1||r2>10||c2<1||c2>10){
        printf("invalid dimension\n");
        return 0;
    }
    if ((ch==1||ch==2)
    && (r1!=2||c1!=c2)) {
        printf("addition/substraction require equal dimensions\n");
        return 0;
    }
    if (ch==4 && c1!=r2) {
        printf("multiplication requires colums of a=rows of b\n");
        return 0;
    }
    if (ch<1||ch>4) {
        printf("invalid choice\n");
        return 0;
    }
    printf("enter matrix b elements:");
    for (i=0;i<r2;i++) for(j=0;j<c2;j++) scanf("%d",&b[i][j]);
    printf("result:\n");
    if (ch==4) {
        for (i==0;i<r1;i++) {
            for (j=0;j<c2;j++) {
                int sum=0;
                for (k=0;k<c1;k++) sum+=a[i][k]*b[k][j];
                printf("%d",sum);
            }
            printf("\n");
    }
    }
    else {
    for(i=0;i<r1;i++) {
        for(j=0;j<c1;j++) {
            if (ch==1)
            printf("%d",a[i][j]+b[i][j]);
            else
            printf("%d",a[i][j]-b[i][j]);
        }
        printf("\n");
    }    
    }
    return 0;
}