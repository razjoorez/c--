#include <iostream>

using namespace std;

class Sto {
    private: 
        string name;
        string color;
        string favorite_toy;


         public :  
         void print_sto()
     {
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Favorite Toy : " << favorite_toy << endl;
     }
            //Constructor
    Sto();
    Sto(string n);
    Sto(string n, string c, string f);
    

     //Desctructor 
     ~Sto() {
        cout << "Destructor called" <<endl;
     }
     

     };

     Sto::Sto(string n, string c, string f){
        name=n;
        color= c;
        favorite_toy = f;
     };

     Sto:: Sto(string n) {
        name=n;
     };

     Sto::Sto() {
        name="unkown";
        color= "unkown";
        favorite_toy = "unkown";
     }

    
     

int main() {

    Sto sto1;
    cout << "Sto 1..." <<endl;
    sto1.print_sto();
    cout << endl;

    

    return 0;
}