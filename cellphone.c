#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cellphone {char color[50], model[50]; int rcamnum, price, ID;};

void ReadFile(struct cellphone choice[], size_t len)
{
    choice[0].rcamnum = 3, choice[0].price = 1099, choice[0].ID = 1;
    strcpy(choice[0].color, "Silver");
    strcpy(choice[0].model, "iPhone 13 Pro Max 128GB");

    choice[1].rcamnum = 4, choice[1].price = 1080, choice[1].ID = 2;
    strcpy(choice[1].color, "Red");
    strcpy(choice[1].model, "Vivo X70 Pro+");

    choice[2].rcamnum = 4, choice[2].price = 580, choice[2].ID = 3;
    strcpy(choice[2].color, "Blue");
    strcpy(choice[2].model, "Mi 11X Pro");

    choice[3].rcamnum = 3, choice[3].price = 849, choice[3].ID = 4;
    strcpy(choice[3].color, "Black");
    strcpy(choice[3].model, "Samsung Galaxy S20 FE 5G");

    choice[4].rcamnum = 2, choice[4].price = 360, choice[4].ID = 5;
    strcpy(choice[4].color, "Black");
    strcpy(choice[4].model, "Motorola Edge 20 Fusion");
}

void Color(struct cellphone choice[], size_t len)
{
    char color[10];
    printf("\nAvailable colors:\n\nBlack\tRed\tBlue\tSilver\n\nEnter one color or press 'q' to exit: ");
    scanf("%s", color);
    for (int i = 0; i < 5; i++)
    {
        if (strcasecmp(color, choice[i].color) == 0)
        {
            printf("\nID#:\t\t%d\nModel:\t\t%s\nColor:\t\t%s\nRearCameras:\t%d\nPrice:\t\t$%d\n\n", choice[i].ID, choice[i].model, choice[i].color, choice[i].rcamnum, choice[i].price);
        }
        else if (strcasecmp(color, "q") == 0)
        {
            exit(0);
        }
    }
}

void Price(struct cellphone choice[], ssize_t len){
    char price;
    int cheap = 2000, expensive = 0;
printf("\nWould you like cheap or expensive mobile phone?\nPress\nc - for cheap\ne - for expensive\nq - to exit\n\n");
        scanf(" %c", &price);

        for (int i = 0; i < 5; i++)
        {
            if (choice[i].price > expensive)
            {
                expensive = choice[i].price;
            }
            else if (choice[i].price < cheap)
            {
                cheap = choice[i].price;
            }
        }

        switch (price)
        {
        case 'c':
            for (int i = 0; i < 5; i++)
            {
                if (cheap == choice[i].price)
                {
                    printf("\nID#:\t\t%d\nModel:\t\t%s\nColor:\t\t%s\nRearCameras:\t%d\nPrice:\t\t$%d\n\n", choice[i].ID, choice[i].model, choice[i].color, choice[i].rcamnum, choice[i].price);
                }
            }
            break;
        case 'e':
            for (int i = 0; i < 5; i++)
            {
                if (expensive == choice[i].price)
                {
                    printf("\nID#:\t\t%d\nModel:\t\t%s\nColor:\t\t%s\nRearCameras:\t%d\nPrice:\t\t$%d\n\n", choice[i].ID, choice[i].model, choice[i].color, choice[i].rcamnum, choice[i].price);
                }
            }
            break;
        case 'q':
            exit(0);
        }
}

void Models(struct cellphone choice[], ssize_t len)
{
    int mod;
    printf("\nAvailable models:\n1. Apple \n2. Vivo \n3. Xiaomi \n4. Samsung\n5. Motorola\n\nChoose one model or press '0' to exit: \n");
    scanf(" %d", &mod);
    for (int i = 0; i < 5; i++)
    {
        if (mod == choice[i].ID)
        {
            printf("\nID#:\t\t%d\nModel:\t\t%s\nColor:\t\t%s\nRearCameras:\t%d\nPrice:\t\t$%d\n\n", choice[i].ID, choice[i].model, choice[i].color, choice[i].rcamnum, choice[i].price);
        }
        else if (mod == 0)
        {
            exit(0);
        }
    }
}

void Cams(struct cellphone choice[], size_t len)
{
    int cam;
    printf("\nPress \n'2' - for 2 rear cameras\n'3' - for 3 rear cameras\n'4 - for 4 rear cameras\npress '0' - to quit\n\n");
    scanf("%d", &cam);
    for (int i = 0; i < 5; i++)
    {
        if (cam == choice[i].rcamnum)
        {
            printf("\nID#:\t\t%d\nModel:\t\t%s\nColor:\t\t%s\nRearCameras:\t%d\nPrice:\t\t$%d\n\n", choice[i].ID, choice[i].model, choice[i].color, choice[i].rcamnum, choice[i].price);
        }
        else if (cam == 0)
        {
            exit(0);
        }
    }
}

int main(void)
{
    char option;
    
    struct cellphone choice[5];

    printf("\n\nChoose one feature:\na)color\nb)price\nc)model\nd)number of rear cameras\n\n");
    scanf("%c", &option);

    ReadFile(choice, 5);

    switch (option)
    {
    case 'a':
        Color(choice, 5);
        break;
    case 'b':
        Price(choice, 5);
        break;
    case 'c':
        Models(choice, 5);
        break;
    case 'd':
        Cams(choice, 5);
        break;
    default:
    printf("\n!Wrong input!\n");
    }
    

    return 0;
}