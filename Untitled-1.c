#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct menu
{
    char suui[1000];
    char fastfood[1000];
    char twist[1000];
    char ichimlik[1000];
    char disert[1000];

    // fastfood
    char lavash[1000];
    char lavashsirli[1000];
    char gamburger[1000];
    char doubleburger[1000];
    char chizburger[1000];
    char doublechizburger[1000];
    char shaurma[1000];
    char kartoshkafree[1000];
    char chikenstrips[1000];

    //Twisterlar
    char boxmaster[1000];
    char longer[1000];
    char twisterjunior[1000];
    char twisteroriginal[1000];

    // ichimliklar
    char Pepsi[1000];
    char Cola[1000];
    char Fanta[1000];
    char coffee[1000];
    char icatea[1000];
    char Lipton[1000];
    char Limonchoy[1000];

    //disert
    char donatqlupnoyli[1000];
    char donatolmali[1000];
    char olmalitartaletka[1000];
    char napaleon[1000];
    char keks[1000];
};

int main()
{
    char sora[1000];
    char sorayqol[1000];


    struct menu menyu;
    strcpy(menyu.fastfood, "FastFoodlar\n");
    strcpy(menyu.twist, "Twisterlar\n");
    strcpy(menyu.ichimlik, "Ichmliklar\n");
    strcpy(menyu.disert, "Disertlar\n");
    strcpy(menyu.suui, "Menu");
    
    printf("\nResort fost food do'koniga hush kelibsiz");

    printf("\n\nMenu sahifasiga o'tish uchun menu deb kiritng: ");
    scanf("%s", sora);

    if (strcasecmp(menyu.suui, sora) == 0){
        printf("\n\n%s", menyu.fastfood);
        printf("%s", menyu.twist);
        printf("%s", menyu.ichimlik);
        printf("%s", menyu.disert);
     }//else{
    //     printf("\nMenu so'zini to'gri kiriting");
    // }


    struct menu fastfoods[10];
    strcpy(fastfoods[1].lavashsirli, "Lavash-sirli\n");
    strcpy(fastfoods[2].lavash, "\nLavash");
    strcpy(fastfoods[3].gamburger, "Gamburger\n");
    strcpy(fastfoods[4].doubleburger, "Double-Burger\n");
    strcpy(fastfoods[5].chizburger, "Chizburger\n");
    strcpy(fastfoods[6].doublechizburger, "Double-Chizburger\n");
    strcpy(fastfoods[7].shaurma, "Shaurma\n");
    strcpy(fastfoods[8].kartoshkafree, "Kartoshka-free\n");
    strcpy(fastfoods[9].chikenstrips, "Chiken-strips\n");

    struct menu twisterlar;
    strcpy(twisterlar.boxmaster, "\nBoxmaster");
    strcpy(twisterlar.longer, "Longer\n");
    strcpy(twisterlar.twisterjunior, "Twister-junior\n");
    strcpy(twisterlar.twisteroriginal, "Twister-Original\n");
    strcpy(twisterlar.icatea, "IceTea\n");

    struct menu ichimliklar;
    strcpy(ichimliklar.Pepsi, "\nPepsi");
    strcpy(ichimliklar.Cola, "Cola\n");
    strcpy(ichimliklar.Fanta, "Fanta\n");
    strcpy(ichimliklar.coffee, "Coffee\n");
    strcpy(ichimliklar.icatea, "IceTea\n");
    strcpy(ichimliklar.Lipton, "Lipton\n");
    strcpy(ichimliklar.Limonchoy, "Limonchoy\n");

    struct menu diserts;
    strcpy(diserts.donatqlupnoyli, "\nQulupnayli-donat");
    strcpy(diserts.donatolmali, "Olmali-donat\n");
    strcpy(diserts.olmalitartaletka, "Olmali-tartaletka\n");
    strcpy(diserts.napaleon, "Napaleon\n");
    strcpy(diserts.keks, "Keks\n");

    printf("\n\nO'zingizga kerak bo'lgan sahifani tanlang: ");
    scanf("%s", sorayqol);

    if (strcasecmp(menyu.fastfood, sorayqol) == 0)
    {
        for (int i = 1; i < 10; i++)
        {
            printf("\n%s\n", menyu[i].fastfoods)   
        }
        
    }

    
    

    return 0;
}