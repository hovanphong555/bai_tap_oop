#include <iostream>
#include<string>
using namespace std;
// car and person as a class
class car{
    private:
    string static seri;
    //string seri;
    double power, speed;
    double turbo;
    double longitude,latitude;
    //aa

public:
 void normal(string  const seri,double const power, double speed);
 void performance(string  const seri,double const power, double speed,double turbo,double longitude,double latitude);
 double get_longitude();// get value longitude
 double get_latitude(); //get value latitude  
 string get_seri();       // get value seri
 double get_power();    // get value power
 double get_speed();    // get value speed

 virtual void drive_a_car();  //


};
double car::get_power(){
    return power;
}
double car::get_speed(){
    return speed;
}
string car::get_seri(){
    return seri;
}
double car::get_longitude(){   // 
    return longitude;
}

double car::get_latitude(){   
return latitude;
}


void car::normal(string const seri,double const power, double speed){
    //this->seri=seri;
    this->power=power;
    this->speed=speed;

}
void car::performance(string const seri,double const power, double speed,double turbo,double longitude,double latitude){
    this->seri=seri;
    this->power=power;
    this->speed=speed;
    this->turbo=turbo;
    this->longitude=longitude;
    this->latitude=latitude;
}
class engineer:public car{  // Class engineer{} is Derived Class, inheritance from Class car{}

public:
void drive_a_car();
void program_nevigating();
void read_seri_power_speed();


};
void engineer::read_seri_power_speed(){  // read value seri, power, speed
    engineer a;
    a.get_seri();
    a.get_power();
    a.get_speed();
}
void engineer::program_nevigating(){
    engineer a;
    a.get_longitude();
    a.get_latitude();
    /*
    program navigating system ....
    */

}
void engineer::drive_a_car(){
    //  program drive a car   .....
}




class user: public car{
    
    public:
    void drive_a_car();
    void position();
    void read_power_speed();
};
void user::drive_a_car(){
    // program drive a car ....
}
void user::position(){ 
     user a;
    a.get_longitude();
    a.get_latitude();
    /* 
    program position a car .......
    */
}
void user::read_power_speed(){
    car a;
    a.get_power();
    a.get_speed();
}



int main(){
    return 0;
}