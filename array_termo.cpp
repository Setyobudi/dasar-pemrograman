#include<iostream>
using namespace std;
int main()
{
    float suhu[4]; 
    cout<<"================================================================"<<endl; 
    cout<<"|                    Termometer super canggih                  |"<<endl; 
    cout<<"================================================================"<<endl; 
    cout<<"masukkan suhu dalam celcius : "; 
    cin>>suhu[0]; 
    cout<<"================================================================"<<endl; 
    cout<<"konversi Suhu"<<endl; 
    cout<<"celcius       : "; 
    cout<<suhu[0]<<" C"<<endl; 
    cout<<"fahrenheit    : "; 
    suhu[1]=1.8 * suhu[0] + 32;
    cout<<suhu[1]<<" F"<<endl; 
    cout<<"reamur        : "; 
    suhu[2]=suhu[0] * 4/5;
    cout<<suhu[2]<<" R"<<endl;
    cout<<"kelvin        : ";
    suhu[3]=suhu[0] + 273;
    cout<<suhu[3]<<" K"<<endl; 
    cout<<"================================================================"<<endl; 
    system("pause"); 
    return 0;
}











/*
  Name: hack setyobudi
  Copyright: yeyeye wes mari
  Author: hakim
  Date: senin malam dikampus
  Description: program mencari diskon
*/
