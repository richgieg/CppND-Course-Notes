#include <fstream>
#include <iostream>
#include <string>

int main() {
    // std::ifstream my_file;
    std::ifstream my_file("files/1.board");
    // my_file.open("files/1.board");
    if (my_file) {
        std::cout << "The file stream has been created!" << "\n";
        std::string line;
        while (getline(my_file, line)) {
            std::cout << line << "\n";
        }
    }
}
