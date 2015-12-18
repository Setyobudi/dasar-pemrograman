#include <stdio.h> //Mengakses file library stdio.h
#include <stdlib.h> //Mengakses file library stdlib.h

int main (void) //Fungsi yang harus ada pada setiap program c
{
int k; //Deklarasi variabel k bertipe integer
char warna[4] [7] = {{‘m’,'e’,'r’,'a’,'h’,},{‘k’,'u’,'n’,'i’,'n’,'g’},{‘h’,'i’,'j’,'a’,'u’},{‘b’,'i’,'r’,'u’}};
//Deklarasi variabel warna dengan baris [4] yaitu (0 s/d 4), dan panjang nilai karakter dalam suatu baris [7] yaitu (0 s/d 6) diisi dengan susunan data yg ditentukan bertipe karakter

for (k=0;k<4;++k) //Untuk k=0 nilai k dimulai dari 0, dan k<4 adalah nilai k lebih kecil dari 4 dibaca (0 s/d 3),++k adalah bernilai increment
printf(“%s\n”,warna[k]); //Mencetak output warna
system(“pause”); //Salah satu Fungsi yang ada pada library stdlib.h
return (0); //nilai balikan fungsi main adalah 0
}
