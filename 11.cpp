#include<iostream>
using namespace std;

class Appliance{
    public:
    virtual void start(){
        cout<<"Generic Appliance\n";
    }
};

class Toaster: public Appliance{
    public:
    void start(){
        cout<<"Toaster calls\n";
    }
};

class Oven: public Appliance{
    public:
    void start(){
        cout<<"Oven calls\n";
    }
};

class Microwave: public Appliance{
    public:
    void start(){
        cout<<"Microwave calls\n";
    }
};

int main()
{
    Appliance *obj1 = new Toaster;
    Appliance *obj2 = new Oven;

    obj1->start();   // Calls Toaster version
    obj2->start();   // Calls Oven version

    return 0;
}
