
     /*
	 Burak ATEŞ ( Öğr. No.211451001) Algorithm and Programming Homework 1.3.d
 	insertion sort kodu.
	 */ 

#include <stdio.h>				  // standart kütüphane
#include<time.h>                  // time  için kütüphane
#include<stdlib.h>                // rand() komutu için kütüphane
 
int main()
{
   srand(time(NULL));                      				// rastgele sayı üretmek için kullanılan komut
   int dizi[10000], n = 100000, i, j, c, secilen;		/* dizi isminde 10.000 elemanlı bir dizi oluşturuldu. 0-10.000 arasında sayı üretimi için.
														n=sıralanacak sayı adeti. i, c ve j sayaç işlemi için.	*/
														// secilen: sıralama yapmak için seçilen ve diğer sayı ile karşılaştırılan sayı. 												
   for (c = 0 ; c < n ; c++)							// 0 ile 10.000 arasında rastgele bir sayı üretmek için döngü
      dizi[c]=rand()%10000;         					// 10.000'e kadar sayı üretilir ve dizide tutulur.        
 

    for (i=1; i<n; i++) 								// sıralama işleminin başladığı döngü.							
	{
        secilen = dizi[i];								// secilen: sıralama yapmak için seçilen ve diğer sayı ile karşılaştırılan sayı.					
        j = i - 1;
 
        for (j; j>=0 && dizi[j] >secilen; j--) 			// sıralamanın yapılacağı döngü.  
		{	
            dizi[j + 1] = dizi[j];						//dizinin "secilenden" büyük olan öğelerini mevcut konumlarından bir konum ilerisine taşır.
        }
        dizi[j + 1] = secilen;							// "secilen" sayı küçük olduğunda gerideki adrese atar.
	}
 
   printf("Sokma siralama metoduna gore siralanmis sayilar:\n"); // ekrana bilgi yazdırılır.
   
    for (i=0; i<n; i++)											// sıralı dizinin ekrana yazdırılması için kullanılan döngü.
	   printf("%d ", dizi[i]);  								// dizinin yazdırılmasını sağlayan print komutu.
  		
      return 0;
}
