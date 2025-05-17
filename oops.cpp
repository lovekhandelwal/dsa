#include <iostream>
using namespace std;

class hero{
    public:
    int health;  // it will show garbage value without any 
    public:
    char level;     // assignment to both of them 
    hero(){
        cout<<"constructor called :"<<endl;
    }

    // parameteized constructor
    hero(int health){
        cout<<"this-> "<<this<<endl;
        this ->health = health;
    }

    void print(){
        cout<<level <<endl;
    }

    char getlevel(){
        return level;
    }
    void setlevel(char ch){
        level = ch;
    }
    
};

int main(){
    // statically created 
    hero ramesh(70);
    cout<<"address of ramesh : "<<&ramesh<<endl;

    // dianamically created
    hero* h = new hero();







    // hero ramesh;
    // // ramesh.health = 70;
    // // ramesh.setlevel('A');

    // // cout<<"size of "<<ramesh.health<<endl;
    // // cout<<"size of: "<<ramesh.getlevel()<<endl;

    // // now dynamically
    // hero *b = new hero;
    // (*b).setlevel('A');
    // cout<<"level is "<<(*b).level<<endl;
    // b->setlevel('A');
    // cout<<"level is "<<(*b).level<<endl;

    return 0; 
}