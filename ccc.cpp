#include <iostream.h>
#include <conio.h>

main()
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

if (lapan=125)
lapan=125;
else
if (tujuh=100)
tujuh=100;
else
if (enam=90)
enam=90;
else
if (buram=75)
buram=75;

cout<<"Pilihan Kertas : ";
cin>>krts;

total=harga*jml;
cout<<"Total Harga : "<<total<<endl<<endl;
cout<<"Masukan jumlah uang : ";
cin>>bayar;
kembali=bayar-total;
cout<<"Total kembalian anda : "<<kembali;
getch();

}
