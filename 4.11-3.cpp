#include <iostream>

int main() {

    enum test{ONE, TWO, THREE};
    enum test2{ONE1, TWO2, THREE3, FOUR, FIVE};

    std::cout << "Size of char: " << sizeof(char) << " bytes\n"
              << "Size of int: " << sizeof(int) << " bytes\n"
              << "Size of short int: " << sizeof(short) << " bytes\n"
              << "Size of long int: " << sizeof(long) << " bytes\n"
              << "Size of bool: " << sizeof(bool) << " bytes\n"
              << "Size of float: " << sizeof(float) << " bytes\n"
              << "Size of double: " << sizeof(double) << " bytes\n"
              << "Size of long double: " << sizeof(long double) << " bytes\n";

    std::cout << "Size of enum: " << sizeof(test) << " bytes\n"
              << "Size of enum2: " << sizeof(test2) << " bytes\n"
              << "Size of char pointer: " << sizeof(char*) << " bytes\n"
              << "Size of int pointer: " << sizeof(int*) << " bytes\n";
    return 0;
}