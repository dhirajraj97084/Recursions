#include<iostream>
using namespace std;

void power(int n){
    //base case
    if(n==0){
    return ;
    }

    cout<<n<<endl;

     power(n-1);
}

int main(){
    int n;
    cout<<"enter the valuse of n :";
    cin>>n;
   power(n);
}