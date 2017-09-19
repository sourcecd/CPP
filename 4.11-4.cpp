#include <iostream>

int main() {
    for (char c = 'a'; c <= 'z'; ++c) {
        std::cout << c << ": int - " << std::dec << int(c);
        std::cout << " hex - " << std::hex << int(c) << std::endl;
    }
    std::cout << "\n";
    for (char c = '0'; c <= '9'; ++c) {
        std::cout << c << ": int - " << std::dec << int(c);
        std::cout << " hex - " << std::hex << int(c) << std::endl;
    }
    std::cout << "\n";
    for (char c = '['; c <= ']'; ++c) {
        std::cout << c << ": int - " << std::dec << int(c);
        std::cout << " hex - " << std::hex << int(c) << std::endl;
    }
    return 0;
}