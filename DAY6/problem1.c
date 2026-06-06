#include <stdio.h>

void decimalToBinary(int n) 
{
    if (n == 0) {
        printf("0\n");
        return;
    }

    int binary[32];
    int i=0;

    while (n > 0)
    {
        binary[i] = n&1; 
        n = n >> 1;        
        i++;
    }

 //TO  Print binary array in reverse order
    printf("Binary: ");
    for (int j = i-1; j>= 0; j--) 
    {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int num=15; 
    printf("Decimal: %d\n", num);
    decimalToBinary(num);
return 0;
}
