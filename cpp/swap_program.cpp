//swapping the values of another function using call by address parameter passing
#include<iostream>

using namespace std;

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<endl<<b;
}