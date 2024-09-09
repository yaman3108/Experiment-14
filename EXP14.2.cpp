#include <iostream>
#include <string>
using namespace std;

// Parent Class-1
class Vehicle {
    public:string company = "Ford";
    void type() {
        cout << "Mustang" << endl;
    }
};

// Parent Class-2
class Specs {
public:
    string mileage = "8 km/l";
    
    void colour() {
        cout << "Grey" << endl;
    }
};

// Child Class (derived from both Vehicle and Specs)
class Car : public Vehicle, public Specs {
public:
    string seater = "4 seater";
};

int main() {
    Car f2;
    
    f2.colour(); 
    cout << f2.company << endl; 
    f2.type(); 
    cout << "(" << f2.seater << ")" << endl; 
    cout << "MILEAGE: " << f2.mileage << endl; 

    return 0;
}
