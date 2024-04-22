/* Chapter 5 Question 5 */
#include <stdio.h>

int main() {
    int income = 0;
    int tax_calc = 0;
    float taxs_due = 0;
    
    printf("Enter your total Income taxable (Rounded up): ");
    scanf("%d", &income);
    
   
  
    if (income > 246752) {
        tax_calc = income - 246752;
        income -= tax_calc;
        taxs_due += tax_calc*0.33;
            
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
