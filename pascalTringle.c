#include <stdio.h>

int fact(int n)
{
    if(n>=2)
     return n*fact(n-1);
     else
     return 1;
}

float nCr(int n, int r)
{
    return fact(n)/(fact(n-r) * fact(r));
    
    
}

int main()
{
   
    char k=39;
    int f = fact(4);
    
    float ccc = nCr(5,3);
    int i,j;
    int n=9;
    printf("\n");
    for( i=0;i<n;i++)
    {
     
        for( j = 0; j< n-i;j++)
        printf(" ");
        
        
        for(j = 0; j<= i;j++)
        {
            printf("%3.0f", nCr(i,j));
            
        }
        
       printf("\n");
    }
    
   //printf("factorial is %f",ccc);

    return 0;
}
