#include <iostream>
#include <vector>

int countElements(const std::vector<int> &arr) {
    int count = 0;
    for (int i = 1; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> arr = {5, 2, 8, 1, 4, 6};
    
    std::cout << "Array: ";
    for (const auto &num : arr) {
        std::cout << num << " ";
    }
    
    int result = countElements(arr);
    std::cout << "\nCount of elements meeting the criteria: " << result << std::endl;
    
    return 0;
}
