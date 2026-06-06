#include <stdio.h>

int countSetBits(int n) 
{
    int count=0;
//To count set bits in a number.    
    while (n > 0) 
    {
     n=n & (n-1); 
     count++;
    }
    return count;
}

int main() 
{
 int num=19;
 printf("Number: %d\n", num);
 printf("Number of set bits: %d\n", countSetBits(num));
 return 0;
}