#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"a is:";
    cin>>a;
    int b;
    cout<<"b is:";
    cin>>b;
    int c;
    cout<<"c is:";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"a is greatest "<<a;
        }else{
            cout<<"c is greatest"<<c;
        }
    }else{
        if(b>c){
            cout<<"b is greatest"<<b;
        }else{
            cout<<"c is greatest"<<c;
        }
    }
    return 0;
}