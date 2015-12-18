#include <stdio.h>
#include <conio.h>

int main ()
{
    int jenis_kain;
    int kualitas;
    int total_harga;
    int diskon;
    int total_barang;
    int harga;
    int harga_asli;
    char atas;


   // atas:system("CLS");

    printf ("\t\t   +---------------------------------------+\n");
    printf ("\t\t   |            TOKO BAHAN KAIN            |\n");
    printf ("\t\t   +=======================================+\n");
    printf ("\t\t   |      Jenis kain: 1=katun, 2=sutra     |\n");
    printf ("\t\t   |  Kualitas: 1=bagus, 2=sedang, 3=biasa |\n");
    printf ("\t\t   +---------------------------------------+\n\n");

    printf ("\tPilih jenis kain\t:\t");
    scanf ("%d", &jenis_kain);
    printf ("\tPilih kualitas kain\t:\t");
    scanf ("%d", &kualitas);
    printf ("\tMasukkan total barang\t:\t");
    scanf ("%d", &total_barang);
    printf ("\n");

    switch(jenis_kain)
    {
        case 1:
            switch (kualitas)
            {
                case 1: harga=800000;
                break;
                case 2: harga=700000;
                break;
                case 3: harga=600000;
                break;
                default:
                printf("\tanda salah memasukkan pilihan, hitung ulang ? (y/n)");
                scanf("%s", &atas);
                if(atas=='y' || atas=='Y')
                    goto atas;
                else
                    printf ("\t\t\t------+Terima Kasih+------\n\n");
                break;
            }
        break;

        case 2:
            switch (kualitas)
            {
                case 1: harga=1000000;
                break;
                case 2: harga=900000;
                break;
                case 3: harga=800000;
                break;
                default:
                printf("\tanda salah memasukkan pilihan, hitung ulang ? (y/n)");
                scanf("%s", &atas);
                if(atas=='y' || atas=='Y')
                    goto atas;
                else
                    printf ("\t\t\t------+Terima Kasih+------\n\n");
                break;
            }
        break;
        default:
        printf("\tanda salah memasukkan pilihan, hitung ulang ? (y/n)");
        scanf("%s", &atas);
                if(atas=='y' || atas=='Y')
                    goto atas;
                else
                    printf ("\t\t\t------+Terima Kasih+------\n\n");
        break;
    }
    harga_asli=total_barang*harga;
    if (total_barang>20)
    diskon=harga_asli*0.20;
    else
    diskon=0;
    total_harga=harga_asli-diskon;

    printf ("\t\t  +----------------------------------------+\n");
    printf ("\t\t\t\tStroke Belanja\n");
    printf ("\t\t  +========================================+\n");
    printf ("\t\t\t Harga Per satuan: Rp.%d,- \n", harga);
    printf ("\t\t\t Total Barang\t : %d \n", total_barang);
    printf ("\t\t\t Total\t\t : Rp.%d,- \n", harga_asli);
    printf ("\t\t\t Diskon\t\t : Rp.%d,- \n", diskon);
    printf ("\t\t\t Total harga\t : Rp.%d,- \n", total_harga);
    printf ("\n");
    printf ("\t\t   -+Terima Kasih. Silakan Berbelanja lagi+-\n\n");
    printf ("\t\t  +----------------------------------------+\n\n");

    printf("\t\t\t\tHitung lagi?(Y/N)");
    scanf ("%s", &atas);
    printf("\n\n");
    if (atas=='y' || atas=='Y')
    goto atas;
    else
    printf ("\t\t\t------+Terima Kasih+------\n\n");
}
