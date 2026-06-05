#include<stdio.h>
int main()
{   
    int i,num;
    printf("Enter the number");
    scanf("%d",&num);
    //To print the factors of a number
    printf("Factors of %d are: ",num);
    
    for(i=1;i<=num;i++){
        if(num%i==0)
    {
       printf("%d\n",i); 
     }
    }
    printf("\num");
    return 0;
}