/* Chapter 5 Question 5 */
#include <stdio.h>

int main() {
    int income = 0, tax_calc = 0;    // income is the raw number given,                                    
    float taxs_due = 0;              // tax_calc captures the income between brackets, for tax rate processing.
    
    printf("Enter your total Income taxable (Rounded up): ");
    scanf("%d", &income);            // Easy support to grab any format, ex.. $xxx,xxx 
                                     // With scanf, it's all easy!


    /* Main Program */
    // go through incomes at the highest level to lowest
    // get taxs due for that bracket
    // progressively subtract to find their taxes due for next bracket
    
    if (income > 246752) {      
        tax_calc = income - 246752;    // Get income @ bracket
        income -= tax_calc;            // Income - (Income in current bracket)
        taxs_due += tax_calc*0.33;     // Add to cumulative taxes due.

        
    } else if (income > 173205) {
        tax_calc = income - 173205;
        income -= tax_calc;
        taxs_due += tax_calc*0.29;
            
    } else if (income > 111733) {
        tax_calc = income - 111733;
        income -= tax_calc;
        taxs_due += tax_calc*0.26;
            
    } else if (income > 55867) {
        tax_calc = income - 55867;
        income -= tax_calc;
        taxs_due += tax_calc*0.205;
        
    } else if (income < 55867) {
        taxs_due += income*0.15;
    }
   
    printf("Your taxes due: $%0.2f", taxs_due);
}
