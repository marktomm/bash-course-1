#ifndef MY_BANK_ACC_HEADER
#define MY_BANK_ACC_HEADER

#include <iostream> // std::cout and std::cin
#include <string>

using namespace std;

namespace MyCompanyLtdLibrary {
namespace SecondNs {

class BankAccount {
private:
// encapsulation
  double money_{0}; // fundamental type 
  string name;
  string number;

public:
  double getMoney();
  string getName();
  void setName(string n);
  void withdraw(double amount);
  void add(double amount);
};

} // namespace SecondNs
} // namespace MyCompanyLtdLibrary

#endif