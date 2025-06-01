//Name: Iajuddin
//Id: 41240202288
//Section: 3E
//Course: CSE1360-OOP LAB(C++)
#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    protected:
    int vehicleID;
    int fuelCapacity;
    int maxSpeed;
    public:
    Vehicle(){

    }
    Vehicle(int v, int f, int m){
        vehicleID = v;
        fuelCapacity = f;
        maxSpeed = m;
    }
    
    virtual void move()=0;
    virtual void displayInfo()=0;
    
};
class Insurance {
    protected:

    int insuranceAmount;
    string  insured;
    public:
    Insurance(){}
    Insurance(int a):age(a){}
    void insurance(){
        if(age>15){
            ins = false;
        }
        else if(age<=15 && age>-1){
            ins = true;
        }
    }

};
class Car :  public Vehicle,public Insurance
{
    protected:
    int passengers;
    int currSpeed;
    public:
    Car(){}
    
    Car(int v, int f, int m,int a, int p, int c=0) : Vehicle(v,f,m),Insurance(a),passengers(p),currSpeed(c){}
    void move(int currSpeed)
    {
        this->currSpeed = currSpeed;
    }
    void displayInfo(){
        cout<<"Vehicle ID: "<<vehicleID<<endl;
        cout<<"Vehicle Type: Car\n"<<"Max Speed: "<<maxSpeed
        <<"km/h /nFuel Capacity: "<<fuelCapacity<<" liters"
        <<"\nPassengers numbers: "<<passengers<<"\n"
        <<"Car is currently moving at "<<currSpeed<< " km/h"
        <<"\nInsurance status"<<(ins) ? "active":"disabled";
    }
};

int main(){
    
}