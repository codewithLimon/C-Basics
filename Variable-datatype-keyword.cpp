#include<iostream>
#include<string> //string library
using namespace std;

int main(){

    //integer variable:

    /*Basic initialization
    int num1=20;
    int num2=10;
    */

   //Dynamic initialization:
    
    int num1=20, num2=10;

    cout<< "Integer: "<<endl;
    cout<< num1 <<"  " <<num2<<endl;


    //float/double variable:
    float num3=15.5;
    double num4=5.5;

    cout<< "Float/Double: "<<endl;
    cout<< num3 <<"  "<<num4<<endl;

    //character variable:
    char ch1='a';
    char ch2='b';
    
    cout<< "Character: "<<endl;
    cout<< ch1 <<"  "<<ch2<<endl;

    //full length String variable:
    string str1="A quick brown fox jumps over the lazy dog.";
    cout<< "String: "<<endl;
    cout<< str1<<endl;

    return 0;
}