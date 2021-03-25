#include <stdio.h>

int main() {

    //to create a variable, we have to declare its type (int, double or float) and name, its important to say that here we have to end any sentence with ;
    int a;
    a = 5;

    //instead of creating and declaring its value in another line, we can do it once
    int b = 10;

    // and more interesting, we can declare twice variables and values
    int c, d = 15;

    // to declare characters, we have to be cautious, as we can declare something like:
    char e = a;
    //with example above two problems:
    //1 - the VARIABLE "e" is storing the VALUE of the variable "a", with this, we will mistake it, because "a" have a integer stored
    //2 - even if we stored correctly the character, as such:
    e = "a";
    // its easy to mistake the variable "e", its value "a" and the variable "a", this way we are confused and can do many errors

    //the char type can even be used in arithmetic operations, because here it value in ASCII table wil be used
    char example = 'b';
    example += 1;
}
