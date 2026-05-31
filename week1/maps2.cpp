#include <iostream>
#include <vector>

#include <map>
#include <unordered_map>
using namespace std;

int main() 
{
    map<string,int> myMap1;
    myMap1["Kevin"] = 123;
    myMap1["John"] = 213;
    myMap1["Amy"] = 312;

    myMap1.insert({"Mark", 23});  // insert makes a copy
    myMap1.emplace("jose",11);  // emplace makes an object in place

    myMap1.erase("John");

    map<string,int> myMap2  = 
    {
        {"kevin", 123},
        {"John", 231},
        {"Amy", 323},
    };

    for(const auto& element: myMap1) {
        cout<< element.first << " : " << element.second << endl;
    }

    int val1 = myMap1.at("Kevin");
    int val2 = myMap1["Kevin"];

    cout << myMap1["Kevin"] << endl;

    auto it = myMap1.find("Kevin");
    if(it==myMap1.end()) {
        cout << " Not Found!" << endl; 
    }else 
    {
        cout << "Found " << endl;
    }


    return 0;
}