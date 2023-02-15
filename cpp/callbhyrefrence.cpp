//Array as Parameters

#include<iostream>

using namespace std;

// void fun(int *A,int n){
//     for(int i=0;i<n;i++){
//         A[i]++;
//         cout<<A[i]<<endl;
//     }
// }

// int main(){
//     int A[10]={2,3,4,53,12,42,12};
//     fun(A,5);
// }

int * fun(int n){
    int *p;
    p =new int[n];
    return p;
}

int main(){
    int *A;
    A=fun(6);
    
}