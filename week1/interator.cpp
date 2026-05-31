#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> numbers = {1,2,3,4,5,6,7,8,9};
    vector<int>::iterator it;

    it = numbers.begin();

    while(it < numbers.end()) {
        cout<< *it << " ";
        it++;
    }

    // cout << *it <<endl;

    // it++;

     cout << *it <<endl;




}