#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int choice;
    float celcius,kelvin,fahrenheit;
    while(1)
    {
        cout<<"1. Convert from Celcius to Kelvin.\n";
        cout<<"2. Convert from Celcius to Fahrenheit.\n";
        cout<<"3. Convert from Kelvin to Fahrenheit.\n";
        cout<<"4. Exit.\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        if (choice==1)
        {
            cout<<"Enter the temprature in Celcius: ";
            cin>>celcius;
            kelvin=celcius+273.15;
            cout<<"The temprature in Kelvin is: ";
            cout<<fixed<<setprecision(2)<<kelvin<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------\n";
        }
        else if (choice==2)
        {
            cout<<"Enter the temprature in Celcius: ";
            cin>>celcius;
            fahrenheit=(celcius*1.8)+32.00;
            cout<<"The temprature in fahrenheit is: ";
            cout<<fixed<<setprecision(2)<<fahrenheit<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------\n";
        }
        else if (choice==3)
        {
            cout<<"Enter the temprature in Kelvin: ";
            cin>>celcius;
            fahrenheit=((kelvin-273.15)*1.8)+32.00;
            cout<<"The temprature in fahrenheit is: ";
            cout<<fixed<<setprecision(2)<<fahrenheit<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------\n";
        }
        else if(choice==4) break;
        else
        {
            cout<<"Invalid choice.\n";
            continue;
        }
    }
    return 0;

}