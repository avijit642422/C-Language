#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"a is:";
    cin>>a ;
    cout<<"b is:";
    cin>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a is:"<<a<<endl;
    cout<<"b is:"<<b<<endl;
    return 0;

}