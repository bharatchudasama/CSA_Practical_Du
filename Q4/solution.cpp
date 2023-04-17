#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
void print(vector<int> &v){
    for(int i =0 ; i<v.size();i++ ){
        cout<<v[i];
    }
}
void twos_ones(int n )
{
    vector<int> bn,onComp,twComp;
    // convert to binary representation
    while (n != 0) {
        bn.push_back(n % 2);
        n = n / 2;
    }
  
    while (bn.size()<9){bn.push_back(0);}
    reverse(bn.begin(), bn.end());
    int SZ=bn.size();

    // char onComp[SZ], twComp[SZ];
    int i, carr = 1;
    int er = 0;
    for (i = 0; i < SZ; i++) 
    {
        if (bn[i] == 1) 
        {
            onComp.push_back(0);
        }
        else if (bn[i] == 0) 
        {
            onComp.push_back(1);
        }
        else 
        {
            cout << "Invalid Input. Input the value of assign bits." << endl;
            er = 1;
            break;
        }
    }


    for (i = SZ - 1; i >= 0; i--) 
    {
        if (onComp[i] == 1 && carr == 1) 
        {
            twComp.push_back(0);
        }
        else if (onComp[i] == 0 && carr == 1) 
        {
            twComp.push_back(1);
            carr = 0;
        }
        else 
        {
            twComp.push_back(onComp[i]);
        }
    }
    reverse(twComp.begin(), twComp.end());

    if (er == 0) 
    {
        cout << " The original binary = " ;print(bn);cout<<endl;
        cout << " After ones complement the value = " ; print(onComp);cout<<endl;
        cout << " After twos complement the value = " ; print(twComp);cout<<endl;
    }
}
int main(){
    int n ;
    cout<<"enter n :";
    cin>>n;
    twos_ones(n);
    return 0 ;
    
}
