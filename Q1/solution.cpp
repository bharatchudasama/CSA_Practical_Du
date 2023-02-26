
#include <iostream>
#include<algorithm>
using namespace std;
 
// Function to return ASCII value of a character only for hexadicmal
int val(char c)
{
    if (c >= '0' && c <= '9'){

        return (int)c - '0';
    }
    else{
      
        return (int)c - 'A' + 10;
    }
}
 
// Function to convert a number from given base to decimal number
int toDeci(string str, int base)
{
    // Stores the length of the string
    int len = str.size();
 
    // Initialize power of base
    int power = 1;
 
    // Initialize result
    int num = 0;
 
    // Decimal equivalent is str[len-1]*1 + str[len-2]*base + str[len-3]*(base^2) + ...
    for (int i = len - 1; i >= 0; i--) {
 
        // A digit in input number must be less than number's base
        if (val(str[i]) >= base) {
            cout<<"Invalid Number";
            return -1;
        }
        // Update num
        num += val(str[i]) * power;
    
 
        // Update power
        power = power * base;
    }
 
    return num;
}
 
// Function to return equivalent character of a given value only for hexadecimal
char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
 
// Function to convert a given decimal number to a given base
string fromDeci(int base, int inputNum)
{
    // Store the result
    string res = "";
 
    // Repeatedly divide inputNum by base and take remainder
    while (inputNum > 0) {
 
        // Update res
        res += reVal(inputNum % base);
 
        // Update inputNum
        inputNum /= base;
    }
 
    // Reverse the result
    reverse(res.begin(), res.end());
 
    return res;
}
 
// Function to convert a given number from a base to another base
void convertBase(string s, int a, int b)
{
    // Convert the number from
    // base A to decimal
    int num = toDeci(s, a);
 
    // Convert the number from
    // decimal to base B
    string ans = fromDeci(b, num);
 
    // Print the result
    cout <<"answer:"<<ans;
}
 
// Driver Code
int main()
{
    // Given input
    string s ;
    cout<<"enter number :";cin>>s;
    int a , b ;
    cout<<"enter radix of number :";cin>>a;
    cout<<"enter radix to convert in :";cin>>b;
 
    // Function Call
    convertBase(s, a, b);
 
    return 0;
}
