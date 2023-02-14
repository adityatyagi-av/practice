#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    // struct Rectangle *p;
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    // p->length=10;
    // p->breadth=5;
    
    // cout<<p->length<<endl;
    // cout<<p->breadth<<endl;
   
   
    // Rectangle r={10,25};
    // cout<<r.length<<endl;
    // cout<<r.breadth<<endl;
    
    // Rectangle *p=&r;
    // cout<<p->length<<endl;
    // p->length=245;
    // p->breadth=123;
    // cout<<p->length<<endl<<r.breadth<<endl;
    // cout<<sizeof(struct Rectangle);
    
    
    struct Rectangle *p;
    p=new Rectangle;
    
    p->length=24;
    p->breadth=121;
    
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
};



