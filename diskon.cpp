#include<iostream>
using namespace std;
int main()
{
    float harga; //deklarasi variabel dengan nama "harga" dengan tipe data atau sebagai float
    float diskon; //deklarasi variabel dengan nama "diskon" dengan tipe data atau sebagai float
    float hasil; //deklarasi variabel dengan nama "hasil" dengan tipe data atau sebagai float
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"|                    PROGRAM PENCARI DISKON                    |"<<endl; //menampilkan tulisan "|                    PROGRAM PENCARI DISKON                    |"
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"Masukkan Harga  : "; //menampilkan tulisan "Masukkan Harga  : "
    cin>>harga; //untuk merekam inputan sebagai data dan disimpan di variabel harga
    cout<<"Masukkan Diskon : "; //menampilkan tulisan "Masukkan Diskon : "
    cin>>diskon; //untuk merekam inputan sebagai data dan disimpan di variabel diskon
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"Harga                       : "; //menampilkan tulisan "Harga                       : "
    cout<<harga<<endl; //menampilkan tulisan atau data yang telah disimpan di  variabel harga
    cout<<"Diskon                      : "; //menampilkan tulisan "Diskon                      : "
    cout<<diskon<<endl; //menampilkan tulisan atau data yang telah disimpan di  variabel harga
    cout<<"Harga setelah dikurangi diskon adalah : "; //menampilkan tulisan "Harga setelah diskon adalah : "
    hasil=harga-(harga*diskon/100); //merupakan rumus yang digunakan untuk mencari data untuk variabel hasil
    cout<<hasil<<endl; //menampilkan tulisan  atau data yang telah disimpan di  variabel hasil
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    system("pause"); //merupakan perintah untuk mengentikan proses, dan akan kembali berjalan jika user atau pengguna menekan sembarang huruf di keyboard
    return 0;
}











/*
  Name: hack setyobudi
  Copyright: sudah selesai
  Author: hakim
  Date: senin malam dikampus
  Description: program mencari diskon
*/
