#include<iostream>
using namespace std;
void print(int arr[],int n,int i=0){
   //basecase
   if(n==0){
    return ;
   }
   cout<<arr[i]<<" ";
   print(arr,n-1,i+1);
}

bool isSorted(int arr[],int n,int i=0){
   if(n==0 || n==1){
    return true;
   }
   if (arr[0]>arr[1]){
    return false;
   }
return isSorted( arr, n-1,i+1);
   
}

int main(){
    int arr[]={3,15,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
     print(arr,size);
     cout<<endl;
     cout<<isSorted(arr,size);
    return 0;
}