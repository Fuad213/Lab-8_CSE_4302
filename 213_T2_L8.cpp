#include <bits/stdc++.h>
using namespace std;

class seat
{
    string str;
    string wrm;
 public:
    void get_comfortability()
    {
        cout<<"Enter comfortability level : ";
        cin>>str;
    }

    void check_presence()
    {
        cout<<"Enter (YES/NO) Seat warmer presence : ";
        cin>>wrm;
    }

    void show()
    {
        cout<<"Comfortability level : "<<str<<endl;
        cout<<"Presence of seat warmer : "<<wrm<<endl;
    }

};

class wheels
{
    int r;
    double c;
  public:
    void get_r()
    {
        cout<<"Enter radius of wheels :";
        cin>>r;
    }

    void show()
    {
        c=(2*3.1416*r);
        cout<<"Wheel Circumference  : "<<c<<endl;
    }


};

class engine
{
    double fuel,energy,rpm;

public:

    void mx_fuel()
    {
        cout<<"Enter max fuel consumption rate : ";
        cin>>fuel;
    }

    void mx_energy()
    {
        cout<<"Enter max energy production rate : ";
        cin>>energy;
    }

    void avg_rpm()
    {
        cout<<"Enter avg rpm : ";
        cin>>rpm;
    }

    void show()
    {
        cout<<"Max fuel consumptuion rate : " <<fuel<<endl;
        cout<<"Max energy production rate : "<<energy<<endl;
        cout<<"Average RPM  :  "<<rpm<<endl;
    }


};

class doors
{
    string dr;

public:
     void open_mode()
     {
         cout<<"Enter (side,upward) door opening mode : ";
         cin>>dr;
     }

     void show()
     {
         cout<<"Door opening mode : "<<dr<<endl;
     }

};

class car
{
    double  acc,fuel_cap;
    seat s;
    engine e;
    wheels w;
    doors  d;

public:

      void mx_acc()
      {
          cout<<"Enter max accelaration : ";
          cin>>acc;
      }

      void mx_fuel_cap()
      {
          cout<<"Enter fuel capacity : ";
          cin>>fuel_cap;
      }

      void getdata()
      {
          s.get_comfortability();
          s.check_presence();
          w.get_r();
          e.mx_fuel();
          e.mx_energy();
          e.avg_rpm();
          d.open_mode();
      }

      void show()
      {
          cout<<"Max accelaration : "<<acc<<endl;
          cout<<"Fuel capacity    : "<<fuel_cap<<endl;
          s.show();
          w.show();
          e.show();
          d.show();
      }

};



int main()
{
       car c1;
       c1.mx_acc();
       c1.mx_fuel_cap();
       c1.getdata();
       cout<<endl;
       c1.show();
}
