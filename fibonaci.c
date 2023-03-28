#include <stdio.h>
#include <conio.h>
void main(){
    int a=0,b=1,c=0,n=20,i,even=0,odd=0;
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
        if(i%2==0){
            even=even+c;
        }
        else{
            odd=odd+c;
        }
    }
    printf("\n");
    printf("%d",even);
    printf("\n");
    printf("%d",odd);
}