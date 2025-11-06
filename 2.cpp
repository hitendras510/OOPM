//function addition

#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

float add (int a, float b){
    return a+b;
}
float add(float a, int b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}
int main(){
    cout<<"Addition"<<add(3,4);
}