#include <iostream>
#include <vector>

void rearrangeSoldiers(std::vector<std::string> &soldiers) {
    int n = soldiers.size();
    for (int i = 0; i < n-1; i += 2) {
        std::swap(soldiers[i], soldiers[i+1]);
    }
}

int main() {
    std::vector<std::string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};
    
    std::cout << "Unrearranged list of soldiers:" << std::endl;
    for (const auto &soldier : soldiers) {
        std::cout << soldier << " ";
    }
    
    rearrangeSoldiers(soldiers);
    
    std::cout << "\nRearranged list of soldiers:" << std::endl;
    for (const auto &soldier : soldiers) {
        std::cout << soldier << " ";
    }
    
    return 0;
}
