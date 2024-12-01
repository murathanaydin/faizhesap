#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float ana_para,zaman,faiz_orani,faiz_miktari;
	
	printf("Ana Para miktarini giriniz: ");
	scanf("%f",&ana_para);
	
	printf("Zamani Giriniz: ");
	scanf("%f",&zaman);
	
	printf("Faiz Oranini Girin: ");
	scanf("%f",&faiz_orani);
	
	faiz_miktari = (ana_para*zaman*faiz_orani /100);
	
	printf("Basit Faiz Miktari: %f",faiz_miktari);
	
	
	return 0;
}
