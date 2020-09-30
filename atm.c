#include <stdio.h>
#define PSWRD 1234
#define BASLANGIC_BAKIYE 100 

int main(){
    int sifre = 0;                   
    int secenek = 0;                 
    int miktar = 0;                  
    int g_bakiye = BASLANGIC_BAKIYE; 
    printf("MERHABA HOŞGELDİNİZ\n");
    printf("/lutfen sifrenizi giriniz\n");
    scanf("%d",&sifre);
    if (PSWRD != sifre){
        printf("sifre yanlis\n");
        return 0;
    }
    
    printf("\tPara cekmek icin 1\n"
        "\tPara yatirmak icin 2\n"
        "\tBakiye ogrenmek icin 3 giriniz\n");
    scanf("%d", &secenek);
    
    switch(secenek){
        case 1: 
            printf("Lutfen cekilecek miktarini giriniz\n");
            scanf("%d", &miktar);
            g_bakiye -= miktar;
            if (miktar < 0 || miktar > g_bakiye){
                printf("Hatali giris");
                return 0;
            }
            break;
        case 2:
            printf("Lutfen yatirilacak miktarini giriniz\n");
            scanf("%d", &miktar);
            if (miktar < 0){
                printf("Hatali giris");
                return 0;
            }
            g_bakiye += miktar;
            break;
        case 3:
            printf("Guncel bakiyeniz : %d", g_bakiye);
            break;
        default:
            printf("Hatali giris");
            return 0;
    }
    printf("Islemlerden sonraki son"
          "Guncel bakiyeniz : %d", g_bakiye);
    return 0;
}
