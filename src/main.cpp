#include <iostream>

void printUsage(const char* program_name) {
    std::cerr << "Usage: " << program_name << " <IP_ADDRESS> <PORT>" << std::endl;
    std::cerr << "Example: " << program_name << " 127.0.0.1 8080" << std::endl;
    std::cerr << "         " << program_name << " 192.168.1.100 22" << std::endl;
}

int main(){
    return 0;
}