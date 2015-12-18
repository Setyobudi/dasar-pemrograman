#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
main()
{
char *nm_mkn,*nm_mnm,kd_paket,pilihan2,nampel[15];
float jum_bel,harga,bayar,kembali,total,ppn,diskon;
awal:
clrscr();




cout<<"    RUMAH MAKAN AMPERA\n";
cout<<"     Jl. Raya Bandorasa Kuningan\n";
cout<<"--------------------------------------------------------------\n";
cout<<"|paket|    MENU MAKANAN     |    MENU MUNUMAN  |    HARGA    |\n";
cout<<"--------------------------------------------------------------\n";
cout<<"| A   |   Nasi rames        |  jus alpukat     | RP. 20.000  |\n";
cout<<"| B   |   Nasi campur       |  jus jeruk       | Rp. 17.500  |\n";
cout<<"| C   |   Nasi goreng       |  Jus strawberry  | RP. 18.000  |\n";
cout<<"| D   |   Nasi Lengko       |  es teh manis    | Rp. 20.000  |\n";
cout<<"| E   |   Nasi Tutug oncom  |  jus mangga      | RP. 30.000  |\n";
cout<<"--------------------------------------------------------------\n\n\n";


cout <<"=======================================\n";
cout <<"|       RUMAH MAKAN AMPERA       |\n";
cout <<"|   Jl. Raya Bandorasa Kuningan       |\n";
cout <<"=======================================\n\n\n";
cout <<" Nama pelanggan  : ";cin>>nampel;
cout <<" Nama Paket [A/B/C/D/E] : ";cin >> kd_paket;
cout <<" Jumlah Beli   : ";cin >> jum_bel;
cout <<"=====================================\n";
if (kd_paket=='A' || kd_paket=='a')
{nm_mkn="nasi goreng";
nm_mnm="teh botol";
harga=12000;
}
else
if (kd_paket=='B' || kd_paket=='b')
{nm_mkn="nasi soto";
nm_mnm="teh manis";
harga=10000;
}
else
if (kd_paket=='C' || kd_paket=='c')
{nm_mkn="nasi kari ayam";
nm_mnm="jus alpukat";
harga=18000;
}
else
if (kd_paket=='D' || kd_paket=='D')
{nm_mkn="nasi lengko";
nm_mnm="Es teh manis";
harga=20000;
}
else
if (kd_paket=='E' || kd_paket=='E')
{nm_mkn="nasi tutug oncom";
nm_mnm="jus mangga";
harga=30000;
}
clrscr();
cout<<"======================================== \n";
cout <<"|      RUMAH MAKAN AMPERA        |\n";
cout <<"|   Jl. Raya Bandorasa Kuningan        |\n";
cout <<"======================================== \n";
cout <<"| Nama Makanan : "<<nm_mkn<<"        |\n";
cout <<"| Nama Minuman : "<<nm_mnm<<"        |\n";
cout <<"| Harga        :Rp "<<harga<<"        |\n";
cout <<"________________________________________\n";
total=jum_bel*harga;
ppn=10*0.01*total;
diskon=0.05*harga*jum_bel;
cout<<"| Total harga  :Rp "<<total<<"        |\n";
cout<<"| Bayar        :Rp ";cin>>bayar;"|\n";
cout<<"| PPN        :Rp "<<ppn<<"         |\n";
cout<<"| diskon       :Rp "<<diskon<<"         |\n";
cout<<"________________________________________\n";
kembali=bayar-total-ppn+diskon;
cout <<" Kembali       :Rp "<<kembali<<"\n";
cout <<"________________________________________\n";
cout <<"TERIMA KASIH ATAS KUNJUNGANNYA"<<setw(5)<<nampel<<"\n";


{
  cout<<"\nApakah anda ingin menghitung ulang?[Y/N]:";cin>>pilihan2;
  switch(pilihan2){
   case 'Y':
    goto awal;
    break;
    case'N':
     clrscr();
     cout<<". . . . . . . . . . ";
     getche();
     break;
    default:
     cout<<"salah";
     getche();
     }
     return 0;
     }




}
getch();
