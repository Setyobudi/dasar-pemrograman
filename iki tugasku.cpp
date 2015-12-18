#include<iostream>
using namespace std;
int main()
{
    int jml, lapan, tujuh, enam, buram, krts, harga, total, bayar, kembali;

cout<<"KASIR FOTO COPY SUKAMAJU"<<endl;
cout<<"========================"<<endl;

cout<<"Masukan jumlah kertas : ";
cin>>jml;
cout<<endl;
lapan=125;
tujuh=100;
enam=90;
buram=75;
cout<<"Pilih jenis kertas : "<<endl;
cout<<"1 = HVS 80gr Rp. 125 / lembar"<<endl;
cout<<"2 = HVS 70gr Rp. 100 / lembar"<<endl;
cout<<"3 = HVS 60gr Rp. 90 / lembar"<<endl;
cout<<"4 = Buram Rp. 75 / lembar"<<endl<<endl;

cout<<"Masukkan harga kertas sesuai dengan jenis yang anda pilih : ";
cin>>krts;
if (krts=lapan)
{total=lapan*jml;}
else if (krts=tujuh)
{total=tujuh*jml;}
else if (krts=enam)
{total=enam*jml;}
else if (krts=buram)
{total=buram*jml;}
//total=harga*jml;
cout<<"Total Harga : "<<total<<endl;
cout<<"Masukan jumlah uang : ";
cin>>bayar;
kembali=bayar-total;
cout<<"Total kembalian anda : "<<kembali<<endl;
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
