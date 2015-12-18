#include<iostream>
#include<conio.h>
#include<cstring>
main()
{
int x,mouse=50000,dvd=5000,fd =90000,jml1,jml2,jml3,total,bayar,tunai,sisa,diskon;
//string brg1, brg2, brg3;

cout<<"zssssssssssss";
cout<<"zzz";
cout<<"sss";

cout<<"\nMasukkan nama barang 1 = "; cin>>brg1;
cout<<"Jumlah barang 1 = ";
cin>>x;
jml1=x*mouse;
cout<<"Anda harus bayar = Rp. "<<jml1<<endl;

cout<<"\nMasukkan nama barang 2 = "; cin>>brg2;
cout<<"Jumlah barang 2 = ";
cin>>x;
jml2=x*dvd;
cout<<"Anda harus bayar = Rp. "<<jml2<<endl;

cout<<"\nMasukkan nama barang 3 = "; cin>>brg3;
cout<<"Jumlah barang 3 = ";
cin>>x;
jml3=x*fd;
cout<<"Anda harus bayar = Rp. "<<jml3<<endl;

bayar=jml1+jml2+jml3;
cout<<"\n===================================== \nJumlah bayar total = Rp. "<<bayar<<endl;

if(bayar>500000)
{
diskon=0.10*bayar;
cout<<"Anda mendapatkan diskon 10%, diskon sebesar = Rp. "<<diskon<<endl;
total=bayar-diskon;
cout<<"Anda harus membayar = Rp. "<<total<<endl;
}
else
if(bayar<500000)
{
diskon=0;
cout<<"Anda mendapatkan diskon 0%, diskon sebesar = Rp. "<<diskon<<endl;
total=bayar;
cout<<"Anda harus membayar = Rp. "<<total<<endl;
}

cout<<"\n===================================== \nUang tunai = Rp. ";
cin>>tunai;
sisa=tunai-total;
cout<<"Jadi uang kembali = Rp. "<<sisa<<endl;
cout<<"\n======================================= \n----TERIMA KASIH ATAS KUNJUNGANNYA!---- \n=======================================\n";
getch();
}
