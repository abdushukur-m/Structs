#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct workers
{
    char name[10], surname[10], position[20];
    float perday, days;
};

int main()
{
    int num;
    float slry[num], bonus[num], total[num];
    printf("Enter number of employees: ");
    scanf("%d", &num);

    struct workers employee[num];

    for (int i = 0; i < num; i++)
    {
        float sum = 0;
        printf("\nEmployee %d:\nName: ", i + 1);
        scanf("%s", employee[i].name);
        printf("Surname: ");
        scanf("%s", employee[i].surname);
        printf("Position: ");
        scanf("%s", employee[i].position);
        printf("$/day: $");
        scanf("%f", &employee[i].perday);
        printf("Days worked: ");
        scanf("%f", &employee[i].days);

        slry[i] = (employee[i].perday) * (employee[i].days);
    }

    printf("\n\n#\tName\t\t Surname\t Position\t Salary\t\t Bonus\t\t Total\n\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t%s\t\t %s\t\t %s\t\t $%.0f\t\t $%.0f\t\t $%.0f\n", i + 1, employee[i].name, employee[i].surname, employee[i].position, slry[i], slry[i] / 10, slry[i] * 1.1);
    }

    return 0;
}