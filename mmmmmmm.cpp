#include <cstdlib>
#include <iostream>
#include <iomanip>     // digunakan untuk memanggil header setprecision

using namespace std;
// deklarasi program
double diskon (float jum_barang);
double diskon_1(float jum_barang);
float total (float barang);
// diskon
float diskon_4=0.2;
float diskon_5=0.35;

float garis ()
{
       cout<<" ----------------------------------------- -"<<endl;
}
float tampilan ()
{
      cout<<" ----------------------------------------- "<<endl;
      cout<<"          PROGRAM HITUNG POTONGAN          "<<endl;
      cout<<" ----------------------------------------- "<<endl;  
}

int main(int argc, char *argv[])
{
    //deklarasi program
    // uang belanja
    float belanja_1=1000000;
    float belanja_2=5000000;
    //penjumlahan
    float harga_total;
    float harga;
    float jum_barang;
    // Perintah pengulangan
    char ulang;
    do
    {
    // pemanggian tampilan
    tampilan ();
   
    // perintah masukkan dari keyboard
    cout<<" Besar pembelian barang         Rp ";cin>>jum_barang;
   
    // perintah pemanggilan
    if(jum_barang<belanja_1)
    {
        cout<<" Besar diskon yang diberikan    RP  "<<0<<endl;
        garis ();
        cout<<" Besar harga yang harus dibayar Rp  "<<setprecision(12)<<jum_barang<<endl;
    }
    //setprecision digunakan untuk mengatur jumlah digit yang ingin ditampilkan
    if(jum_barang>belanja_1&&jum_barang<=belanja_2)
    {        
        harga=diskon (jum_barang);  // memindahkan nilai pada jum_barang
        harga_total=jum_barang-harga;         
        cout<<" Besar diskon yang diberikan    RP  "<<setprecision(12)<<harga<<endl;
        garis ();
        cout<<" Besar harga yang harus dibayar Rp "<<setprecision(12)<<harga_total<<endl;
    }
    if(jum_barang>belanja_2)
    {
        harga=diskon_1(jum_barang);
        harga_total=jum_barang-harga;
        cout<<" Besar diskon yang diberikan    RP  "<<setprecision(12)<<harga<<endl;
        garis ();
        cout<<" Besar harga yang harus dibayar Rp "<<setprecision(20)<<harga_total<<endl;
    }
    cout<<endl;
    cout<<" Anda ingin mengulang program kembali [ Y / N ] ";cin>>ulang;
    system("cls");
    }
    while (ulang=='y' || ulang=='Y');
    //system("PAUSE");
    //return EXIT_SUCCESS;
}

double diskon(float jum_barang)
{
       return (jum_barang*diskon_4);
}
double diskon_1 (float jum_barang)
{
       return (jum_barang*diskon_5);
}

