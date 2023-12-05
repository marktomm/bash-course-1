#include <iostream>
#include <vector> // array like container
#include <string>
#include <algorithm>
#include <iterator>
#include <fstream>

int main(int argc, char *argv[]) {
    std::vector<std::string> arguments;
    std::copy(argv, argv + argc, 
        std::back_inserter(arguments));

    std::cout << arguments.size() << "\n";

    arguments.push_back("--more-args");

    // memory is allocated for the object in memory
    // and the constructor is called
    std::ifstream file("./app.conf");
    if(file.is_open()) {
        char c = file.get();
        std::string ts;
        while(file.good()) {
            if(c == '\n') {
                arguments.push_back(ts);
                ts = "";
            } else {
                ts += c;
            }
            c = file.get();
        }
        if(ts.size()) {
            arguments.push_back(ts);
        }
    }

    int i = 1;
    for(auto elem : arguments) {
        std::cout << "arg " << i++ << ": " << elem << "\n";
    }
}