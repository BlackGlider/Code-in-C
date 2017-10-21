#include <stdio.h>
#include <math.h>

int main(){
    
   int X, Y, Z, l, d;
   float X1, Y1, Z1;
   float a, b, c;
   float sqr1, sqr2, sqr3;
    
    /*
     * (X,Y,Z) --> Coordinates of the CENTER of the cube;
     *
     * (X1,Y1,Z1) --> Coordinates of the POINT;
     *
     *  l --> side of the cube
     */
    
    /*---------Formula for find the distance-------------*/
    
     X = 0;
     Y = 0;
     Z = 0;
    l = 3;
    
    scanf("%f%f%f", &X1, &Y1, &Z1);
    
    a = X - X1;
    b = Y - Y1;
    c = Z - Z1;
    
    sqr1 = a * a;
    sqr2 = b * b;
    sqr3 = c * c;
    
    d = sqrt(sqr1 + sqr2 + sqr3);
    
    printf("%s", d<l?"yes":"no");
    
    return 0;
    
    
    
    
    
    
}
