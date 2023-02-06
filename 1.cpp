#include <iostream>

//wap for function overloading for calculating volume of shapes
using namespace std;

int volume(int r){
    return (4/3)*3.14*r*r*r;
}

int volume(int l,int b,int h){
    return l*b*h;
}

int main(){
    int r,l,b,h,a;
    cout<<"Enter radius of sphere: ";
    cin>>r;
    cout<<"Volume of sphere is: "<<volume(r)<<endl;
    cout<<"Enter length, breadth and height of cuboid: ";
    cin>>l>>b>>h;
    cout<<"Volume of cuboid is: "<<volume(l,b,h)<<endl;
    return 0;
}