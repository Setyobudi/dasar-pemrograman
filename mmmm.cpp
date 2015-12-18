#include<iostream>
using namespace std;
int byk[3],jml[3],total,disc,bayar;
int mouse=50000,dvd=3000,fd=45000;

void tot()
{
     bayar=total-disc;
    cout <<"Total Bayar = Rp. "<<bayar<<endl; 
     }
void sembarang()
{
       if (total > 200000)
      {
          disc = 0.1*total;
          cout <<"Discount = Rp. "<< disc << endl;
          }
      else
      {
      disc = 0;
      cout<<"Maaf, anda kurang beruntung.. "<<endl;
      }
}
void njajal()
{
     cout <<"==============================================="<< endl;              
total = jml[1]+jml[2]+jml[3];
cout <<"Total Pembelian = Rp. "<< total << endl;
     }
int main()
{


cout <<"==============================================="<< endl;
cout <<" TOKO KOMPUTER Setyobudi"<< endl;
cout <<"Dapatkan diskon untuk pembelian diatas 200 ribu"<<endl;
cout <<"==============================================="<< endl;
cout <<"1. Mouse = Rp 50.000,-"<< endl;
cout <<"2. DVD = Rp 3.000,-"<< endl;
cout <<"3. Flashdisk(4GB) = Rp 45.000,-"<< endl;
cout <<"==============================================="<< endl << endl;

cout <<"Pembelian Mouse  "<<endl;
cout <<"Banyak barang : "; cin >> byk[1];
jml[1] = byk[1] * mouse;
cout <<"Jumlah 1 : Rp. "<< jml[1] << endl << endl;

cout <<"Pembelian DVD  "<<endl;
cout <<"Banyak barang : "; cin >> byk[2];
jml[2] = byk[2] * dvd;
cout <<"Jumlah 2 : Rp. "<< jml[2] << endl << endl;

cout <<"Pembelian Flashdisk  "<<endl;
cout <<"Banyak barang : "; cin >> byk[3];
jml[3] = byk[3] * fd;
cout <<"Jumlah 3 : Rp. "<< jml[3] << endl << endl;

njajal();
sembarang();
tot();

cout <<"==============================================="<< endl;
cout <<" Terima kasih atas kunjungan Anda  "<< endl;
cout <<"==============================================="<< endl;

system("pause");
return 0;

}

