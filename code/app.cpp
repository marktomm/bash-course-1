#include <iostream>
#include "argparse.hpp"

namespace ourns {
    class ourclass {

    };
}

int main(int arg_count, char *argument_array[]) {
    std::cout << argument_array << "\n";

    ourns::ourclass x();

    using namespace argparse;
    ArgumentParser program("program_name");

    bool res = false;
    if (res) 
    {
        return 0; // this means all good
    }

    else 
    {
        return 128; // this indicates troubles
    }
}