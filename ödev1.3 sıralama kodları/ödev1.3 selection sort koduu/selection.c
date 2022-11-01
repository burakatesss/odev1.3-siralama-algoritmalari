
     /*
	 Burak ATEŞ ( Öğr. No.211451001) Algorithm and Programming Homework 1.3.a
 	selection sort kodu.
	 */ 


#include <stdio.h>				  // standart kütüphane
#include<time.h>                  // time  için kütüphane
#include<stdlib.h>                // rand() komutu için kütüphane
int main()
{
    srand(time(NULL));                      				 // rastgele sayı üretmek için kullanılan komut
   int dizi[10000], n = 100000, c, d, sayikonumu, tutulan;	 /* dizi isminde 10.000 elemanlı bir dizi oluşturuldu. 0-10.000 arasında sayı üretimi için.
															n=sıralanacak sayı adeti. c ve d sayaç işlemi için.	*/
															/* sayikonumu: sıralama yapılırken dizide sayı atılan yer. 
															tutulan: sıralı dizi oluşturulurken elemanların geçici atıldığı yer.*/
   for ( c = 0 ; c < n ; c++ )							// 0 ile 10.000 arasında rastgele bir sayı üretmek için döngü
      dizi[c]=rand()%10000;         					// 10.000'e kadar sayı üretilir ve dizide tutulur.        


   for ( c = 0 ; c < ( n - 1 ) ; c++ )				 // sıralama işleminin başladığı döngü.
   {
      sayikonumu = c;								// sayikonumu isimli adresler oluşturulur.

      for ( d = c + 1 ; d < n ; d++ )				// sayıların karşılaştırıldığı döngü
      {
         if ( dizi[sayikonumu] > dizi[d] )			// sayikonumu adresi ile dizinin her elemanı kıyaslanır.
            sayikonumu = d;							// sayikonumu dizinin d. elemanından büyük ise sayikonumu d olarak güncellenir.
    												// bu döngü içerisinde tüm elemanlar kıyaslanmış olur. 
	  }
      if ( sayikonumu != c )
      {
         tutulan = dizi[c];						 	// dizi elemanları sıralanırken bulunan büyük sayı tutulur ki işlem sırasında kaybolamsın.
         dizi[c] = dizi[sayikonumu];				// büyük sayı bulunduğu için kendisinden sonraki küçük sayıyı kendi sırasına yazdırır.
         dizi[sayikonumu] = tutulan;				// tutulan sayı olan büyük sayı yeri değiştirilen sayının yerine atanır.
      }
   }

   printf("Secmeli siralama metoduna gore siralanmis sayilar:\n"); // ekrana bilgi yazdırılır.

   for ( c = 0 ; c < n ; c++ )						// sıralı dizinin ekrana yazdırılması için kullanılan döngü.
      printf("%d ", dizi[c]);						// dizinin yazdırılmasını sağlayan print komutu.

   return 0;
 }
 