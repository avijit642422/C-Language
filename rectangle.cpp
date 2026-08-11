#include <iostream>
using namespace std;
int main(){
    int l;
    cout<<"the length is:";
    cin>>l;
    int b;
    cout<<"the breadth is:";
    cin>>b;
     int a=l*b;
     int p=2*(l+b);
     if(a>p){
        cout<<"the area of the rectangle is greater then its perimeter";
     }
     return 0;
}