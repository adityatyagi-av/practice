#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(){
    // int a=20;
    // int *p;
    // p=&a;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<a<<endl;
    // cout<<*p<<endl;
    // cout<<&a;
    
    
    // int A[5]={20,40,204,52,12};   
    // int *p;
    // p=A;
    // for (int i=0;i<5;i++)
    // cout<<p[i]<<endl;
    
    // int *p;
    //This method is for only c language 
    // p=(int *)malloc(5*sizeof(int));
    
    
    //for cpp use this method
    // p = new int[5];
    // p[0]=20; p[1]=34; p[2]=12; p[3]=41; p[4]=15;
    
    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // }
    
    // delete [ ] p;
    // free(p);
    
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    
    
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    
    
    
    return 0;
    
}