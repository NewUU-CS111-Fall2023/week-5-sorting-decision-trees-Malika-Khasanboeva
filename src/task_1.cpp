/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>
#include <string>

void bubbleSort(std::vector<std::string> &books) {
    int n = books.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (books[j] > books[j+1]) {
                std::swap(books[j], books[j+1]);
            }
        }
    }
}

int main() {
    std::vector<std::string> bookTitles = {"Catcher in the Rye", "To Kill a Mockingbird", "The Great Gatsby", "Pride and Prejudice", "Moby Dick"};
    
    std::cout << "Unsorted list of book titles:" << std::endl;
    for (const auto &title : bookTitles) {
        std::cout << title << std::endl;
    }
    
    bubbleSort(bookTitles);
    
    std::cout << "\nSorted list of book titles:" << std::endl;
    for (const auto &title : bookTitles) {
        std::cout << title << std::endl;
    }
    
    return 0;
}
