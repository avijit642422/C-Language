#include<iostream>
using namespace std;
void swap(int *x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    cout<<x<<" "<<y<<endl;
    return;

}
int main(){
    int a=20;
    int b=50;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}