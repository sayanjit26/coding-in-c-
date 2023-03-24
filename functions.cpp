#include <iostream>
using namespace std;
int fact(int u){
    int ans=1;
    int i;
    for(i=1;i<=u;i++){
        ans=ans*i;
        

    }
    return ans;
}
int nCr(int n , int r){
    int num=fact(n);
    int deno=fact(r)*fact(n-r);
    int ans1=num/deno;
    return ans1;
}

int main(){
    int a,b;
    cout<<"enter a nd b"<<endl;
    cin>>a>>b;
    
    cout<<nCr(a,b)<<endl;
}

