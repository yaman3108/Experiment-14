#include <iostream>
#include <string>
using namespace std;

class Uni {
    public:
    string uni = "Symbiosis: ";
    void discipline(){
        cout<<"Engineering"<<endl;
    }
};
class Dep: public Uni {
    public:
    string dept="Electronics & Communication";
};

int main(){
    Dep u1;
    u1.discipline();
    cout<<u1.uni+" "+u1.dept;
}
