#include <stdio.h>
#include <math.h>

int main(){
    
    int X, Y, r, d;
    float X1, Y1;
    float a, b;
    float sqr1, sqr2;
    
    /*
     *   (X,Y) --> Coordinates of the CENTER of the circle;
     *    
     *    R    --> Radius of the circle
     *
     *   (X1,Y1) --> Coordinates of the POINT
     */   
    
    /*--------------Formuala for find the distance-------------*/
    
    X = 0;
    Y = 0;
    r = 5;
    
    scanf("%f%f", &X1, &Y1);
    
    a = X - X1;
    b = Y - Y1;
    
    sqr1 = a * a;
    sqr2 = b * b;
    
    d = sqrt(sqr1 + sqr2);
    
    printf("%s",d<r?"yes":"no");
    
    
    return 0;
    
    
    
    
    
    
}
