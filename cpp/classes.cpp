#include<iostream>

using namespace std;

class Rectangle{
    int length;
    int breadth;
    public:
 //the below function is a constructor, it will be automatically
 // called when the values are being passed 
    Rectangle(int l,int b){
        length =l;
        breadth=b;
    }
    
    int area(){
        return length*breadth;
    }
    
    void changeLength(int l){
        length =l;
    }
};

int main(){
    Rectangle r(10,5);
    cout<<r.area();
}
