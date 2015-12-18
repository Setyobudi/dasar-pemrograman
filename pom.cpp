#include<iostream>
using namespace std;
int main()
{
    float uang; //deklarasi variabel dengan nama "uang" dengan tipe data atau sebagai float
    float liter; //deklarasi variabel dengan nama "liter" dengan tipe data atau sebagai float
    liter=4500; //data atau nilai yang akan dimasukkan kedalam variabel liter. disini nilainya adalah 4500
    float hasil; //deklarasi variabel dengan nama "hasil" dengan tipe data atau sebagai float
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"|                    PROGRAM POM BENSIN                        |"<<endl; //menampilkan tulisan "|                    PROGRAM POM BENSIN                        |"
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"Masukkan Jumlah uang  : ";  //menampilkan tulisan "Masukkan Jumlah uang  : "
    cin>>uang; //untuk merekam inputan sebagai data dan disimpan di variabel uang
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    cout<<"Uang yang anda masukkan     : ";  //menampilkan tulisan "Uang yang anda masukkan     : "
    cout<<uang<<endl; //menampilkan tulisan atau data yang telah disimpan di  variabel uang
    hasil=uang/liter; //merupakan rumus yang digunakan untuk mencari data untuk variabel hasil
    cout<<"Jumlah Bensin yang diisikan : ";  //menampilkan tulisan "Jumlah Bensin yang diisikan : "
    cout<<hasil;  //menampilkan tulisan atau data yang telah disimpan di  variabel hasil
    cout<<" liter"<<endl;  //menampilkan tulisan " liter"
    cout<<"================================================================"<<endl; //menampilkan tulisan "================================================================"
    system("pause"); //merupakan perintah untuk mengentikan proses, dan akan kembali berjalan jika user atau pengguna menekan sembarang huruf di keyboard
    return 0;
}







/*
  Name: hack setyobudi
  Copyright: wes mari....
  Author: hakim
  Date: senin malam dikampus
  Description: program pom bensin
*/
