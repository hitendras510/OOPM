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

class Microwave: public Appliance{
    public:
    void start(){
        cout<<"Microwave calls\n"<<endl;
    }
};

int main()
{

    
}