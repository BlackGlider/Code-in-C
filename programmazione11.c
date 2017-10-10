#include <stdio.h>

int main(void)
{
    printf("Gloria\n");
    
    int a, b, sum, c, d, dav;
    
    printf("Enter two integers for the addition:\n ");
    scanf("%d+%d", &a, &b);
    
    sum = a + b;
    
    printf("%d+%d=%d\n", a, b, sum);
    
    scanf("%d/%d", &c, &d);
    
    dav = c / d;
    
    printf("%d/%d=%d\n", c, d, dav);
    
    float f, g, dov;
    
    scanf("%f/%g", &f, &g);
    
    dov = f / g;
    
    printf("%.2f/%.2f=%.2f\n", f, g, dov);
    
    float f, g, dov;
    
    scanf("%f/%f", &f, &g);
    
    dov = f / g;
    
    printf("%.1f/%.1f=%.1f\n", f, g, dov);
    
    
    
    
    
    
    
    
    
    return 0;
}
