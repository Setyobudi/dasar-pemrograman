#include<iostream>
using namespace std;
struct mahasiswa {
       string nim;
       string nama;
       int umur;
       };
int main ()
{
    mahasiswa data_mhs;
    cin>>data_mhs.nim;
    cin>>data_mhs.nama;
    cin>>data_mhs.umur;
    
    cout<<data_mhs.nim<<endl;
    cout<<data_mhs.nama<<endl;
    cout<<data_mhs.umur<<endl;
    system("pause");
    return 0;
    
}
