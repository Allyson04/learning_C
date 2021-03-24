#include <stdio.h>

int main() {
    //in C memory operation was crucial for his popularity, that's why we could use bitwise operators
    // 0 => false | 1 => true

    // & (and)
    // and example for code using & is checking if a number is even or odd
    //  37   0   0   1   0   0   1   0   1
    // & 1   0   0   0   0   0   0   0   1
    //       -----------------------------
    //       0   0   0   0   0   0   0   1  
    // at last, because of the last digit in the first number is 1, we already know that the number is odd
    // if it was even, it would end as 0


    // | (or)
    // using a new example, we have
    //  37   0   0   1   0   0   1   0   1
   // | 23   0   0   0   1   0   1   1   1
    //       -----------------------------
    //       0   0   1   1   0   1   1   1 
    // if either position have 1, it gives back 1

}