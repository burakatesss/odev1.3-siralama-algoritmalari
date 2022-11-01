
 /*
	 Burak ATEŞ ( Öğr. No.211451001) Algorithm and Programming Homework 1.3.b
 	quick sort kodu.
	 */ 

#include <stdio.h>				  // standart kütüphane
#include<time.h>                  // time  için kütüphane
#include<stdlib.h>                // rand() komutu için kütüphane
#define MAX 10000

int main()																			// Ana fonk kapsamı.
{
										
    int j, dizi[MAX];																// int türünde değişkenler tanımlandı. i sayaçta kullanılacak.
    int size=10000;																	//
    int i=0;
    
	srand(time(NULL));																// rastgele sayı üretmek için kullanılan komut
	
	
	for(int i=0; i<10000; i++)														// 10.000 e kadar rastgele sayı üretme işlemi başladı.
	{																
		dizi[i] = rand()%10000+1; 													
	}
	
 
    
    printf("\t\tHizli siralama metoduna gore siralanmis sayilar\n");				// Ekrana bilgi yazdırılıyor.
    
  
				hizli_siralama_fonk(dizi, 0, MAX-1); 								// Yaratılan hizli_siralama_fonk çağırıldı.
			for(int i=0; i<size; i++)
			{
     	
		    printf("%d\t",dizi[i]); 												// Sayıların sıralanmış halleri ekrana yazdırılıyor.
        
    		}
    

	return 0;
}

int hizli_siralama_fonk(int dizi[], int l, int r)								// hizli_siralama_fonk ve kapsamı
{
	int tutulan;																//tutulan: sıralı dizi oluşturulurken elemanların geçici atıldığı yer.		
	int secilen;																// secilen: sıralama yapmak için seçilen ve diğer sayı ile karşılaştırılan sayı
	int s;
	int i;
	i=l;
	s=r;
	secilen=dizi[(i+s)/2];
	
	do																			// karşılaştırma ve sıralama işlemlerinin başladığı döngü.
	{
		while(dizi[i]< secilen)													// dizinin i. elamanı ile seçilen kıyaslanır.
		i++;																	// i artım işlemi
		while(dizi[s]> secilen)													// dizinin s. elamanı ile seçilen kıyaslanır.
		s--;																	// s artım işlemi
		if(i<=s)																// i j koşullu ifadesi
		{
			tutulan= dizi[i];													// dizi elemanları sıralanırken bulunan büyük sayı tutulur ki işlem sırasında kaybolamsın
			dizi[i]=dizi[s];													// s. eleman i. elemanın yerine atanıyor.
			dizi[s]=tutulan;													// tutulan sayı s. elemanın eski yerine atanıyor 
			i++;
			s--;
		}
		
	} while(i<s);																// while döngüsü kapsamı
	if (i<r)
	hizli_siralama_fonk(dizi, i, r);
	if(l<s)
	hizli_siralama_fonk(dizi, l, s);

	
}

