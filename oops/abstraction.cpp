#include<bits/stdc++.h>
using namespace std;

class SmartDevice{
  public:
    virtual void turnOn()=0;
    virtual void turnOff()=0;
    virtual void deviceStatus()=0;

    virtual ~SmartDevice(){}
};

class Light : public SmartDevice{
  private:
      int brightness;
      bool isOn;
  public:
    Light(){
      brightness=0;
      isOn=false;
    }

    void turnOn() override{
      isOn=true;
      brightness=100;
      cout<<"LEDs oned."<<endl;
    }

    void turnOff() override{
      isOn=false;
      brightness=0;
      cout<<"LEDs offed"<<endl;
    }

    void deviceStatus() override{
      cout<<"this is device status"<<endl;
    }
};

class Fan: public SmartDevice{
  private:
    int speed;
    bool isOn;  
  public:
    Fan(){
      speed=0;
      isOn=false;
    }

    void turnOn() override{
      isOn=true;
      speed=3;
      cout<<"fans started"<<endl;
    }

    void turnOff() override{
      isOn=false;
      speed=0;
      cout<<"fans stopped"<<endl;
    }

    void deviceStatus() override{
      cout<<"this is status"<<endl;
    }

};

int main(){
  SmartDevice* livingRoomLight= new Light();
  SmartDevice* bedroom= new Fan();

  livingRoomLight->turnOn();
  livingRoomLight->deviceStatus();
  livingRoomLight->turnOff();

  bedroom->turnOn();
  bedroom->deviceStatus();
  bedroom->turnOff();

  delete livingRoomLight;
  delete bedroom;

  return 0;
}