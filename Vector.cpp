#include<iostream>
#include<vector> //vector library import

using namespace std;

int main(){
    int vector_size;

    cout<<"Enter the vector size: "<<"\n";
    cin>>vector_size;

    vector<int> vct1(vector_size); // declaring an integer type vector with an size of vector_size;

    // Asking user to get vector elements:
    cout<<"Enter vector elements: "<<"\n";
    for(int i=0;i<vector_size;i++){
        cin>>vct1[i];
    }


    //printing the elements from the vector using enhanced for loop 
    cout<<"Vector Elements:  ";
    for(auto i: vct1){
        cout<<i<<"   ";
    }
}