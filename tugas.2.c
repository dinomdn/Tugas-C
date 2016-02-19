#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int menu, nasi=2000, ayam_bakar=7000,tahu=1000,tempe=1000,lalap=2500,air_mineral=1000,sayur_asem=2000,gepuk=5000,air_hangat=1000,jumlah_pesanan,total,pajak,total_akhir;

    printf("-_-_-_-_-_-_-_- Selamat Datang Di Dino's Resto _-_-_-_-_-_-_-\n\n");

    printf("Dino Ramadhan\n");
    printf("14.111.2249\n");
    printf("Paket Makanan\n");
    printf("===============\n");
    printf("Paket 1 \n");
    printf("Paket 2 \n");
    printf("Paket 3 \n");
    printf("Silahkan Pilih Paket Anda :");
    scanf("%d",&menu);
    printf("\nbanyak Pesanan :");
    scanf("%d", &jumlah_pesanan);
    printf("\n");
    switch (menu)
    {
    case 1 :
        printf("paket 1 \n");
        printf("Nasi :%d",nasi);
        printf("\nAyam Bakar:%d",ayam_bakar);
        printf("\nTahu:%d",tahu);
        printf("\nTempe:%d",tempe);
        printf("\nLalapan:%d",lalap);
        printf("\nAir Mineral:%d",air_mineral);
        printf("\nJumlah Pesanan:%d Paket",jumlah_pesanan);
        total= (nasi+ayam_bakar+tahu+tempe+lalap+air_mineral)*jumlah_pesanan;
        pajak=(total)*10/100;
        total_akhir= total+pajak;
        printf("\n");
        printf("\ntotal paket 1*%d :%d",jumlah_Pesanan,total);
        printf("\n pajak 10 persen :%d",pajak);
        printf("\njadi, total yang harus anda bayar :%d",total_akhir);
        printf("\n");
        break;
    case 2 :
        printf("paket 2 \n");
        printf("Nasi :%d",nasi);
        printf("\nAyam Bakar:%d",ayam_bakar);
        printf("\nSayur Asem:%d",sayur_asem);
        printf("\nTahu:%d",tahu);
        printf("\nTempe:%d",tempe);
        printf("\nLalapan:%d",lalap);
        printf("\nAir Mineral:%d",air_mineral);
        printf("\nJumlah Pesanan:%d Paket",jumlah_pesanan);
        total= (nasi+ayam_bakar+sayur_asem+tahu+tempe+lalap+air_mineral)*jumlah_pesanan;
        pajak=(total)*10/100;
        total_akhir= total+pajak;
        printf("\n");
        printf("\ntotal paket 1*%d :%d",jumlah_Pesanan,total);
        printf("\n pajak 10 persen :%d",pajak);
        printf("\njadi, total yang harus anda bayar :%d",total_akhir);
        printf("\n");
        break;
    case 3 :
        printf("paket 3 \n");
        printf("Nasi :%d",nasi);
        printf("\nGepuk:%d",gepuk);
        printf("\nTahu:%d",tahu);
        printf("\nTempe:%d",tempe);
        printf("\nLalapan:%d",lalap);
        printf("\nAir Mineral:%d",air_mineral);
        printf("\nJumlah Pesanan:%d Paket",jumlah_pesanan);
        total= (nasi+gepuk+tahu+tempe+lalap+air_mineral)*jumlah_pesanan;
        pajak=(total)*10/100;
        total_akhir= total+pajak;
        printf("\n");
        printf("\ntotal paket 1*%d :%d",jumlah_Pesanan,total);
        printf("\n pajak 10 persen :%d",pajak);
        printf("\njadi, total yang harus anda bayar :%d",total_akhir);
        printf("\n");
        break;
    default:
        printf("Maaf , Silahkan Pilih paket Anda Yang ada Di Dalam Menu !!! , Coba Lagi");
    }
    getch () ;
    return 0 ;

}
