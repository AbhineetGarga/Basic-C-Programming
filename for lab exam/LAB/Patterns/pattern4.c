#include <stdio.h> 
  
int main() 
{ 
    int rows = 5; 
  
    // first loop is for printing the rows 
    for (int i = 0; i < rows; i++) { 
  
        // loop for printing leading whitespaces 
        for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
            printf(" "); 
        } 
  
        // loop for printing * character 
        for (int k = 0; k <= i; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
Output

        *    |            1    |            A
      * *    |          1 2    |          A B
    * * *    |        1 2 3    |        A B C
  * * * *    |      1 2 3 4    |      A B C D
* * * * *    |    1 2 3 4 5    |    A B C D E
Time Complexity: O(rows*rows) as nested for loop is being run.
Auxiliary Space: O(1) as no extra space has been used.

3. Full Pyramid Pattern in C
The Full Pyramid pattern looks similar to the Equilateral triangle. We can see this as the combination of the Left Half and Right Half pyramids patterns. The following example demonstrates how to print this pattern using alphabets, numbers, or a star (*).

Example:


// C program to print the full pyramid pattern of stars 
#include <stdio.h> 
  
int main() 
{ 
    int rows = 5; 
  
    // first loop to print all rows 
    for (int i = 0; i < rows; i++) { 
  
        // inner loop 1 to print white spaces 
        for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
            printf(" "); 
        } 
  
        // inner loop 2 to print star * character 
        for (int k = 0; k < 2 * i + 1; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
    return 0; 
}


//          * 
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *