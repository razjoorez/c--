#include <iostream>

using namespace std;

class Cat {
    private: 
        string name;
        string color;
        string favorite_toy;


         public :  
         void print_cat()
     {
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Favorite Toy : " << favorite_toy << endl;
     }
            //Constructor
     Cat() {
        name="Unkown";
        color= "Unkown";
        favorite_toy="Unkown";
     }

     Cat(string n)
     { 
        name = n;
        color= "Unkown";
        favorite_toy = "Unknown";
     }

     Cat(string n, string c, string f="laser pointer") {
        name= n;
        color= c;
        favorite_toy = f;
     }

     //Desctructor 
     ~Cat() {
        cout << "Destructor called" <<endl;
     }
     

     };

    //  Cat::Cat(string n, string c, string f) {
    //     name= n;
    //     color= c;
    //     favorite_toy = f;
    //  }
   
     

int main() {

    Cat cat1;
    cout << "Cat 1..." <<endl;
    cat1.print_cat();
    cout << endl;

    Cat cat2("reza");
    cout << "Cat2..." <<endl;
    cat2.print_cat();
    cout <<endl;

     Cat cat3("reza", "white", "tennis");
    cout << "Cat3..." <<endl;
    cat3.print_cat();
    cout <<endl;
     Cat cat4("reza", "white");
    cout << "Cat4..." <<endl;
    cat4.print_cat();
    cout <<endl;

    return 0;
}