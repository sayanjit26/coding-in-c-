#include <iostream>
#include <math.h>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<end){
        if (arr[mid]==key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }  
        mid=(start+end)/2;     
    }
    return -1;
}
int main(){
    int arr[10]={8,10,12,14,18,19,27,29,34,49};
    int value;
    cout<<"enter key"<<endl;
    cin>>value;
    int size=10;
    int ans=binarysearch(arr,size,value);
    cout<<"ans is"<<ans;
}