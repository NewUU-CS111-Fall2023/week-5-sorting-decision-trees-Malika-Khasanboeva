#include <iostream>
#include <vector>
#include <string>

void displayColors(const std::vector<std::string> &matrix) {
    for (const auto &row : matrix) {
        for (const auto &color : row) {
            if (color == "b") {
                std::cout << "\033[44m  ";  // blue background
            } else if (color == "y") {
                std::cout << "\033[43m  ";  // yellow background
            } else if (color == "w") {
                std::cout << "\033[47m  ";  // white background
            }
        }
        std::cout << "\033[0m" << std::endl;  // reset color
    }
}

int main() {
    std::vector<std::string> matrix = {
        {"b", "b", "w", "b", "b", "y", "w", "w", "w"},
        {"b", "b", "w", "w", "b", "y", "y", "b", "b"},
        {"y", "y", "y", "w", "w", "b", "b", "b", "b"},
        {"y", "e", "y", "e", "y", "w", "w", "b", "b"},
        {"w", "b", "b", "w", "w", "b", "w", "w", "w"},
        {"B", "b", "w", "w", "w", "w", "w", "y", "w"}
    };
    
    displayColors(matrix);
    
    return 0;
}
