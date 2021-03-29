//below is an directive of pre-compilation, used to add functions that will be used in main()
#include <stdio.h>

    //main() is the body of this program, and {} (keys) is where this functions are inserted
void main() { 
    //to break lines, we use \n
    printf("My first \n");
    printf("Hello World \n");
    printf("in C!");

    //to show variables, we use certain symbols, as %d for int in decimal base, $c for char and %f for float
    // where we would use variables, we substitute to %d or %c and after the sentence, we determine which variable will be used
    int idade = 19;
    char fav = 'A';
    printf("I am %d years old and my favorite letter is %c", idade, fav);

    //dont be scared thinking that %d or %c will be lost when touching other letter, it will be read if with this
     ch1 = 'o';
     ch2 = 'l';
     ch3 = 'd';
    printf("A%c%cys%cn E%cuar%c%c", ch2, ch2, ch1, ch3, ch3, ch1);

    //for the case of float, we can use a number between '.' and 'f', this number tells how much decimal digits will be shown after the dot
    float nmb1 = 7/3;
    printf("%f\n", nmb1);
    printf("%.2f", nmb1);
}