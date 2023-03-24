#include <iostream>
using namespace std;
int main(){
    int n;
    int i;
    int c=0;
    cout<<"enter n"<<endl;
    cin>>n;
    for(i=1;i<=n-1;i++){
        if(n%i==0){
            c++;
        }
        
    }
        
            
        
        if(c==1){
            cout<<"prime";

        }
        else{
            cout<<"not prime";
        }
        
        

    
    cout<<endl;
}