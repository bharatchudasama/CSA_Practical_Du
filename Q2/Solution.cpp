#include<iostream>
using namespace std ;

int main(){
    int a,b;
    cout<<"enter A :";cin>>a;
    cout<<"enter B :";cin>>b;

    // left shift 
    int Left = a<<b;
    cout<<"Left shift (A<<B) : "<<Left<<endl;

    // Right shift 
    int Right = a>>b;
    cout<<"Right shift (A>>B) : "<<Right;
    return 0;
}
