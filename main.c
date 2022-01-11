#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bulan [12];


    printf("\tKALENDER TAHUN 2021\n\n");


    bulan[0]  = "\t1.Januari";
    bulan[1]  = "\t2.Februari";
    bulan[2]  = "\t3.Maret";
    bulan[3]  = "\t4.April";
    bulan[4]  = "\t5.Mei";
    bulan[5]  = "\t6.Juni";
    bulan[6]  = "\t7.Juli";
    bulan[7]  = "\t8.Agustus";
    bulan[8]  = "\t9.September";
    bulan[9]  = "\t10.Oktober";
    bulan[10] = "\t11.November";
    bulan[11] = "\t12.Desember";

    for ( int i=0 ; i<12; i++ ){
        printf ("%s\n",bulan[i]);
    }
    int tanggal_kalender(){

    int A [][10] = {{1,2,3,4,5,6,7,8,9,10},{11,12,13,14,15,16,17,18,19,20},{21,22,23,24,25,26,27,28,29,30}};
    int B [][1] = {{31}};
    printf ("============================================\n");
    printf("\tTANGGAL DALAM SETIAP BULAN : \n");
    printf ("============================================\n\t");
    printf("---------%d %d %d %d %d %d %d %d %d %d \n\t", A[0][0], A[0][1], A[0][2], A[0][3], A[0][4], A[0][5], A[0][6], A[0][7], A[0][8], A[0][9]);
    printf("%d %d %d %d %d %d %d %d %d %d \n\t", A[1][0], A[1][1], A[1][2], A[1][3], A[1][4], A[1][5], A[1][6], A[1][7], A[1][8], A[1][9]);
    printf("%d %d %d %d %d %d %d %d %d %d \n\t", A[2][0], A[2][1], A[2][2], A[2][3], A[2][4], A[2][5], A[2][6], A[2][7], A[2][8], A[2][9]);
    printf("%d\n",B[0][0]);

    }

 while (1){
   int nama;

    printf ("\n\n");
    printf ("\t\t\tPilih Bulan : \n");
    printf (" Agar Anda Mengetahui Jumlah Hari dan Tanggal Merahnya\n");
    printf ("-------------------------------------------------------\n");


    printf (" pilih  : ");
    scanf("%d",&nama);
    switch  (nama){

   case 1:
    tanggal_kalender();

    printf ("Pada Bulan Januari Terdapat 31 Hari : \n");
    printf ("Hari Jumat Tanggal 1 Tahun Baru 2021 Masehi \n");
    break;

    case 2:
    tanggal_kalender();

    printf ("Pada bulan Februari Terdapat 28 Hari :\n");
    printf (" Hari Jumat Tanggal 12 Tahun Baru Imlek 2572 Kongzili \n");
    break;

    case 3:
    tanggal_kalender();

    printf ("Pada Bulan Maret Terdapat 31 Hari :\n");
    printf ("Hari Kamis Tanggal 11 Isra' Mi'raj Nabi Muhammad SAW\n");
    printf ("Hari Minggu Tanggal 14 Hari Suci Nyepi Tahun Baru Saka 1943\n");
    break;

    case 4:
    tanggal_kalender();

    printf ("Pada Bulan April Terdapat 30 Hari :\n");
    printf ("Hari Jumat Tanggal 2 Wafat Isa Al Masih\n");
    break;

    case 5:
    tanggal_kalender();

    printf ("Pada Bulan Mei Terdapat 31 Hari :\n");
    printf ("Hari Sabtu Tanggal 1 Hari Buruh Internasionl \n");
    printf ("Hari Rabu Tanggal 12 Cuti Bersama \n");
    printf ("Hari Kamis Tanggal 13 Kenaikan Isa Al Masih \n");
    printf ("Hari Jumat Tanggal 14 Hari Raya Idul Fitri 1442 Hijriah \n");
    printf ("Hari Rabu Tanggal 26 Hari Raya Waisak 2565 \n");
    break;

    case 6:
    tanggal_kalender();

    printf ("Pada Bulan Juni Terdapat 30 Hari :\n");
    printf ("Hari Selasa Tanggal 1 Hari Lahir Pancasila\n");
    break;

    case 7:
    tanggal_kalender();

    printf ("Pada Bulan Juli Terdapat 31 Hari :\n");
    printf ("Hari Selasa Tanggal 20 Hari Raya Idul Adha 1442 Hijriah\n");
    break;

    case 8:
    tanggal_kalender();

    printf ("Pada bulan Agustus Terdapat 31 Hari :\n");
    printf (" Hari Rabu  Tanggal 11 Tahun Baru Islam 1443 Hijriah\n");
    printf ("Hari Selasa Tanggal 17 Hari Kemerdekaan Republik Indonesia\n");
    break;

    case 9:
    tanggal_kalender();

    printf ("Pada Bulan September Terdapat 30 Hari\n");

    break;

    case 10:
    tanggal_kalender();

    printf ("Pada Bulan Oktober Terdapat 31 Hari :\n");
    printf ("Hari Rabu Tanggal 20 Maulid Nabi Muhammad SAW\n");
    break;

    case 11:
    tanggal_kalender();

    printf ("Pada Bulan November Terdapat 30 Hari \n");
   break;

    case 12:
    tanggal_kalender();

    printf ("Pada Bulan Desember Terdapat 31 Hari :\n");
    printf (" Hari Sabtu Tanggal 25 Hari Raya Natal\n");
    break;


          default:

             printf ("====Happy New Year====\n");


   }


   }


   return 0;
}




