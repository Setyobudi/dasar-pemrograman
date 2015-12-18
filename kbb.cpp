#include <iostream.h>
#include <conio.h>


void main()
{
    int menu,totalHarga,diskon,jmlhHarga;
   int UngPembyaran,Kembalian,hasil;
   char jawab;
   do
       {
      clrscr();
   cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                               PT ZEIN SENTOSA                              "<<endl;
    cout<<"                 Jalan A.H Nasution no.111 Cipadung, Bandung                "<<endl;
    cout<<"                          pt-zein-sentosa@yahoo.co.id                       "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl<<endl;


   cout<<" . MENU TRANSAKSI BARANG . \n\n";
   cout<<"   1.Member \n";
   cout<<"   2.Bukan Member \n\n";
    cout<<"Silahkan Pilih Menu 1-2 ! :";cin>>menu;
   cout<<"________________________________________\n";
   cout<<"\n\n";


   if (menu==1)
       {
          cout<<"Selamt Anda Mendapatkan Tambahan diskon 5%\n";
          cout<<"Masukan Total Harga :Rp. ";cin>>totalHarga;
         if (totalHarga >100000 && totalHarga<=200000)
             {
                jmlhHarga =totalHarga-totalHarga*15/100;
                cout<<"Anda Mendapatkan Total diskon 15% dari tambahan diskon 5%\n";
               cout<<"__________________________________\n";
               cout<<"\n";
               cout<<"Jumlah Pembayaran     : Rp."<<jmlhHarga;
            }
          else if (totalHarga >200000 && totalHarga<=300000)
             {
                jmlhHarga =totalHarga-totalHarga*20/100;
                cout<<"Anda Mendapatkan Total diskon 15% dari tambahan diskon 5%\n";
               cout<<"__________________________________\n";
               cout<<"\n";
               cout<<"Jumlah Pembayaran     : Rp."<<jmlhHarga;
            }
           else if (totalHarga > 300000)
             {
                jmlhHarga =totalHarga-totalHarga*25/100;
                cout<<"Anda Mendapatkan Total diskon 15% dari tambahan diskon 5%\n";
               cout<<"__________________________________\n";
               cout<<"\n";
               cout<<"Jumlah Pembayaran     : Rp."<<jmlhHarga;
            }
           else if(totalHarga<=100000)
                   {
                   cout<<"\n";
                   cout<<"______________________________________________________"<<endl;
                   cout<<"| Maaf Anda tidak mendapatkan Diskon                 |\n";
                   cout<<"| Dikarnakan Total Belanja Tidak Lebih dari Rp.100000|\n";
                   cout<<"______________________________________________________\n"<<endl;
                   cout<<"Totalh Harga          : Rp."<<totalHarga;
                   jmlhHarga=totalHarga;

                  }
         }

       else if(menu==2)
          {
             cout<<"Masukan Total Harga   : Rp.";cin>>totalHarga;
                  if (totalHarga >100000 && totalHarga<=200000)
                     {
                        jmlhHarga =totalHarga-totalHarga*10/100;
                       cout<<"Anda Mendapatkan diskon 10%\n";
                       cout<<"__________________________________\n";
                       cout<<"\n";
                       cout<<"Jumlah Pembayaran     : Rp."<<jmlhHarga;
                    }
               else if (totalHarga >200000 && totalHarga<=300000)
                     {
                        jmlhHarga =totalHarga-totalHarga*15/100;
                     cout<<"Anda Mendapatkan diskon 15%\n";
                       cout<<"__________________________________\n";
                       cout<<"\n";
                       cout<<"Jumlah Pembayaran     : Rp."<<jmlhHarga;
                    }
                   else if (totalHarga > 300000)
                     {
                        jmlhHarga =totalHarga-totalHarga*20/100;
                       cout<<"Anda Mendapatkan diskon 20%\n";
                       cout<<"__________________________________\n";
                       cout<<"\n";
                       cout<<"Jumlah Pembayaran     : Rp."<<jmlhHarga;
                    }
               else if(totalHarga<=100000)
                   {
                   jmlhHarga=totalHarga;

                  }
           }
           else if(menu!=1 && menu!=2)
                   {
                   cout<<"Maaf Harusnya memilih angka 1&2";
               }

         cout<<"\n";

            cout<<"Uang Pembayaran       : Rp.";cin>>UngPembyaran;
         Kembalian=UngPembyaran-jmlhHarga;
         cout<<"__________________________________ -\n";
         cout<<"Uang Kembalian        : Rp."<<Kembalian;
         cout<<"\n\n";

         if (UngPembyaran<jmlhHarga)
             {
                hasil=(Kembalian)*-1;
                cout<<"Pembayaran Anda Kurang: Rp."<<hasil;
            }

         cout<<"\n\n";
         cout<<"Apakah akan memlih menu transaksi lagi? (Y/T)";cin>>jawab;
      }
         while(jawab=='y' || jawab=='Y');
          clrscr();

         cout<<" . Terimakasih Atas Kunujungannya! . \n\n"<<endl;
         cout<<"                                                by:kahfi zain";

      getch();
}

//------------------------------------------------------------------------------------
