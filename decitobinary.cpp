#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;
int main(){
    int i;
    int n;
    cin>>n;
    string s;
    while(n!=0){
        int b= n%2;
        n=n/2;
        s=s+to_string(b);
    }
    reverse(s.begin(),s.end());
    cout<<" "<<s<<endl;
    
    

}
/*  int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int bit=n & 1;
        ans= (bit * pow(10,i))+ans;
        n= n>>1;
        i++;



    }
    cout<<"ans is"<< " "<<ans<<endl;
*/