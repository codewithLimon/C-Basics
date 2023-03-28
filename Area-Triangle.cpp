#include<iostream>
using namespace std;

int main(){

    double base, height, area;

    cout<< "Enter the base and height of the triangle: "<<endl;
    
    cin>> base>> height;

    // area=1/2*(base*height); // gives output 0, since 1 is an integer number, compiler calculates it as an integer hence 1/2's integer result=0;
    area=1.0/2*(base*height);
    
    cout<<"Area of this triangle: "<< area <<endl;

    return 0;
}