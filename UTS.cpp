#include<iostream>
using namespace std;

int main()
{
    int celcius, delisle;                                                                
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"|                      Celcius to Delisle                      |"<<endl; //menampilkan tulisan "|                    Celcius to Delisle                        |"
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"masukkan derajat celcius : "; //menampilkan tulisan "masukkan suhu dalam celcius : "
    cin>>celcius; //untuk merekam inputan sebagai data dan disimpan di variabel celcius
    delisle=(100-celcius) * 1.5; // mencari nilai untuk delisle
    for (int i=1; i<=12; i++)// perintah for untuk menampilkan 12x tulisan
    {
    cout<<"Hasil Konversi ke derajat delisle = ";  //menampilkan tulisan "Hasil Konversi ke derajat delisle = "
    cout<<delisle<<endl; //menampilkan isi dari nilai dari delisle
    }    
    if (celcius<10) // perintah agar menampilkan tulisan panas / dingin
    {
    cout<<"dingin"<<endl; //menampilkan tulisan dingin
    }
    else
    {
    cout<<"panas"<<endl; //menampilkan tulisan panas
    }
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"|        12.1.03.03.0285 / 1-F / M. Hakim Setyobudi             |"<<endl; //menampilkan tulisan "|        12.1.03.03.0285 / 1-F / M. Hakim Setyobudi             |"
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    system("pause"); //menampilkan "press any key to continue..."
    return 0;
}






















/*
  Name: Muhammad Hakim Setyobudi
  Copyright: UTS peertama
  Author: Kim Hack Setyobudi
  Date: 04/05/13 19:10
  Description: UTS PERTAMA HARUS BISA
*/

