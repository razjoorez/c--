#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector<int> numbers = {1,2,3,4,5,6,7,8,9};

    for(auto& element: numbers) {
        std::cout << element<< " ";
    }
    std::cout << std:: endl;
 }