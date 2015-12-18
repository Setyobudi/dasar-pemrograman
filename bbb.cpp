#include<conio.h>
#include<iostream.h>

int main() {

int total_beli;
int potongan=0;
int jumlah_bayar=0;

printf("Total Pembelian : Rp. ");
scanf("%d",&total_beli);


if (total_beli>=50000)
potongan=0.2*total_beli;


printf("Besarnya Potongan : Rp. %d\n", potongan);

jumlah_bayar = total_beli - potongan;
printf("Jumlah yang harus dibayar : Rp. %d\n",jumlah_bayar);

printf("Terima Kasih Atas Kunjungan Anda....., \n");
getch();
}
