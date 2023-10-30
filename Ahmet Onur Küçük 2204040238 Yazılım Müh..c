#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	int sayi, kare, mod,basamak=0,sonuc ,gercek_sayi;
	printf("Sayi giriniz:");
	scanf("%d", &sayi);
	gercek_sayi = sayi;
	kare = sayi * sayi;
	while (sayi > 0) {
		sayi = sayi / 10;
		basamak++;
	}	
	mod = pow(10, basamak);
	sonuc = kare % mod;
	printf("%d Sayisinin karesi=%d \n", gercek_sayi, kare);
	if (gercek_sayi == sonuc) { 
		printf("%d Automorphic sayidir", gercek_sayi);
	}
	else {
		printf("%d Automorphic sayi degildir", gercek_sayi);
	}
	return 0;
} 
