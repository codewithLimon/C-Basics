#include<iostream>
#include<string>
using namespace std;

int main(){

    int a;

    cout<< "Enter the value of integer variable a: "<<endl;

    cin>>a;

    cout<<"The value of integer variable a given: "<< a<<endl;

    string str;

    fflush(stdin); // clears garbage

    cout<< "Enter the value of the string : "<<endl;
    
    cin>>str; // reads first word only

    cout<<"The value of String variable given: "<<str<<endl;
    
    fflush(stdin); 

    string str2;

    cout<<"Another String: "<<endl;

    getline(cin,str2);  // reads full length string 

    cout<<"The value of 2nd String variable given: "<<str2<<endl;

    return 0;
}