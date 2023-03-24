#include <iostream>
using namespace std;
int main(){
    int row= 1;
    int n;
    cout<<"enter n";
    cin>>n;

    while(row<=n){

        int col=4;
        while(col>=row){
            cout<<"#";
            col=col-1;
        }
        cout<<endl;
        row=row+1;


    }
}