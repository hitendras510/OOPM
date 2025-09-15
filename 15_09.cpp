#include<iostream>
using namespace std;

int largest  (int x,int y,int z) {
if(x>y && x>z)
{
    return x;
}
else if(x<y && y<z) {
    return y;
{
else {
    return z;
}}

//over loaded fxn
int largest (int x,int y)
{
    if(x>y) return x;
    else return y;
}

int main()
{
    int a =17, b =8,c =10;
    cout<<"the largest number among 3:"<<largest (a,b,c);
    cout<<"the largest number among 2:"<<largest (b,c);
}
return 0;
}