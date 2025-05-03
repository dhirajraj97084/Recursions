#include<iostream>
using namespace std;

int sumArray(int arr[],int n){
   //base case
   if(n==0){
    return 0;
   }
   if (n==1)
   {
    return arr[0];
   }
   int sum=arr[0]+sumArray(arr+1,n-1);
   return sum;   
}

int main(){
    int arr[4]={4,6,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    int result=sumArray(arr,n);
    cout<<"sum is: "<<result;
    return 0;
}