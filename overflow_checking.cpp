#include <iostream>
#include <string>

unsigned int int_max(unsigned int n) {
    return n;
}

void get_num()
{
    unsigned int number;
    std::cin >> number;
    std::cout << "Number, " << number << "!\n";
    // stream fails on overflow
    if (std::cin.good()) std::cout << "Good\n";
    else if (std::cin.fail()) std::cout << "fail";
}

int main()
{
    // check for overflow test
    std::cout << int_max(10000000000);      // compiler warning -Woverflow
    // large integer implicitly truncated to unsigned type
    get_num();
}
