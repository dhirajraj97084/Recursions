#include <iostream>
using namespace std;

int factorial(int n){
    if(n<=0)
        return 1;
    
   return n*factorial(n-1);
    
}

void print1(int n){
    //base case
    if(n==0){
    return ;
    }
    print1(n-1);
    cout<<n <<" ";      
}
void printNto1(int n){
    //base case
    if(n==0){
    return ;
    }
    cout<<n <<" "; 
    print1(n-1);
         
}

int main() {
   int n;
   cout<<"enter the number:";
   cin>>n;
   print1(n);
   cout<<endl;
   printNto1(n);
   cout<<endl;
   cout<<"factorial is:"<<factorial(n);
    return 0;
}