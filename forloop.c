
#include <stdio.h>
#include <conio.h>
using namespace std;
void main(){
    int even[10];
    int odd[10];
    int k=0,i,m=0;
    for(i=0;i<20;i++){
        if(ar[i]%2==0){
            even[k]=ar[i];
        }else{
            odd[m]=ar[i];
        }
        k++;
        m++;
    }
    printf("%d",even);
    printf("\n");
    printf("%d",odd);
}