#include<iostream>
using namespace std;
int power(int n){
    //base case
    if(n==0)
    return 1;

    return 2*power(n-1);
}

int main(){
    int n;
    cout<<"enter the valuse of n :";
    cin>>n;
    int result=power(n);
    cout<<result<<endl;
}