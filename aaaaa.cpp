#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
    char kj,ku,*uk,*jns;
    float hrg,jml,tot,ukemb,ubyr;
    {
        ulang:
        system("cls");
        cout<<"\n" << endl ;
        cout<<" ---------------------------KOPRASI HIMPALA ESA UNGGUL-------------------------\n"<<endl;
        cout<<" Jl.TERUSAN ARJUNA,TOL TOMANG,KEBON JERUK KM 21,JAKARTA BARAT"<<endl;
        cout<<" TELP.085770008984 KODE POS 11510"<<endl;
        cout<<"--------------------------------------------------------------------------------\n"<<endl;
        cout<<"=================================[PILIHAN PRODUK]===============================\n"<<endl;
        cout<<"A.SUSU DANCOW"<<endl;
        cout<<"    1.UKURAN KECIL"<<endl;
        cout<<"    2.UKURAN SEDANG"<<endl;
        cout<<"    3.UKURAN BESAR \n"<<endl;
        cout<<"B.SUSU BENDERA"<<endl;
        cout<<"    1.UKURAN KECIL"<<endl;
        cout<<"    2.UKURAN SEDANG"<<endl;
        cout<<"    3.UKURAN BESAR \n"<<endl;
        cout<<"C.SUSU SGM"<<endl;
        cout<<"    1.UKURAN KECIL"<<endl;
        cout<<"    2.UKURAN SEDANG"<<endl;
        cout<<"    3.UKURAN BESAR \n"<<endl;
        cout<<"D.GELAS"<<endl;
        cout<<"    1.UKURAN KECIL"<<endl;
        cout<<"    2.UKURAN SEDANG"<<endl;
        cout<<"    3.UKURAN BESAR \n"<<endl;
        cout<<"0.PROGRAM KELUAR"<<endl;
        cout<<"------------------------------>\n"<<endl;
        cout<<"MASUKAN KODE JENIS[A..D]   :";cin>>kj;
        cout<<"MASUKAN KODE UKURAN[1..3]  :";cin>>ku;
        switch (kj)
        {
        case'A':
        case'a':
            jns="DANCOW";
            if (ku=='1')
            {
                uk="KECIL";
                hrg=10000;
            }
            else if(ku=='2')
            {
                uk="SEDANG";
                hrg=20000;
            }
            else
            {
                uk="BESAR";
                hrg=30000;
            }
            break;
        case'B':
        case'b':
            jns="BENDERA";
            if (ku=='1')
            {
                 uk="KECIL";
                 hrg=25000;
            }
            else if(ku=='2')
            {
                 uk="SEDANG";
                 hrg=30000;
            }
            else
            {
                 uk="BESAR";
                 hrg=35000;
            }
            break;
        case'C':
        case'c':
            jns="SGM";
            if (ku=='1')
            {
                uk="KECIL";
                hrg=15000;
            }
            else if(ku=='2')
            {
                uk="SEDANG";
                hrg=20000;
            }
            else
            {
                uk="BESAR";
                hrg=25000;
            }
            break;
        case'D':
        case'd':
             jns="GELAS";
             if (ku=='1')
             {
                uk="KECIL";
                hrg=20000;
             }
             else if(ku=='2')
             {
                  uk="SEDANG";
                  hrg=30000;
             }
             else
             {
                 uk="BESAR";
                 hrg=40000;
             }
             break;
        }
        cout<<"JENIS PRODUK        ="<<jns<<endl;
        cout<<"UKURAN KEMASAN      ="<<uk<<endl;
        cout<<"HARGA               =Rp."<<hrg<<endl;
        cout<<"MASUKAN JUMLAH BELI =";cin>>jml;
        tot=hrg*jml;
        cout<<"TOTAL BAYAR         =Rp."<<tot<<endl;
        cout<<"UANG BAYAR          =Rp.";cin>>ubyr;
        ukemb=ubyr-tot;
        cout<<"UANG KEMBALI        =Rp."<<ukemb<<endl;
        cout<<"\n" << endl;
        cout<<"--------------------TERIMA KASIH--------------------"<<endl;
        cout<<"\n" << endl;
        char lagi;
        menulagi :
        cout<<"APAKAH INGIN MASUK KE MENU LAGI (y/t) ?";cin>>lagi;
        if(lagi=='y' || lagi=='Y'){goto ulang;} else
        if(lagi=='t' || lagi=='T'){goto selesai;} else
        {cout<<"\inputkan y/t!!!\n";goto menulagi;}
        selesai :
        cout<<"program selesai";
    }

}
