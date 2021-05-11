#include "mysqrt.hpp"
#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Invalid arguments\n";
    } else {
        std::cout << mysqrt(std::atof(argv[1])) << std::endl;
    }
    return 0;
}
