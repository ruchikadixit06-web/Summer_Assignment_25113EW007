#include<stdio.h>
int main()
{   
    long long num,num1;
    long long largest_prime = -1;

    printf("Enter the number");
    scanf("%lld",&num);
    //To find the largest prime factor of a number
    num1=num;
    while(num%2==0){
        largest_prime =2;
        num=num/2;
    }
    for(long long i=3;i*i <=num;i+=2){
    while(num%i==0){
        largest_prime =i;
        num=num/i;
    }
}
if (num>2){
    largest_prime= num;
}
if (largest_prime == -1){
    printf("The number %lld does not have prime factors\n",num1);
}
else{
    printf("The largest prime factor of %lld is %lld\n",num1,largest_prime);
}
return 0;
}