#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0)
    return 1;   
    
    return n*factorial(n-1);
    
}

int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int result=factorial(n);
    cout<<"factorial of "<< n <<" is :"<<result<<endl;
    cin>>n;
}