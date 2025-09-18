// #include<iostream>
// using namespace std;
// int main ()
// {
//     // int y=25;
//     // int &x=y;
//     // x=y;
//     // cout<<y;






//     return 0;
// }
///////////////////////

#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x=25,y=50;
    swap(x,y);
    cout<<x<<""<<y;
    return 0;
}
//to implement complex calcutation
// class complex
