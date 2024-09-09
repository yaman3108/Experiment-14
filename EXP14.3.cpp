#include <iostream>
#include <string>
using namespace std;

//Parent Class-1
class Food {
    public:
    string cuisine = "Indian";
    void type(){
        cout<<"Asian"<<endl;
    }
};
//Child Class-1 (derived from parent-1)
class Dish: public Food {
    public:
    string dish = "Biryani";
};
//Parent Class-2
class Restaurant {
    public:
    string name = "Spice Kitchen";
    void place() {
        cout<<"India";
    }
};
//Child Class-2 (derived from parent-1&2)
class Combi: public Food, public Restaurant {
    public:
    string hotel = "JW Marriot";
};
//Child Class-3 (derived from child-1)
class Classify: public Dish {
    public:
    string clas = "Malabar Biryani";
};

int main(){
    //Single Inheritance
    Dish f1;
    f1.type();
    cout<<f1.cuisine<<": "<<f1.dish<<endl;

    //Multiple Inheritance
    Combi f2;
    cout<<endl;
    f2.place();
    cout<<endl<<f2.cuisine<<": "<<f2.hotel<<endl<<f2.name<<endl;

    //Multilevel Inheritance
    Classify f3;
    cout<<endl;
    f3.type();
    cout<<f3.cuisine<<": "<<f3.dish<<"("<<f3.clas<<")";
}
