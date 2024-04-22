/* Chapter 7 Question 14 */
#include <stdio.h>
#include <math.h>

/* Pretty complicated script: 
// This program finds the square root of a number through estemation
// This is actually the algrothim that Isaac Newton and Joseph Raphson applied to calculate it!
// I made a small modifcation which makes it run twice as fast! (also required for textbook question - GuessN)
*/

// 1. Get a number to square root
// 2. Set guess to a random number, 1 for effeciency with low number here!
// 3. Divide number by guess, then get the average of those two
// 4. The value of guess will get progressivelly closer
// 5. Program stops when old Guess minus new Guess is less than 0.00001

int main() {
   int number;
   float guess_o = 1, guess_n = 1, XY = 1, avgXY = 1;
   
   printf("Enter a positive number: ");
   scanf("%d", &number);
    
    /* Print table headers */
    printf("Number |");
    printf("Guess  |");
    printf("X/Y    |");
    printf("AvgX/Y |");
    printf("GuessN |\n");

    /* Calculator and printer */
   do {
       printf("%6d |", number);
       
       guess_o = (avgXY + guess_n)/2;
       printf("%5.4f |", guess_o);
       
       XY = number/guess_o;
       printf("%5.4f |", XY);
       
       avgXY = (guess_o + XY)/2;
       printf("%5.4f |", avgXY);
       
       guess_n = (avgXY + guess_n)/2;
       printf("%5.4f |\n", guess_n);
   }
   while (fabs(guess_o - guess_n) > 0.00001);   // fabs for absolute value!
   
   printf("\nSquare Root is: %f", guess_n);
   
   return 0;
}
