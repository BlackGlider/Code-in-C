#include <stdio.h>
int main( ) {

 int n;
    
    printf("Enter a number:\n");
    scanf("%d", &n);
    
    if ( n >= 0 && n <= 9 )
        
        printf("The number has 1 digit\n");
        
       else if (n >= 10 && n <= 99)
            
            printf("The number has 2 digits\n");
        
        else if(n >= 100 && n <= 999)
            
             printf ("The nuber has 3 digits\n");
    
    
    
    
    

    
   return 0;
}
