#include <stdio.h>
int main()
{
    int kart_sifresi;
    printf("Lutfen kart sifrenizi giriniz: ");
    scanf("%d",&kart_sifresi);
    int islem, sayi, bakiye=1000, tutar, tekrar;
    printf("\nIslemler\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n\n\n");
    printf("Islemi seciniz: ");
    scanf("%d",&islem);
    sayi=islem;
    for(sayi=islem; sayi<=5; sayi=0)
    {
        switch (islem)
        {
            case 1:
                printf("Bakiyeniz: %d\n", bakiye);
                printf("Cekilecek Tutar:");
                scanf("%d", &tutar);
                if (tutar > bakiye)
                {
                    printf("\nBakiye Yetersiz. Lutfen bakiyenizden kucuk bir deger giriniz: ");
                    scanf("%d",&tutar);
                    if (tutar < bakiye)
                    {
                        printf("\nIslem basarili.\n\n");
                    }
                    else
                    {
                        printf("\nBakiye Yetersiz. Lutfen bakiyenizden kucuk bir deger giriniz: ");
                        scanf("%d",&tutar);
                    }
                }
                else
                {
                    printf("Islem basarili.\n");
                }
                bakiye -= tutar;
                printf("Kalan Bakiyeniz: %d\n", bakiye);
                printf("\nYeni bir islem yapmak ister misiniz?\nYeni bir islem yapmak ya da kartinizi iade etmek icin lutfen 1'e basiniz: ");
                scanf("%d",&tekrar);
                if (tekrar==1)
                {
                    printf("\n\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz: ");
                    scanf("%d",&islem);
                }
                sayi=islem;
                break;

            case 2:printf("Bakiyeniz: %d\n", bakiye);
                printf("Yatirilacak Tutar: \n");
                scanf("%d", &tutar);
                bakiye += tutar;
                printf("Islem Basarili. Kalan Bakiyeniz: %d\n", bakiye);
                printf("\nYeni bir islem yapmak ister misiniz?\nYeni bir islem yapmak ya da kartinizi iade etmek icin lutfen 1'e basiniz: ");
                scanf("%d",&tekrar);
                if (tekrar==1)
                {
                    printf("\n\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz: ");
                    scanf("%d",&islem);
                }
                sayi=islem;
                break;

            case 3:
                printf("Bakiyeniz: %d\n", bakiye);
                printf("Gonderilecek Tutar: ");
                scanf("%d", &tutar);
                if (tutar > bakiye)
                {
                    printf("\nBakiye Yetersiz. Lutfen bakiyenizden kucuk bir deger giriniz: ");
                    scanf("%d",&tutar);
                    if (tutar < bakiye)
                    {
                        printf("\nIslem basarili.\n\n");
                    }
                    else
                    {
                        printf("\nBakiye Yetersiz. Lutfen bakiyenizden kucuk bir deger giriniz: ");
                        scanf("%d",&tutar);
                    }
                }
                else
                {
                    printf("Islem basarili. ");
                }
                bakiye -= tutar;
                printf("Kalan Bakiyeniz: %d\n", bakiye);
                printf("\nYeni bir islem yapmak ister misiniz?\nYeni bir islem yapmak ya da kartinizi iade etmek icin lutfen 1'e basiniz: ");
                scanf("%d",&tekrar);
                if (tekrar==1)
                {
                    printf("\n\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz: ");
                    scanf("%d",&islem);
                }
                break;
                
            case 4:
                printf("Bakiyeniz: %d\n",bakiye);
                printf("\nYeni bir islem yapmak ister misiniz?\nYeni bir islem yapmak ya da kartinizi iade etmek icin lutfen 1'e basiniz: ");
                scanf("%d",&tekrar);
                if (tekrar==1)
                {
                    printf("\n\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n");
                    printf("Lutfen yapmak istediginiz islemi seciniz: ");
                    scanf("%d",&islem);
                }
                sayi=islem;
                break;

            case 5:
                printf("\nKartiniz iade ediliyor...\n");
                printf("Kartiniz iade edildi.");
                sayi = islem = 10;
                break;
            
        }
    }

    return 0;
}
