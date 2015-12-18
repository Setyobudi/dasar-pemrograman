#include<iostream>
using namespace std;
int main()
{
    float celcius; //deklarasi variabel dengan nama "celcius" dengan tipe data atau sebagai float
    float fahrenheit; //deklarasi variabel dengan nama "fahrenheit" dengan tipe data atau sebagai float
    float reamur; //deklarasi variabel dengan nama "reamur" dengan tipe data atau sebagai float
    float kelvin; //deklarasi variabel dengan nama "kelvin" dengan tipe data atau sebagai float
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"|                    Termometer super canggih                  |"<<endl; //menampilkan tulisan "|                    Termometer super canggih                  |"
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"masukkan suhu dalam celcius : "; //menampilkan tulisan "masukkan suhu dalam celcius : "
    cin>>celcius; //untuk merekam inputan sebagai data dan disimpan di variabel celcius
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"konversi Suhu"<<endl; //menampilkan tulisan "konversi Suhu"
    cout<<"celcius       : "; //menampilkan tulisan "celcius       : "
    cout<<celcius<<" C"<<endl; //menampilkan tulisan  atau data yang telah disimpan di  variabel celcius, kemudian menampilkan tulisan " C"
    cout<<"fahrenheit    : "; //menampilkan tulisan "fahrenheit    : "
    fahrenheit=1.8 * celcius + 32;
    cout<<fahrenheit<<" F"<<endl; //menampilkan tulisan atau data yang telah disimpan di  variabel fahrenheit, kemudian menampilkan tulisan " F"
    cout<<"reamur        : "; //menampilkan tulisan "reamur        : "
    reamur=celcius * 4/5;
    cout<<reamur<<" R"<<endl; //menampilkan tulisan atau data yang telah disimpan di  variabel reamur, kemudian menampilkan tulisan " R"
    cout<<"kelvin        : "; //menampilkan tulisan "kelvin        : "
    kelvin=celcius + 273;
    cout<<kelvin<<" K"<<endl; //menampilkan tulisan atau data yang telah disimpan di  variabel kelvin, kemudian menampilkan tulisan " K"
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    system("pause"); //merupakan perintah untuk mengentikan proses, dan akan kembali berjalan jika user atau pengguna menekan sembarang huruf di keyboard
    return 0;
}











/*
  Name: hack setyobudi
  Copyright: yeyeye wes mari
  Author: hakim
  Date: senin malam dikampus
  Description: program mencari diskon
*/
