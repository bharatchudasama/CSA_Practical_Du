#include<iostream>

#include<stdlib.h>
 
using namespace std;
int binaryToDecimal(int n)
{
	int num = n;
	int dec_value = 0;
	int base = 1;
	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		dec_value += last_digit * base;

		base = base * 2;
	}

	return dec_value;
}
int decToBinary(int n)
{

    int binaryNum=0,temp=1;
    while (n > 0) {
        temp=temp*10 + (n % 2);
        n = n / 2;
    }
    while (temp > 1) {
        binaryNum=binaryNum*10 + (temp % 2);
        temp = temp / 10;
    }
 
    return binaryNum;
}
int Subtract(int a, int b)
{
	int c;

	c = a + (~b + 1);

	return c;
}
int main()
{
 
    cout << "Enter the number1 to be added:";
    int x, y;
    cin >> x ;
    cout << "Enter the number2 to be added:";
    cin>> y;
    int num1=binaryToDecimal(x);
    int num2=binaryToDecimal(y);
    cout << "The Summation is: " << decToBinary(Subtract(num1, num2));
}
