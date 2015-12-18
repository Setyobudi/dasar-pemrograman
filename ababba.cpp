#include "iostream.h"
#include "stdio.h"
#include "conio.h"
#include "String.h"
struct penjualan{
int kode, jumlah;
}
rpenjualan[10];

void main(){
 long harga;
char nama[30];
long total;
int i=0; int j;
char lg='Y';
do {
gotoxy (20,5);cout<<"Input Kode Dan Jumlah";
gotoxy (20,6);cout<<"-------------------------";
gotoxy (20,7);cout<<"Kode            : ";cin>>rpenjualan[i].kode;
gotoxy (20,8);cout<<"Jumlah        : ";cin>>rpenjualan[i].jumlah;
gotoxy (20,9);cout<<"Input lagi[Y/N]    : ";cin>>lg;clrscr();i++;
} while(lg=='Y'||lg=='y');
clrscr();
gotoxy(10,3);cout<<"Informasi Penjualan";
gotoxy(10,4);cout<<"-------------------------------------------------------------";
gotoxy(10,5);cout<<"No  Kode  Nama Barang  Harga   Jumlah     Total Harga";
gotoxy(10,6);cout<<"-------------------------------------------------------------";
for(j=0;j<i;j++)
{
if(rpenjualan[j].kode==1)
{
strcpy(nama,"Televisi");
harga=1000000;
}
else if(rpenjualan[j].kode==2)
{
strcpy(nama,"CDROM");
harga=400000;
}
else if(rpenjualan[j].kode==3)
{
strcpy(nama,"DVD");
harga=650000;
}
else
{strcpy(nama," ");
harga=0;}
total=harga*rpenjualan[j].jumlah;
gotoxy(10,7+j);cout<<j+1<<"    "<<rpenjualan[j].kode;
gotoxy(17,7+j);cout<<"  "<<nama;
gotoxy(27,7+j);cout<<"    "<<harga;
gotoxy(37,7+j);cout<<"     "<<rpenjualan[j].jumlah;
gotoxy(45,7+j);cout<<"\t "<<total;
}
gotoxy(10,8+j);cout<<"-------------------------------------------------------------";
}
