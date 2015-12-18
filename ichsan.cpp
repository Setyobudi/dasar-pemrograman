#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{


int byk1,byk2,byk3,jml1,jml2,jml3,total,disc;
int ARDILES=80000,ATT=70000,SWALLOW=10000;

cout <<"(<<<<<<<<<<<<<<@@@@@@@>>>>>>>>>>>>>>>>)"<< endl;
cout <<" TOKO SEPATU SANDAL ICHSAN"<< endl;
cout <<"(<<<<<<<<<<<<<<@@@@@@@>>>>>>>>>>>>>>>>)"<< endl;
cout <<"1. ARDILES = Rp 80.000,-"<< endl;
cout <<"2. ATT = Rp 70.000,-"<< endl;
cout <<"3. SWALLOW = Rp 10.000,-"<< endl;
cout <<"(<<<<<<<<<<<<<<@@@@@@@>>>>>>>>>>>>>>>>)"<< endl << endl;

cout <<"Beli ARDILES : "<<endl;
cout <<"Banyak barang : "; cin >> byk1;
jml1 = byk1 * ARDILES;
cout <<"Jumlah 1 : Rp. "<< jml1 << endl << endl;

cout <<"Beli ATT : "<<endl;
cout <<"Banyak barang : "; cin >> byk2;
jml2 = byk2 * ATT;
cout <<"Jumlah 2 : Rp. "<< jml2 << endl << endl;

cout <<"Beli SWALLOW : "<<endl;
cout <<"Banyak barang : "; cin >> byk3;
jml3 = byk3 * SWALLOW;
cout <<"Jumlah 3 : Rp. "<< jml3 << endl << endl;

cout <<"======================================"<< endl;
total = jml1+jml2+jml3;
cout <<"Total Pembelian = Rp. "<< total << endl;

if (total > 100000)
disc = 0.1*total;
else
disc = 0;

cout <<"Discount = Rp. "<< disc << endl;
cout <<"Total Bayar = Rp. "<< total-disc << endl << endl;
cout <<"==================****================="<< endl;
cout <<" Terima kasih atas kunjungan Anda ! "<< endl;
cout <<"==================****================="<< endl;

getch();

}
