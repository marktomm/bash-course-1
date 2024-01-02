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

  if (lovesMeOrLovesMeNot != false) {
    // if(true != false) {
    // if(true) {
    std::cout << "I guess that I am fine then\n";
  }

  // unary operator
  if (!lovesMeOrLovesMeNot) {
    // if(!true) {
    // if(false) {
    std::cout << "I guess that I am fine then also\n";
  } else {
    std::cout << "I guess that I am fine then also fix\n";
  }

  if (!!lovesMeOrLovesMeNot) {
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

  // what is the practical meaning of binary number system?

  // decimal, meaning 0,1,2,3,...,9

  // memory: very long array of lamps,
  // that can each be individually set
  // run read in pairs of 8 lamps.

  // 1111 1111 - 255
  // 0011 0111 - 55
  // 0011 1001 - 57

  // (5 * 10^1) + (7 * 10^0) = 57

  // (1 * 2^5) + (1 * 2^4) + (1 * 2^3) + (0 * 2^2) + (0 * 2^1) + (1 * 2^0)
  // 32 + 16 + 8 + 0 + 0 + 1 = 57

  // 0011 1001 = ?
  //   32  16  8  1

  // 345 901 146 112 * 8 = 2 767 209 168 896 ~ 3 trillion - HDD -> SSD
  // (persistent/non volatile) memory. a bit slower than RAM

  // binary 0, 1
  // ternary 0, 1, 3
  // octal 0, 1, 2, ..., 7
  // decimal 0, 1, 2, ..., 9
  // hexadecimal 0, 1, 2, ..., 9, A, B, C, D, E, F

  // 1010(binary) , 12(octal), 10(dec), A(hex)
  // 1011 ,         13,      , 11       , B

  // 255 - 1111 1111 - FF

  // 56 - 0011 1000 - 38 (hex)

  return 0;
}

// cout.operator<<(value)

// type cout;

// class type {  }

// function overloading
int fn(int x) { return x; }

int fn(char x) { return x; }