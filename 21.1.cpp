#include <iostream>
using namespace std;
class Motor{
    private:
    long  seri;
    double power, speed;
    double turbo;
    double longitude,latitude;

public:
 void normal(long const seri,double const power, double speed);
 void performance(long const seri,double const power, double speed,double turbo,double longitude,double latitude);


};
void Motor::normal(long const seri,double const power, double speed){
    this->seri=seri;
    this->power=power;
    this->speed=speed;

}
void Motor::performance(long const seri,double const power, double speed,double turbo,double longitude,double latitude){
    this->seri=seri;
    this->power=power;
    this->speed=speed;
    this->turbo=turbo;
    this->longitude=longitude;
    this->latitude=latitude;


}

int main(){
    Motor a;
    
    a.normal(1,2,3);
    a.normal(3,4,5);

    
    return 0;
}