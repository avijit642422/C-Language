#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n<0){
        n=n*(-1);
    }
   cout<<"the absolute value:";
    cout<< n;
    return 0;
}