/* Chapter 6 Question 8 */
#include <stdio.h>

int main() {
    int days, start, index = 0;
    
    /* Reading Inputs */
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);
    
    /* Printing the spaces for when month starts */
    for (int i = 1; i <= start; i++) {
        if (i == 7)                 // case for inputting 7 start day.
            break;
            
        printf("   ");
    }
    
    /* Printing the Calendar */
    index += start;
    for (int i = 1; i <= days; i++) {
        printf("%3d", i);   // format print the spaces, right aligned naturally.
        index += 1;
        
        if (index >= 7) {   // if index @ 8, due to month starting at 7.
            index = 0;
            printf("\n");
        } 
    }
    
    return 0;
}
