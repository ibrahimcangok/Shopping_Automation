#include <stdio.h>
#include <stdlib.h>

int main() {
	

	float top;
	float atel1=1500;
	float atel2= 2750;
	float atel3 =8832;
	float asaat1= 543.99;
	float asaat2= 1324.50;
	float asaat3=850;
	float yaz1=553.50;
	float yaz2=848.20;
	float yaz3=1433.33;
	float bil1=14600;
	float bil2=12964;
	float bil3=22920;
	float bil4=36123;
	int secm;
	int s1,s2,s3,s4;
	s1=1;
	s2=0;
	s3=1;
	s4=0;
	top=0;
	
	printf("**********___ABC ELEKTRONIK___********** \n \n");
	printf("--------------Hosgeldiniz--------------- \n \n");
	printf("**************************************************** \n \n");

	for(s2 ; s2<s1 ; s2++)
	{
	printf("1- Urun ve fiyat sorgula \n");
	printf("2- Sepete urun ekle \n");
	printf("3- Siparis tamamla \n");
	printf("4- Sonlandir \n \n");
	printf("**************************************************** \n \n");
	
	printf("Seciminiz :");
	scanf("%d",&secm);
	
	if(secm == 1 )
	{
	
	for(s4 ; s4<s3 ; s4++)
	{	
		printf("**************************************************** \n");
		printf("Hangi kategoriden urun sorgulamak istiyorsunuz ? \n");
		printf("1- Akilli Telefon \n");
		printf("2- Akilli Saat \n");
		printf("3- Yazici \n");
		printf("4- Bilgisayar \n");
		printf("**************************************************** \n \n");
		printf("Seciminiz :");
	 	scanf("%d",&secm);
		
		switch(secm)
					{
						case 1:
							{
								printf("**************************************************** \n");
								printf("Akilli telefon-1 %.2f TL \n",atel1);
								printf("Akilli telefon-2 %.2f TL \n",atel2);
								printf("Akilli telefon-3 %.2f TL \n",atel3);
								printf("**************************************************** \n");
							}
							break;
						case 2:
							{						
								printf("**************************************************** \n");						
								printf("Akilli saat-1 %.2f TL \n",asaat1);
								printf("Akilli saat-2 %.2f TL \n",asaat2);
								printf("Akilli saat-3 %.2f TL \n",asaat3);
								printf("**************************************************** \n");	
							}
							break;
						case 3:
							{
								printf("**************************************************** \n");
								printf("Yazici A %.2f TL \n",yaz1);
								printf("Yazici B %.2f TL \n",yaz2);
								printf("Yazici C %.2f TL \n",yaz3);
								printf("**************************************************** \n");
							}
							break;
						case 4:
							{
								printf("**************************************************** \n");
								printf("Bilgisayar X %.2f TL \n",bil1);
								printf("Bilgisayar Y %.2f TL \n",bil2);									
								printf("Bilgisayar Z %.2f TL \n",bil3);
								printf("Bilgisayar Q %.2f TL \n",bil4);
								printf("**************************************************** \n");		
							}
							break;
							default:
							printf("Hatali Giris !!!\n");
							break;
					}	
		printf("**************************************************** \n");
		printf("1- Baska kategori urunlerini sorgula \n");
		printf("2- Ana menuye don \n");
		printf("Seciminiz :");
	 	scanf("%d",&secm);
		
		if(secm == 1)
		{
			s3++;
		}
		
		else if(secm == 2)
		{
			s1++;
		}
		else
		{
			printf("Hatali Giris !!!\n");
		}		
	}
		s3++ ;
}

	else if(secm == 2)
	{
		for(s4 ; s4<s3; s4++)
		{
						   
		printf("**************************************************** \n");
		printf("Hangi kategoriden urun eklemek istiyorsunuz ? \n");
		printf("1- Akilli Telefon \n");
		printf("2- Akilli Saat \n");
		printf("3- Yazici \n");
		printf("4- Bilgisayar \n");
		printf("**************************************************** \n \n");
		printf("Seciminiz :");
	 	scanf("%d",&secm);
		switch(secm)
		{	
			case 1: 
			{
						printf("Akilli telefon kategorisi urunlerinden hangisini sepete eklemek istersiniz? \n ");
						printf("**************************************************** \n");
						printf("Akilli telefon-1 %.2f TL \n",atel1);
						printf("Akilli telefon-2 %.2f TL \n",atel2);
						printf("Akilli telefon-3 %.2f TL \n",atel3);
						printf("**************************************************** \n");
						printf("Seciminiz :");
						scanf("%d",&secm);							
						if(secm==1)
						{
						top+=1500;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",atel1);	
						}
						else if(secm==2)
						{
						top+=2750;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",atel2);
						}
						else if(secm==3)
						{
						top+=8832;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",atel3);
						}
						else
						{				
						printf("Hatali Giris !!!\n");
						}						
			}
			break;						
			case 2:
					{
						printf("Akilli saat kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
						printf("**************************************************** \n");
						printf("Akilli saat-1 %.2f TL \n",asaat1);
						printf("Akilli saat-2 %.2f TL \n",asaat2);
						printf("Akilli saat-3 %.2f TL \n",asaat3);
						printf("**************************************************** \n");
						printf("Seciminiz :");
						scanf("%d",&secm);
						
						if(secm==1)
						{
						top+=543.99;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",asaat1);	
						}
						else if(secm==2)
						{
						top+=1324.50;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",asaat2);
						}
						else if(secm==3)
						{
						top+=850;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",asaat3);
						}
						else
						{
						printf("Hatali Giris !!!");
						}
					}
					break;
					
			case 3:
					{
						printf("Yazici kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
						printf("**************************************************** \n");
						printf("Yazici A %.2f TL \n",yaz1);
						printf("Yazici B %.2f TL \n",yaz2);
						printf("Yazici C %.2f TL \n",yaz3);
						printf("**************************************************** \n");
						printf("Seciminiz :");
						scanf("%d",&secm);
					
						if(secm==1)
						{
						top+=553.50;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",yaz1);		
						}
						else if(secm==2)
						{
						top+=848.20;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",yaz2);		
						}
						else if(secm==3)
						{
						top+=1433.33;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",yaz3);
						}
						else
						{
						printf("Hatali Giris !!!\n");
						}				
					}
					break;				
					
			case 4:
					{
						printf("Bilgisayar kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n");
						printf("**************************************************** \n");
						printf("Bilgisayar X %.2f TL \n",bil1);
						printf("Bilgisayar Y %.2f TL \n",bil2);
						printf("Bilgisayar Z %.2f TL \n",bil3);
						printf("Bilgisayar Q %.2f TL \n",bil4);
						printf("**************************************************** \n");
						printf("Seciminiz :");
						scanf("%d",&secm);
						
						if(secm==1)
						{
						top+=14600;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",bil1);	
						}
						else if(secm==2)
						{
						top+=12964;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",bil2);
						}
						else if(secm==3)
						{
						top+=22920;
						printf("**************************************************** \n");
						printf("Toplam sepet tutariniz %.2f TL \n",bil3);
						}
						else if(secm==4)
						{
						top+=36123;
						printf("Toplam sepet tutariniz %.2f TL \n",bil4);
						}
						else
						{
						printf("Hatali Giris !!!\n");
						}		
					}
					break;
			
			default:
			printf("Hatali Giris !!!\n");
			break;
										
		}
		
		printf("**************************************************** \n");
		printf("1- Sepete urun ekle \n");
		printf("2- Ana menuye don \n");
		printf("Seciminiz :");
		scanf("%d",&secm);
		
		if(secm == 1)
		{
			s3++ ;
		}
		
		else if(secm == 2)
		{
			s1++ ;
		}
		
		else{
			printf("Hatali Giris !!!\n");
		}
		
		}
		
		s3++ ;
	}
	
 
	
	else if(secm == 3)
	{	
		printf("**************************************************** \n\n");
		printf("Toplam sepet tutariniz: %.2f TL \n\n" , top);
		printf("**************************************************** \n\n");
		printf("Ana menuye donmek icin 1'e tiklayin --> ");
		scanf("%d" , &secm);
		if(secm == 1)
		{
			s1++ ;
		}
		else
		{
			printf("Hatali Giris !!!\n");
			printf("Program kapaniyor...");
		}
	}		
	else if(secm == 4)
	{	
		printf("**************************************************** \n");
		printf("Iyi gunler dileriz... :) \n");
		printf("Program sonlandiriliyor... \n");
		printf("**************************************************** \n");
	}
	else
	{
		printf("Hatali Giris !!!\n");
	}		
}
	return 0;
}
