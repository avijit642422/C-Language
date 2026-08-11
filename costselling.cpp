#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter the cost price:";
    cin>>cp;
    int sp;
    cout<<"enter the selling price:";
    cin>>sp;
    if(sp>cp){
        cout<<"profit";
    }else if(cp>sp){
        cout<<"loss";
    }else if(sp==cp){
        cout<<"no profit no loss";
    }
    return 0;
}