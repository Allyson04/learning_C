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

    // ~ (not)
    // here we use an integer after it, so it transforms any 0 to 1 and 1 to 0
    // example:
    // ~37
    // 00100101 => 11011010

    // a good use for this is to discover the two's complement of an number
    // a two's complement is used to define negative numbers, 37 to -37 or 53 to -53
    // the two's completement is obtained through inverting all bits (like ~ (not) operator) and adding 1 to first digit

    // 37 to -37
    //  0   0   1   0   0   1   0   1  
    //  1   1   0   1   1   0   1   0 (inverted)
    //  1   1   0   1   1   0   1   1 (added one)
    // so 011011 is -37, the last digit is used for the signal

    // this way, when we use 37 + (-37)
    //  0   0   1   0   0   1   0   1
    //+ 1   1   0   1   1   0   1   1
    //-------------------------------
   //1  0   0   0   0   0   0   0   0
   // because we use only 8 digits, the nineth digit (1) is excluded, and the number results in 0, making a 37 + (-37) = 0 a valid expression

   //also, if you want a shortcut, we can use like this: starting from the rightmost digit, go to the left until a 1 shows up, and then invert all digits to the left of this 1
   //other tip, we can see if a number is negative of positive based on the leftmost digit, so:
   // 1 => negative, to use his positive number we do the two's complement of it
   // 0 => positive 

}