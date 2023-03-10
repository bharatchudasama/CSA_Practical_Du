// first approach 
#include <bits/stdc++.h>
using namespace std;
 
unsigned int onesComplement(unsigned int n)
{
    vector<int> v;
    // convert to binary representation
    while (n != 0) {
        v.push_back(n % 2);
        n = n / 2;
    }
    reverse(v.begin(), v.end());
    // change 1's to 0 and 0's to 1
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 0)
            v[i] = 1;
        else
            v[i] = 0;
    }
    // convert back to number representation
    int two = 1;
    for (int i = v.size() - 1; i >= 0; i--) {
        n = n + v[i] * two;
        two = two * 2;
    }
    return n;
}
 
int main()
{
    unsigned int n;
    cout<<"enter number :";
    cin>>n;
    cout << onesComplement(n);
    return 0;
}
