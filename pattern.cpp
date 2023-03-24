#include <iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"enter n"<<endl;
    cin>>n ;
    
    while(i<=n){
        int j= 1;
        
        while(j<=i){
            char ch='D'-i+j;
            cout<<ch;
            j= j+1;
            
        }
        
        cout<<endl;
        i=i+1;

    

    }
    



}
