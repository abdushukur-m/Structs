#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[50];
    char age;
    int roll_no;
    float marks;
};

void print(char name[], char age, int roll_no, float marks){
    printf("%s %d %d %.2f", name, age, roll_no, marks);
}

int main(){
    struct student s1 = {"Nick", "16", 50, 72.50};
    printf(s1.name, s1.age, s1.roll_no, s1.marks);

    return 0;
}
