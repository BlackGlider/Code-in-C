/* Minor numero di banconote per pagare l'importo in dollari */

#include <stdio.h>

int main(void)
{
    
    int money, number1, number2, number3, number4;
        
    printf("Digit the amounth of dollars: \n");
    scanf("%d", &money);
    
    number1 = money / 20;
    number2 = (money - (number1 * 20)) / 10;
    number3 = (money - (number1 * 20) - (number2 * 10)) / 5;
    number4 = (money - (number1 * 20) - (number2 * 10) - (number3 * 5)) / 1;
    
    printf("$20 bills: %d\n", number1);
    printf("$10 bills: %d\n", number2);
    printf("$5 bills: %d\n", number3);
    printf("$1 bills: %d\n", number4);
    
    return 0;
}
