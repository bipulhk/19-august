#include <bits/stdc++.h>
using namespace std;

class AbstractCars{
    virtual void superCar()=0; 
};

class Cars: AbstractCars{
private:
    int horsepower;
    string brand;
protected:
    string name;

public:    
    Cars(string brand, string name, int horsepower){
        this->name = name;
        this->horsepower = horsepower;
        this->brand = brand;
    }

    void EngineStart(){
        cout<<brand<<" "<<name<<"'s "<<horsepower<<" HP engine goes"<<endl;
        cout<<"brummm"<<endl;
    }

    void SetName(string name){ // this is a setter type of function (encapsulation)
        this->name = name;
    }
    string GetName(){ //this is a getter type of function (encapsulation)
        return name;
    }

    // implementation of the pure virtual function
    void superCar(){
        if (horsepower > 500){
            cout<<name<<" is Super Car"<<endl;
        }else{
            cout<<name<<" is not a Super Car"<<endl;
        }
    }
    virtual void run(){
        cout<<name<<" is running on fossil fuels"<<endl;
    }
};

class Ev:public Cars{ // class electric vehicle implements from cars
public:
    string battery;
    Ev(string brand, string name, int hp, string battery):Cars(brand, name, hp){
        this->battery = battery;
    }
    void current(){
        cout<<name<<" battery capacity is "<<battery<<endl;
    }
    void run(){
        cout<<name<<" is running on solar energy"<<endl;
    }
};

class Hydro:public Cars{
public:
    string fuelType;
    Hydro(string brand, string name, int hp, string fuelType): Cars(brand, name, hp){
        this->fuelType = fuelType;
    }
    void tank(){
        cout<<name <<" has fuel-> "<<fuelType<<endl;
    }
    void run(){
        cout<<name<<" is running on "<<fuelType<<" energy"<<endl;
    }
};
int main(){
    // Cars car1;
    // car1.brand = "ferrari";
    // car1.horsepower = 500;
    // car1.name = "458 spyder";
    // // car1.EngineStart();


    // Cars car2;
    // car2.name = "veyron";
    // car2.brand = "buggati";
    // car2.horsepower = 700;
    // car2.EngineStart();
    
    // Cars car3 = Cars("buggati", "veyron", 4050);
    // car3.EngineStart();
    // // car3.SetName("bhairon");
    // car3.superCar();


    Ev e = Ev("tesla", "modelx", 300, "1kwh");
    // e.current();
    // e.EngineStart();

    Hydro h = Hydro("tesla", "H20 car", 499, "water");
    // h.tank();
    // h.EngineStart();

    Cars* c1 = &e;
    Cars* c2 = &h;

    c1->run();
    c2->run();
    return 0;
}