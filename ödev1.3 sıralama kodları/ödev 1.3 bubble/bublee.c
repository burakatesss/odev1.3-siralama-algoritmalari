
     /*
	 Burak ATEŞ ( Öğr. No.211451001) Algorithm and Programming Homework 1.3.c
 	bubble sort kodu.
	 */ 

#include <stdio.h>				  // standart kütüphane
#include<time.h>                  // time  için kütüphane
#include<stdlib.h>                // rand() komutu için kütüphane

int main( )
{

srand(time(NULL));                      				 // rastgele sayı üretmek için kullanılan komut
   int dizi[10000], n = 100000, i, c, d, tutulan;	 	/* dizi isminde 10.000 elemanlı bir dizi oluşturuldu. 0-10.000 arasında sayı üretimi için.
														n=sıralanacak sayı adeti. i,c ve d sayaç işlemi için.*/
													  	//tutulan: sıralı dizi oluşturulurken elemanların geçici atıldığı yer.
													
   for (c = 0 ; c < n ; c++ )							// 0 ile 10.000 arasında 100.000 adet rastgele sayı üretmek için döngü
    {
	  dizi[c]=rand()%10000;         					// 10.000'e kadar sayı üretilir ve dizide tutulur.        
	}

	for (c=1; c<=n-1; c++) 								// sıralama işleminin başladığı döngü.
	{		
		for (i=0; i<=n-2; i++) 							// sayıların karşılaştırıldığı döngü
			{
				if (dizi[i] > dizi[i+1]) 				// dizinin i. elamanı ile bir sonraki elemanı kıyaslanır.
				{			 
 					tutulan = dizi[i]; 					// dizi elemanları sıralanırken bulunan büyük sayı tutulur ki işlem sırasında kaybolamsın.
					dizi[i] = dizi[i+1];				// büyük sayı bulunduğu için kendisinden sonraki küçük sayıyı kendi sırasına yazdırır.
					dizi[i+1] = tutulan;				// tutulan sayı olan büyük sayı yeri değiştirilen sayının yerine atanır.
				}
			}	
	}

printf("Baloncuk siralama metoduna gore siralanmis sayilar:\n");	// ekrana bilgi yazdırılır.	

	for (c=0; c<=n-1; c++)											// sıralı dizinin ekrana yazdırılması için kullanılan döngü.
		{
			printf( "%d ", dizi[c]);								// dizinin yazdırılmasını sağlayan print komutu.
		}		
		
return 0;

}


