#include<iostream>          
using namespace std;                //untuk menampilkan cin dan cout

string nama ;//KUMPULAN DARI KARAKTER
      int jumlah,harga,kode,hasil;//BILANGAN BULAT
      double diskon,sbldiskon,hargatotal;//BILANGAN BULAT

  void rp ()                                  //fungsi pendukung dan merupakan pemecahan dari fungsi utama
  {
       hasil=harga*jumlah;
  }
  void bayar ()                              //fungsi pendukung dan merupakan pemecahan dari fungsi utama
  {
      hargatotal=sbldiskon-diskon;
      cout<<"Harga Total          : Rp."<<hargatotal<<endl;
  }
  void diskonan ()                           //fungsi pendukung dan merupakan pemecahan dari fungsi utama
       { 
                 
                   if ((hasil>25000))//jika sebelum diskon lebih dari 25000  
                                         {
                                         diskon=hasil*10/100; //diskon 10 persen   
                                         cout<<"Diskon                       : Rp. "<<diskon<<endl;       
                                         }                 
                   else //selain itu
                                         {
                                         diskon=0; //diskonnya 0 
                                         cout<<"Anda tidak mendapat diskon   : Rp. "<<endl;                 
                                         }
             
      }
      int main()                         //titik awal dimana program akan mulai di eksekusi
      {
      cout<<"==========================================="<<endl;
      cout<<"=================DISKON===================="<<endl;
      cout<<endl;
      cout<<endl;
      
      cout<<"Nama Barang          : ";
      cin>>nama;
      cout<<"harga                : Rp ";
      cin>>harga;
      cout<<"Jumlah               : ";
      cin>>jumlah;
      sbldiskon=jumlah*harga;//sebelum diskon = jumlah * harga
      cout<<"Total Sebelum Diskon : Rp."<<sbldiskon<<endl;
      rp ();               //memanggil fungsi
      bayar();             //memanggil fungsi
      diskonan();          //memanggil fungsi
      
      
      system ("pause");
      return 0;
}
