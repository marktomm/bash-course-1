
#include "bank_account.h"

namespace MyCompanyLtdLibrary {
namespace SecondNs {

double BankAccount::getMoney() { return money_; }

string BankAccount::getName() { return name; }

// these algorithms/functions alter the state of the variable of type
// BankAccount
void BankAccount::setName(string n) { name = n; }

void BankAccount::withdraw(double amount) {
  if (money_ < amount) {
    cout << "Insufficient funds bro!\n";
    return;
  }

  money_ = money_ - amount;
}

void BankAccount::add(double amount) { money_ = money_ + amount; }

} // namespace SecondNs
} // namespace MyCompanyLtdLibrary