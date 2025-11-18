#include<iostream>;
using namespace std;

class Base{
    public:
    int x;
    protected:
    int y;
    private:
    int z;

};
class Derived1 : public Base 
{
    


};

class Derived2: protected Base
{


};

class Derived3: private Base
{



};

int main(){



return 0;
};