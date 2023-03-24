#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,m,d,i;
    int s=0;
    
    
    cout<<"enter binary no."<<endl;
    cin>>n;
    cout<<"enter no of digits";
    cin>>d;
    for(i=0;i<=d;i++){
        m=n%10;
        n=n/10;
        s=s+(m*pow(2,i));


    }
    cout<<"no. is"<<" "<<s;

}
