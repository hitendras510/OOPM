#include<iostream>;
using namespace std;

class Appliance{
    public:
    virtual void start(){
        cout<<"Generic Appliance\n"<<endl;
    }
};

class Toaster: public Appliance{
    public:
    void start(){
        cout<<"Toaster calls\n"<<endl;
    }
};
class Oven: public Appliance{
    public:
    void start(){
        cout<<"Oven calls\n"<<endl;
    }
};

class Microwave: public Appliance{
    public:
    void start(){
        cout<<"Microwave calls\n"<<endl;
    }
};

int main()
{
Appliance *obj1 = new Toaster;
Appliance *obj2 = new Oven;
runAppliance(obj1);
runAppliance(obj2);
return 0;
}