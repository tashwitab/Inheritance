#include<iostream>
using namespace std;

class vehicle{
    public:
    string brand = "BMW";
    string color = "White";
};

class Features{
    public:
    string engine = "BMW N52";
    string milage = "17.42 Kmpl";
};

class display:public Features, public vehicle{
    public:
    void Display(){
        cout<< brand<<" "<<color<<" "<<milage;
    }
};

int main(){
    display car;
    car.Display();
}

