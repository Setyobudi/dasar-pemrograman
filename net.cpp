#include <stdio.h>
#include <conio.h>
#include <iostream.h>
void main()
{
struct date
{
    int tgl;
    int bulan;
    int tahun;
};
struct person
{
    char nama[30];
    struct date lahir;
 };
    struct person siswa[2];
    int i;
    clrscr();
    printf("MASUKKAN DATA SISWA\n\n");
    for(i=0;i<2;i++)
    {
        printf("Masukkan Nama        : ");
        fgets(siswa[i].nama, sizeof siswa[i].nama, stdin);
        fflush (stdin);
        printf("Masukkan Tangal lahir \t: ");
        scanf("%d",&siswa[i].lahir.tgl);
        printf("Masukkan Bulan lahir \t: ");
        scanf("%d",&siswa[i].lahir.bulan);
        printf("Masukkan Tahun lahir    : ");
        scanf("%d",&siswa[i].lahir.tahun);
        fflush(stdin);
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        printf("Data ke-%d \n  ",i+1);
        printf("\tNama Siswa \t:  %s",siswa[i].nama);
        printf("\tTanggal lahir \t: %d-%d-%d ",siswa[i].lahir.tgl,siswa[i].lahir.bulan,siswa[i].lahir.tahun);
        printf("\n\n");
    }
    getch();
}
