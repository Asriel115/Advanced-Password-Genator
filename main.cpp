#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>
#include <random>
#include <iostream>
#include <cstdlib>
#include <filesystem>
#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>

namespace fs = std::filesystem;
static const std::string characters{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=[]{}|;:',.<>?/"};

fs::path get_home_directory() {
    const char* home = std::getenv("HOME");  // Get the HOME environment variable
    if (home) {
        return fs::path(home);
    } else {
        throw std::runtime_error("Could not determine the home directory.");
    }
}

void pwdGen() {

}

int main() {
    try {
        fs::path homeDir = get_home_directory();
        std::cout << "Home Directory: " << homeDir << "\n";
    } catch (const std::exception& e) {
        std::cerr << e.what() << "\n";
    }
    return 0;

}
