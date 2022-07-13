#include <stdio.h>
//Code for printing numbers from 1 to 100 for finding which ones fit the criterias for the loop

int main () {

   int Number;
   printf("%d\n", Number);
   scanf("%d", &Number);

   for (int Number = 1; Number <= 100; Number++) {

   if (Number % 5 == 0 && Number % 3 == 0) { 
      printf("FizzBuzz\n"); // Prints FizzBuzz if the number is divisible by 3.
   } else if (Number % 5 == 0) { 
      printf("Buzz\n"); // Prints Buzz if the number is divisible by 5.
   } else if (Number % 3 == 0) { 
      printf("Fizz\n"); // Prints Fizz if the number is divisible by both 5 and 3. 
   } else { 
      printf("%d\n", Number); // Prints the number if it is not divisible by 3 or 5. 
   }
   
}
return 0;
