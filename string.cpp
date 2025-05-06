#include<iostream>
using namespace std;

void reverce(string& str,int s,int end){
  //base case
  if(s>end){
    return ;
  } 
  swap(str[s],str[end]);
  s++;
  end--;
  
  reverce(str,s,end); 
}
int main(){
   string str="dhiraj";
   cout<<str<<" "<<endl;
   int end=str.size()-1;
   reverce(str,0,end);
   cout<<str<<" "<<endl;
   return 0;
}