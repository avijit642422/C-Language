#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%2==0){
            cout<<"the number is composite";
            break;
        }else{
            cout<<"the number is prime";
            break;
        }
    }
    return 0;
}

