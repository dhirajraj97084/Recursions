#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
     //base case
     if(size==0 ||size==1){
        return true;
     }
     if (arr[0]>arr[1])
     {
        return false;
     }
     else{
        bool ans=isSorted(arr+1,size-1);
        return ans;
     }    
}

int main(){
    int arr[6]={1,4,7,9,11,13};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"my array is : "<<isSorted(arr,n);
    return 0;
}