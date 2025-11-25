#include<iostream>
using namespace std;

class Appliance{
    public:
    virtual void start(){
        cout<<" Appliance constructed\n";
    }
    ~Appliance(){
        cout<<" Appliance destructed\n";
    }
};

class Toaster: public Appliance{
    public:
    void start(){
        cout<<"Toaster calls\n";
    }
    ~Toaster(){
        cout<<"Toaster destructed\n";
    }
};

class Oven: public Appliance{
    public:
    void start(){
        cout<<"Oven calls\n";
    }
    ~Oven(){
        cout<<"Oven destructed\n";
    }
};

class Microwave: public Appliance{
    public:
    void start(){
        cout<<"Microwave calls\n";
    }
    ~Microwave(){
        cout<<"Microwave destructed\n";
    }
};

int main()
{
     //dynamic obj; // static obj
    Appliance *obj=new Toaster; // dynamic obj
    return 0;
}
