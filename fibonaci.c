#include <stdio.h>
#include <conio.h>
void main(){
    int a=0,b=1,c=0,n=10,i;
    printf("%d",a);
    printf(" ");
    printf("%d",b);
    printf(" ");
    for(i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
        printf(" ");
    }
}