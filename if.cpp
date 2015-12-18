#include<iostream>
using namespace std;

int main()
{
    {
    int NilaiI;
    int NilaiII;
    cout<<"masukkan NilaiI : "; 
    cin>>NilaiI; 
    cout<<"masukkan NilaiII : "; 
    cin>>NilaiII;
    if ((NilaiI<=50) && (NilaiII<=40))
 {
  if ((NilaiI>=20) && (NilaiII>=30))
  {
   cout<<"Harus belajar dengan giat";
  }
  else
  {
   cout<<"ditingkatkan semangat untuk belajarnya";
  }
 }
 else if ((NilaiI>=60) || (NilaiII>=70))
 {
  if ((NilaiI<=90) || (NilaiII<=90))
  {
   cout<<"Belajar Harus ditingkatkan";
  }
  else
  {
   cout<<"tetap harus belajar";
  }
 }
 else
 {
  cout<<"Masih harus belajar";
 }
  } 
    system("pause");
    return 0;
}






















/*
  Nama : M. Hakim Setyobudi
  Sandi : tetap seperti Tugas Individu 1
  Ditambahkan pada : 20/03/13 15:49
  Deskripsi : Tugas Individu 2 
*/
// kode Editor : 1111 01 010 11 00 
