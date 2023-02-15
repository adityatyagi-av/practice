//structure as parameter

#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

 void changeLength(struct Rectangle *p,int l){
    p->length=l;
 }


int area(struct Rectangle &r1){
    r1.length++;
    return r1.length*r1.breadth;
};

int main(){
    struct Rectangle r={10,5};
    cout<<area(r)<<endl<<r.length;

// using call by Address in a function
  
    
    changeLength(&r,20);
    
    cout<<r.length;
}

