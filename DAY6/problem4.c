#include <stdio.h>

double power(double x,int n) 
{
long long nn=n;

    if (nn < 0) nn = -nn;
    double ans = 1.0;

    while (nn>0) 
    {
     if (nn % 2 == 1)  // If exponent is odd
     {
         ans = ans * x;
         nn = nn - 1;
     } else           // If exponent is even
        {    x = x*x;
            nn= nn/2;
        }
    }
    if (n < 0) 
    {
        ans= 1.0/ans;
    }
    
    return ans;
}

int main() 
{
    double base=2.0;
    int exp=-3; 
    
    printf("%.2f^%d = %f\n",base,exp,power(base, exp));
return 0;
}