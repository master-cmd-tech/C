#include<stdio.h>
#include<stdbool.h>

int main() {
    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.

    // int age = 25;
    // int year = 2027;
    // int age1 = 27, year1 = 2028;
    // printf("You are %d years old\n", age);
    // printf("The year is %d\n", year1);

    // float gpa = 3.6;
    // float temperature = -10.123;
    // printf("Your gpa is %f\n", gpa);
    // printf("The temperature is %.3f\n", temperature);

    // double pi = 3.14159265358979;
    // double e = 2.7182818284590;
    // printf("The value of pi is %.15lf\n", pi);
    // printf("The value of e is %.15lf\n", e);

    // char grade = 'A';
    // char currency = '!';
    // printf("Your grade is %c\n", grade);
    // printf("The currency is %c\n", currency);

    // char string[] = "String";
    // char food[] = "pizza";
    // printf("Hello, this is %s\n", string);
    // printf("Your favorite food is %s\n", food);

    bool isOnline = true; // 1
    // bool isOnline = false; // 0

    printf("%d", isOnline);
    if(isOnline){
        printf("You are ONLINE");
    } else {
        printf("You are OFFLINE");
    }

    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)

    return 0;
}