/* Write a program in C to read 10 numbers from keyboard and find their sum and average 
    
   By BLACK_GLIDER
 */

#include <stdio.h>

int main()
{
    int i, n, sum=0;
    float avg;
    
    printf("Input 10 numbers : \n");
    for (i=1; i<=10; i++)
    {
        printf("Number %d", i);
        
        scanf("%d", &n);
        
        sum +=n;
    }
    
    avg=sum/10.0;
        printf("The sum of 10 numbers is : %d \n The Average is : %f\n", sum, avg);
    
    return 0;
}
