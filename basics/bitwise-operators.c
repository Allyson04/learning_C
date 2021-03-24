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

    // ^ (XOR)
    // here true or 1 is send only if one of the digits is 1, otherwise (if the two digits is 1 or 0) it will send 0
    // using 37 ^ 23 for example
    //  37   |  0   0   1   0   0   1   0   1
    // ^23   |  0   0   0   1   0   1   1   1
    //---------------------------------------
    //          0   0   1   1   0   0   1   0

    // as we can see, the ^ (XOR) operator we uses, like toggling


    // << (shift left)
    //using 37 << 3 as example
    // on the left side of the operation (37) is the number being shifted
    // on the right side (3) we have how much of it is being shifted
    // but what it means by "shifting"? is it adding 3 points to it? of course not!
    // what we do is selecting all digits, from left to right, until the 4th digit, putting this as an illustration:
    //  0   0   1 | 0   0   1   0   1 
    //this bar separates all digits we are going to erase, and at the beginning of the number we add 3 zeroes, just like that:
    //  0   0   1   0   1   0   0   0

    // so, we have any practical examples for this? obviously!
    // 37 << n is the same for 37 * Math.pow(2,n) and equal as 37 * 2^n
    // this way, if we use << we can be more code-efficient
    // **math.pow is used to determine the power of something, so: math.pow(n, m) == n^m
}