#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int i, j, n;
    
    double sinus, dividend, divisor, sign;
    double x;
    
    printf("Add the angle of sinus and the N value:\n");
    scanf("%lf %d", &x, &n);
    
    sinus = 0;
    for(i=0; i<=n; i++){
        
        dividend = 1;
        
        for(j=0; j<=2*i+1; j++){
            
            dividend = dividend * x;
        }
        
        divisor = 1;
            
        for(j=1; j<=2*i+1; j++){
            
            divisor = divisor * j;
        }    
        
        if(i%2==0){
            
            sign = 1;
        } else {
            
            sign = -1;
        }
        
        sinus = sinus + (dividend / divisor) * sign;
    }
    
    printf("sin(%lf) = %lf\n", x, sinus);
    printf("sin(%lf) = %lf\n", x, sin(x));

    
    return 0;
}
