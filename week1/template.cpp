#include <iostream>

using namespace std;


template <typename T, int length>
class Array
{
    public:

    T array[length];

    void fill(T value)
    {
        for (int i=0; i<length; i++) 
            array[i] = value;
    }

    T& at(int index)
    {
        return array[index];
    }
};

int main() {

    Array<int, 5> intArr;
    intArr.fill(2);
    cout << "intArray[4]: " << intArr.at(4) << endl;
    Array<string,8> strArr;
    strArr.fill("abc");
    strArr.at(6) = "123";
    cout << "intArray[6]: " << strArr.at(6) << endl;
     return 0;

}
