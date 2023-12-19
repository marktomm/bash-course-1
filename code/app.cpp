#include <iostream>
// #include <string>

int main(int argc, char *argv[]) {
    // std::string yourOwnVariable;
    // variable decalaration
    // bool lovesMeOrLovesMeNot; // 1 byte of memory for this variable
    // the value of this lovesMeOrLovesMeNot boolean type variable
    // is whatever is in the memory block that was given to the program

    // RAM 0000 0000 -> false
    // RAM 0101 0001 -> true
    
    //  variable definition
    bool lovesMeOrLovesMeNot = true; 
    // the size of the resulting entity      - 1 byte (8 bits)
    // the valid values that it may have     - true/false
    // the valid operations that it supports - 

    if(lovesMeOrLovesMeNot != false) {
    // if(true != false) {
    // if(true) {
        std::cout << "I guess that I am fine then\n";
    }

    // unary operator
    if(!lovesMeOrLovesMeNot) {
    // if(!true) {
    // if(false) {
        std::cout << "I guess that I am fine then also\n";
    } else {
        std::cout << "I guess that I am fine then also fix\n";
    }

    if(!!lovesMeOrLovesMeNot) {
    // if(!!true) {
    // if(!false) {
    // if(true) {
        std::cout << "I guess that I am fine then also\n";
    }

    // declaration
    char symbol; // 1 byte = 0000 0000, 2^8 == 256

    // 0000 0000 - 0
    // 0000 0001 - 1
    // 0000 0010 - 2
    // 0000 0011 - 3
    // 0000 0100 - 4
    // 0000 0101 - 5
    // ...
    // 0101 1000 - 88
    // ...
    // 1111 1110 - 254
    // 1111 1111 - 255

    symbol = 88; // 0101 1000

    std::cout << symbol << '\n'; // Prints 'X'

    int value = 88; // 4 bytes: xxxx xxxx yyyy yyyy zzzz zzzz 0101 1000

    std::cout << value << '\n'; // Prints '88'

    // pointers, 32 bit / 64 bit 

    return 0;
}


// cout.operator<<(value)

// type cout;

// class type {  }

// function overloading
int fn(int x) {
    return x;
}

int fn(char x) {
    return x;
}