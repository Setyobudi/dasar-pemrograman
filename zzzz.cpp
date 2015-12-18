#include<iostream.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
main()
{
int no=0,a,jum_brang[100],harga_total[100],harga[100],tbayar=0;
char jns_item[100][100],merk[100][100],total,date[100],pilihan;
double disc[100];

{_strdate(date); cout<<”Tanggal       : “<<date<< endl;}
cout<<”————————————————–”<<endl;
cout<<”|            PROGRAM KASIR DISTRO                |”<<endl;
cout<<”————————————————–”<<endl;
a=0;
do{
system(“color 70?);
no++;
cout<<”no            : “<<no<<endl;
cout<<”jenis item    : “;cin>>jns_item[a];
cout<<”merk          : “;cin>>merk[a];
cout<<”harga         : “;cin>>harga[a];
cout<<”jumlah barang : “;cin>>jum_brang[a];
harga_total[a]=harga[a]*jum_brang[a];
if(harga_total[a]>=200000)
{
disc[a]=harga_total[a]-(0.1*harga_total[a]);
}
cout<<”apakah anda akan mengulang lagi [Y/N] : “;cin>>pilihan;
a++;
}while(pilihan==’Y'||pilihan==’y');
cout<<”—————————————————————————————————————”<<endl;
cout<<”| NO  |       JENIS        |        MERK        |        HARGA       |       JUMLAH       |    HARGA BARANG   |”<<endl;
cout<<”—————————————————————————————————————”<<endl;
for(int b=0;b<a;b++){
if(disc[b]>0)
disc[b];
else
disc[b]=harga[b];

cout<<”| “<<b+1<<” |       “<<jns_item[b]<<”        |        “<<merk[b]<<”        |       “<<harga[b]<<”        |       “<<jum_brang[b]<<”       |    “<<disc[b]<<”    |”<<endl;
tbayar=tbayar+disc[b];
}
cout<<”—————————————————————————————————————”<<endl;
cout<<”|discon berlaku jika total harga di atas 200000                                          |       10%          |”<<endl;
cout<<”—————————————————————————————————————”<<endl;
cout<<”|TOTAL HARGA                                                                             |  “<<tbayar<<”      |”<<endl;
cout<<”—————————————————————————————————————”<<endl;
getch();
}
