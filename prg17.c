 #include<stdio.h>
 int main() {
 char a[50],b[50], copy[50],join[100],rev[50];
 int i=0,j=0,len=0,len2=0,same=1;
 printf("Enter first word: ");
 scanf("%49s",a);
 printf("enter second word: ");
 scanf("%49s", b);
 while (a[len] != '\0') len++;
 while (b[len2] != '\0') len2++;
 for (i=0; i<=len; i++) copy[i]=a[i];
 for (i=0; i<len; i++) join[i]=a[i];
 for (j=0; j<len2; j++) join[i+j]=b[j];
 join[len+len2]='\0';
    for (i=0;i<len;i++) rev[i]=a[len-1-i];
    rev[len]='0';
    for (i=0;i<=len && i<=len2;i++) {
        if (a[i]!=b[i]) {
            same=0;
            break;
        }
        if (a[i]='\0' && b[i]=='\0')
        break;
    }
    printf("length of first= %d\n copy=%s\nconcatenation =%s\n", len, copy,join);
    if (same && len==len2)
    printf("string are diffrent\n");
    printf("reverse=%sa\n", rev);
    same=1;
    for (i=0;i<len;i++) if (a[i]!=rev[i]){
        same=0;
        break;
    }
    if (same)
    printf("palindrome\n");
    else
    printf("not palindrome\n");
    return 0;
   
 }