#include <iostream>
#include <math.h>
using namespace std;
//counting of notes
int main(){
    int amt,res,a,c,b;
    cout<<"enter amt"<<endl;
    cin>>amt;
    c=amt%100;
    cout<<"enter choice"<<endl;
    cin>>res;

    
    switch(res){

        case 1: cout<<"no. of 100 rupee note needed"<<endl;
                a=(amt/100);
                cout<<a;
                break;
        case 2: cout<<"no. of 50"<<endl;
                b=c/50;
                cout<<b;
                break;
        case 3: cout<<"no. of 10 rupee notes"<<endl;
                cout<<(c%50)/10;
                break;
        default:cout<<"not applicable"<<endl;                            
    }

}












