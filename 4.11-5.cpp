#include <iostream>
#include <limits>

int main() {
    std::cout << "min char: " << int(std::numeric_limits<char>::min())
              << ", max char: " << int(std::numeric_limits<char>::max()) << "\n"
              << "min short: " << std::numeric_limits<short>::min()
              << ", max short: " << std::numeric_limits<short>::max() << "\n"
              << "min int: " << std::numeric_limits<int>::min()
              << ", max int: " << std::numeric_limits<int>::max() << "\n"
              << "min long: " << std::numeric_limits<long>::min()
              << ", max long: " << std::numeric_limits<long>::max() << "\n"
              << "min float: " << std::numeric_limits<float>::min()
              << ", max float: " << std::numeric_limits<float>::max() << "\n"
              << "min double: " << std::numeric_limits<double>::min()
              << ", max double: " << std::numeric_limits<double>::max() << "\n"
              << "min long double: " << std::numeric_limits<long double>::min()
              << ", max long double: " << std::numeric_limits<long double>::max() << "\n"
              << "min unsigned: " << std::numeric_limits<unsigned>::min()
              << ", max unsigned: " << std::numeric_limits<unsigned>::max() << "\n";
}