
#include <iostream>
#include <string>
using namespace std;

int main() {
    string r1,r2;
    cout<<"enter R1(in binary 8 bits):";cin>>r1;
    cout<<"enter R2(in binary 8 bits):";cin>>r2;
    string temp ="00000000";
    for(int i = 0; i<8;i++){
        if (r1[i]==r2[i] && r1[i]=='0'){temp[i]='0';}
        else{temp[i]='1';}
    }
    cout<<temp;

    return 0;
}
