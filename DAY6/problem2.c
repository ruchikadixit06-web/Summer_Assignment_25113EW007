#include <stdio.h>

int binaryToDecimal(long long n) 
{
    int decimalNumber=0, i=0, remainder;
//To convert binary to decimal.

    while(n!= 0) 
    {
        remainder= n%10;
        n=n/10;
        decimalNumber+= remainder*(1 << i);
        i++;
    }
    return decimalNumber;
}

int main() 
{
    long long binary = 1101;
    printf("Binary: %lld\n", binary);
    printf("Decimal: %d\n", binaryToDecimal(binary));
return 0;
}