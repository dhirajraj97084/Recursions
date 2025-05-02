#include<iostream>
using namespace std;

void reachHome(int src ,int desti){
    cout<<" source step "<< src << " destination "<< desti<<endl;
    //base case
    if(src==desti){
        cout<<"pahuch gye bhai";
        return ;
    }
    src++;
    cout<<endl;
    reachHome( src , desti)  ;  
}

int main(){
    int src=0;
    int desti=5;
    reachHome(src,desti);
    return 0;
}