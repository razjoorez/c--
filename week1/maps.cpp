#include <iostream>
#include <vector>

#include <map>
#include <unordered_map>
using namespace std;

struct CityRecord
{
    string Name;
    uint64_t Population;
    double Latitude, Longitude;

    CityRecord() = default;
    CityRecord(string name, uint64_t pop, double lat, double lon)
        : Name(name), Population(pop), Latitude(lat), Longitude(lon) {}
};

int main() {
    vector<CityRecord> cities;

    cities.emplace_back("Melbourne", 5000000, 2.4, 9.4);
    cities.emplace_back("Lol-town", 5000000, 2.4, 9.4);
    cities.emplace_back("Berlin", 5000000, 2.4, 9.4);
    cities.emplace_back("Paris", 5000000, 2.4, 9.4);
    cities.emplace_back("London", 5000000, 2.4, 9.4);

   map<string, CityRecord> cityMap;
   cityMap["Melbourne"] = CityRecord{"Melbourne", 5000000, 2.4, 9.4};
   cityMap["Lol-town"] = CityRecord{"Lol-town", 5000000, 2.4, 9.4};
   cityMap["Berlin"] = CityRecord{"Berlin", 5000000, 2.4, 9.4};
   cityMap["Paris"] = CityRecord{"Paris", 5000000, 2.4, 9.4};
   cityMap["London"] = CityRecord{"London", 5000000, 2.4, 9.4};
   

   CityRecord& berlinData = cityMap["Berlin"];
   cout << berlinData.Population;

};







