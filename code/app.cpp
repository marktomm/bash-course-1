#include <vector> // array like container
// #include <algorithm>
// #include <iterator>

#include <string>
#include <iostream>
#include <fstream>

// class MyType {
// public:
//     MyType() {
//         a = 10;
//         str_ = "GG";
//     }

//     MyType(int a) {
//         a = a;
//     }

//     MyType(std::string s) {
//         str_ = s;
//     }

//     void fn() {
//         std::cout << a << ": " << str_ << "\n";
//     }

//     int a{5};
//     std::string str_;
// };

int main(int argc, char *argv[]) {
    // MyType x1;
    // x1.fn();
    // MyType x2(222);
    // std::string myData = "have some text";
    // std::cout << myData;
    // otherFn(myData);
    // `file_h` is a handle to the resource that is the open file
    // std::ifstream file_h("./app.conf"); // OOP. call the ctor.
    // std::vector<std::string> var_arr;
    // if(file_h.is_open()) {
    //     // std::cout << "some text" << var;
    //     std::string var;
    //     // file_h >> var;
    //     // char c_v = file_h.get();
    //     while(!file_h.eof()) {
    //         std::getline(file_h, var);
    //         // std::cout << var << '\n';
    //         var_arr.push_back(var);
    //     }
    // }

    // for(auto iter : var_arr) {
    //     // std::cout << iter << "\n";
    // }

    std::vector<int> vec = { 1, 2, 3, 4, 5 };
    vec.push_back(6);
    vec.pop_back();

    for(auto elem : vec) {
        std::cout << elem << "\n";
    }

    std::cout << vec[0] << "\n";

    // std::ofstream ofile_h("./hhh");
    return 0;
}