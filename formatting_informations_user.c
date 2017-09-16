/* Formattazione dati inseriti */

#include <stdio.h>

int main(void)
{
    int item_num, num1, num2, num3;
    float  unit_price;
    
    printf("Enter intem number: ");
    scanf("%d", &item_num);
    
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &num1, &num2, &num3);
    
    printf("Item\tUnit\tPurchase date\n%d\t%.2f\t%d/%d/%d\n", item_num, unit_price, num1, num2, num3);
    
    return 0;
}
