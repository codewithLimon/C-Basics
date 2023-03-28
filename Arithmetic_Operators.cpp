#include<iostream>
#include<iomanip> // for formatting output
using namespace std;

int main(){

    double num1, num2;

    cout<< "Enter two numbers: "<<endl;
    cin>> num1 >> num2;
    
    fflush(stdin);

    double sum=num1+num2;
    double sub=num1-num2;
    double mult=num1*num2;
    double div=num1/num2;

    // cout<<setprecision(3); //formatting output up to  .xx
    
    cout<<"Sum of these two numbers: "<<sum<<endl;
    cout<<"Sub from num1 to num2: "<<sub<<endl;
    cout<<"Multiplication of these two num: "<<mult<<endl;
    cout<<"num1/num2: "<<div<<endl;



    return 0;
}