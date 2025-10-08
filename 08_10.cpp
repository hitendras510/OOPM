#include<iostream>
using namespace std;
class demo{
    public:
    int data;
    demo(){
        cout<<"object constructed "<<endl;
    }
    ~demo(){
        cout<<"object destructed "<<endl;
    }
};
int main(){
    demo d,
    d1;
    return 0;
}