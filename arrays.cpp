#include <iostream>
#include <math.h>
using namespace std;
int maxno(int n[],int size){
      int max=0;
      for(int i=0;i<=size-1;i++){
        if(n[i]>n[i+1]){
             max=n[i];
        }
      }
      return max;

}    

int main(){
    int size;
    cin>>size;
    int n[10];
    for(int i=0;i<=size-1;i++){
        cin>>n[i];
    }
    
    cout<<"max is"<< maxno(n,size);
    
}
