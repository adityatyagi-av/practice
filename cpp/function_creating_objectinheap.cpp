#include<iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct Rectangle *fun(){
    struct Rectangle *p;
    p=new Rectangle;
    //p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    
    p->length=15;
    p->breadth=20;
    cout<<p<<endl;
    return p;
}

int main(){
    struct Rectangle *ptr=fun();
    cout<<"Length "<<ptr->length<<endl<<"Breadth "<<ptr->breadth<<endl;
    cout<<ptr;
    
    
}