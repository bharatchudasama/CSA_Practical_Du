To convert a number from base A to base B, the idea is to first convert it to its decimal representation and then convert the decimal number to base B.  

**Conversion from any base to Decimal**: The decimal equivalent of the number “str” in base “base” is equal to 1 * str[len – 1] + base * str[len – 2] + (base)2 * str[len – 3] + …

**Conversion from Decimal to any base:** 
The decimal number “inputNum” can be converted to a number on base “base” by repeatedly dividing inputNum by base and store the remainder. Finally, reverse the obtained string to get the desired result. 
