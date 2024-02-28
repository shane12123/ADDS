#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        string first;
        string last;
    public:
        Person(string first, string last){this->first = first; this->last = last;}
        Person() = default;
        void setFirstName(string first){this -> first = first;}
        void setLastName(string last){this -> last = last;}
        string getName(){return first + " " + last;}
};

int main(){
    Person p("Shane", "Chieng");

    cout << p.getName() << endl;

    return 0;
}