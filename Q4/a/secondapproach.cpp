
// second approach 
#include <iostream>
#include <math.h>
using namespace std;
 
unsigned int onesComplement(unsigned int n)
{
    // Find number of bits in the given integer
    int number_of_bits = floor(log2(n)) + 1;
 
    // XOR the given integer with pow(2,number_of_bits-1)
    // and print the result
    return ((1 << number_of_bits) - 1) ^ n;
}
 
int main()
{
    unsigned int n;
    cout<<"enter number :";
    cin>>n;
    cout << onesComplement(n);
    return 0;
}
