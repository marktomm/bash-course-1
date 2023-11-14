// ATM program

// V 1.0 requirements:
// 1. single user bank account (use double for balance)
// 2. can add money to balance
// 3. can withdraw money from balance
// 4. the program starts with 100.00 dollars in the account
// 5. at the end of the program output the resulting balance
// 6. make the program interactive (CLI - Command Line Interface)

// V 1.1 requirements:
// 1. Add user name (std::string) to bank account

#include <iostream> // std::cout and std::cin
#include <string>
#include <vector>

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
  double getMoney() {
    return money_;
  }

  string getName() {
    return name;
  }

  // these algorithms/functions alter the state of the variable of type
  // BankAccount
  void setName(string n) {
    name = n;
  }

  void withdraw(double amount) {
    if (money_ < amount) {
      cout << "Insufficient funds bro!\n";
      return;
    }

    money_ = money_ - amount;
  }

  void add(double amount) { money_ = money_ + amount; }
};

} // namespace SecondNs
} // namespace MyCompanyLtdLibrary

int main() {
  using namespace MyCompanyLtdLibrary::SecondNs;
  BankAccount ba; // at this point the vector constructor is being run

  ba.add(100.00);

  cout << "money: " << ba.getMoney() << '\n';

  cout << "Hello! Enter your name:\n";
  string temporary;
  cin >> temporary;
  ba.setName(temporary);

  while (true) {
    cout << "Dear " << ba.getName()
         << ". Please enter command (withdraw amount, add amount, "
            "quit)\n";
    // we have to collect a command from the user
    string command;
    cin >> command;

    if (command == "quit") {
      break;
    }

    // we have collected the amount from the user
    double amount;
    cin >> amount;

    cout << "User supplied cmd: " << command << " and amount: " << amount
         << "\n";

    if (command == "withdraw") {
      ba.withdraw(amount);
    } else if (command == "add") {
      ba.add(amount);
    }
  }

  cout << "The resulting balance is " << ba.getMoney() << "\n";
}