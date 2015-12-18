#include <conio.h>
#include <iostream.h>
#include <stdio.h>
int main()
{
   struct
   {
   char kobar, nabar[20];
   int harga, jumli, total, bayar, kembali;
   }brng;

   char awal, ulang;

   awal:
   clrscr();
   puts("----------------------------------------------");
   puts("*               PROGRAM KASIR                *");
   puts("----------------------------------------------");
   puts("[1] Input Makanan");
   puts("[2] Input Barang");
   puts("[3] Input Minuman");
   puts("[4] exit");
   cout<<"Pilih Kode Menu [1/2/3/4] : ";cin>>awal;
 if (awal=='1')
    goto satu;
   else
   if (awal=='2')
    goto dua;
   else if (awal=='3')
    goto tiga;
   else
    goto empat;

   satu:
   clrscr();
   puts("----------------------------------------------");
   puts("*               DAFTAR MAKANAN               *");
   puts("----------------------------------------------");
   puts("[A] Nasi Goreng");
   puts("[B] Nasi Campur Spesial");
   puts("[C] Ramen");
   puts("[D] Soto");
   cout<<"Kode Barang [A/B/C/D] : ";cin>>brng.kobar;
   if (brng.kobar=='A'||brng.kobar=='a')
    {strcpy (brng.nabar, "Nasi Goreng");
      brng.harga=8000;}
   else
   if (brng.kobar=='B'||brng.kobar=='b')
    {strcpy (brng.nabar, "Nasi Campur Spesial");
      brng.harga=10000;}
   else
   if (brng.kobar=='C'||brng.kobar=='c')
    {strcpy (brng.nabar, "Ramen");
      brng.harga=15000;}
   else
    {strcpy (brng.nabar, "Soto");
      brng.harga=5000;}

 puts("----------------------------------------------");
   cout<<"Nama Barang  : "<<brng.nabar<<endl;
   cout<<"Harga Barang : Rp. "<<brng.harga<<endl;
   cout<<"Jumlah Beli  : ";cin>>brng.jumli;
   brng.total=brng.harga*brng.jumli;
   cout<<"Total Bayar  : Rp. "<<brng.total<<endl;
   cout<<"Uang Bayar   : Rp. ";cin>>brng.bayar;
   brng.kembali=brng.bayar-brng.total;
   cout<<"Uang Kembali : Rp. "<<brng.kembali<<endl;
 puts("----------------------------------------------");
   cout<<"Mau input lagi [Y/T] : ";cin>>ulang;
   if (ulang=='Y'||ulang=='y')
    goto satu;
   else
    goto awal;

   dua:
   clrscr();
   puts("----------------------------------------------");
   puts("*                DAFTAR BARANG               *");
   puts("----------------------------------------------");
   puts("[A] Bata");
   puts("[B] Nevada");
   puts("[C] Homyped");
   puts("[D] Macbeth");
   cout<<"Kode Barang [A/B/C/D] : ";cin>>brng.kobar;
   if (brng.kobar=='A'||brng.kobar=='a')
    {strcpy (brng.nabar, "Bata");
      brng.harga=90000;}
   else
   if (brng.kobar=='B'||brng.kobar=='b')
    {strcpy (brng.nabar, "Nevada");
      brng.harga=100000;}
   else
   if (brng.kobar=='C'||brng.kobar=='c')
    {strcpy (brng.nabar, "Homyped");
      brng.harga=150000;}
   else
    {strcpy (brng.nabar, "Macbeth");
      brng.harga=800000;}

 puts("----------------------------------------------");
   cout<<"Nama Barang  : "<<brng.nabar<<endl;
   cout<<"Harga Barang : Rp. "<<brng.harga<<endl;
   cout<<"Jumlah Beli  : ";cin>>brng.jumli;
   brng.total=brng.harga*brng.jumli;
   cout<<"Total Bayar  : Rp. "<<brng.total<<endl;
   cout<<"Uang Bayar   : Rp. ";cin>>brng.bayar;
   brng.kembali=brng.bayar-brng.total;
   cout<<"Uang Kembali : Rp. "<<brng.kembali<<endl;
   puts("----------------------------------------------");
   cout<<"Transaksi lagi [Y/T] : ";cin>>ulang;
   if (ulang=='Y'||ulang=='y')
    goto dua;
   else
    goto awal;

   tiga:
   clrscr();
   puts("----------------------------------------------");
   puts("*               DAFTAR MINUMAN               *");
   puts("----------------------------------------------");
   puts("[A] Fanta");
   puts("[B] Es Jeruk");
   puts("[C] Teh");
   puts("[D] Pulpy Orange");
   cout<<"Kode Barang [A/B/C/D] : ";cin>>brng.kobar;
   if (brng.kobar=='A'||brng.kobar=='a')
    {strcpy (brng.nabar, "Fanta");
      brng.harga=4000;}
   else
   if (brng.kobar=='B'||brng.kobar=='b')
    {strcpy (brng.nabar, "Es Jeruk");
      brng.harga=6000;}
   else
   if (brng.kobar=='C'||brng.kobar=='c')
    {strcpy (brng.nabar, "Teh");
      brng.harga=3000;}
   else
    {strcpy (brng.nabar, "Pulpy Orange");
      brng.harga=8000;}

 puts("----------------------------------------------");
   cout<<"Nama Barang  : "<<brng.nabar<<endl;
   cout<<"Harga Barang : Rp. "<<brng.harga<<endl;
   cout<<"Jumlah Beli  : ";cin>>brng.jumli;
   brng.total=brng.harga*brng.jumli;
   cout<<"Total Bayar  : Rp. "<<brng.total<<endl;
   cout<<"Uang Bayar   : Rp. ";cin>>brng.bayar;
   brng.kembali=brng.bayar-brng.total;
   cout<<"Uang Kembali : Rp. "<<brng.kembali<<endl;
 puts("----------------------------------------------");
   cout<<"Mau input lagi [Y/T] : ";cin>>ulang;
   if (ulang=='Y'||ulang=='y')
    goto tiga;
   else
    goto awal;

   empat:
   cout<<endl;
   cout<<"***** TERIMA KASIH *****";
getch();
return 0;
}
