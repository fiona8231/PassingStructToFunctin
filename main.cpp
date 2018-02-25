#include <iostream>

using namespace std;

struct student {
    int number;
    string name;  };

//prototype
void display(student s);
void  showResult(student *s1);

int main() {

    student a  = { 3, "Sayoli"};
    //case 1

    display(a); // output :
    cout << a.number; // output: 3

    cout << endl;
    //case 2
    showResult(&a); // output: 4 (changed)
    cout << a.number;

    return 0;
}
//Case1: passing the struct object as parameter
void display(student s){

    cout<<  s.number << endl;
    s.number  = 56;
}
//Case2: passing pointer of object as parameter
void  showResult(student *s){
    cout << s->number << endl;
    s->number = 4;
}

