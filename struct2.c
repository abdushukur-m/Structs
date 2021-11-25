#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct company
{
    char name[30];
    char surname[30];
    char cellphone[30];
};

int main()
{
    int num;
    char input[30];
    /*
    printf("Enter number of employees : ");
    scanf("%d", &num);
    */

    struct company worker0;
    strcpy(worker0.name, "Davronbek"), strcpy(worker0.surname, "Isaqov"), strcpy(worker0.cellphone, "998936994019");
    struct company worker1;
    strcpy(worker1.name, "Abdushukur"), strcpy(worker1.surname, "Mukhiddinov"), strcpy(worker1.cellphone, "998973959398");
    struct company worker2;
    strcpy(worker2.name, "Mirzaolim"), strcpy(worker2.surname, "Islamov"), strcpy(worker2.cellphone, "998977070707");
    struct company worker3;
    strcpy(worker3.name, "Muhammadyusuf"), strcpy(worker3.surname, "Abdurayimov"), strcpy(worker3.cellphone, "998900100101");

    /*
    printf("Empolyee %d\nFirst Name : ", i + 1);
    scanf("%s", worker[i].name); 

    printf("Second Name : ");
    scanf("%s", worker[i].surname);

    printf("Cellphone : ");
    scanf("%s", &worker[i].cellphone);
    printf("\n");
    */
    printf("Enter Name: ");
    scanf("%s", input);

    /*
    for (int i = 0; i < num; i++)
    {
        if (strcasecmp(input, worker[i].name) == 0)
        {
            printf("\n%s's cell phone number: %s\n", worker[i].name, worker[i].cellphone);
        }
        else
        {
            printf("\nThere is no such worker\a\n");
        }
    }
    */
    if (strcasecmp (worker0.name, input) == 0)
    {
        printf("\n%s's cell phone number: +%s\n\n", worker0.name, worker0.cellphone);
    }
    else if (strcasecmp(input, worker1.name) == 0)
    {
        printf("\n%s's cell phone number: +%s\n\n", worker1.name, worker1.cellphone);
    }
    else if (strcasecmp(input, worker2.name) == 0)
    {
        printf("\n%s's cell phone number: +%s\n\n", worker2.name, worker2.cellphone);
    }
    else if (strcasecmp(input, worker3.name) == 0)
    {
        printf("\n%s's cell phone number: +%s\n\n", worker3.name, worker3.cellphone);
    }
    else
    {
        printf("\nThere is no such worker\n\a");
    }
    return 0;
}