//Create array of 10 students(roll no, name, marks) and sort students by their marks. 

#include<stdio.h>
#include<string.h>

struct student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct student s[10], temp;
  
    s[0].roll_no=1;
    strcpy(s[0].name, "Vaishnavi");
    s[0].marks=85;

    s[1].roll_no=2;
    strcpy(s[1].name,"Ujala");
    s[1].marks=78;

    s[2].roll_no=3;
    strcpy(s[2].name,"Anushka");
    s[2].marks=64;

    s[3].roll_no=4;
    strcpy(s[3].name,"Nandini");
    s[3].marks=73;

    s[4].roll_no=5;
    strcpy(s[4].name,"Shreya");
    s[4].marks=92;

    s[5].roll_no=6;
    strcpy(s[5].name,"Nikita");
    s[5].marks=85;

    s[6].roll_no=7;
    strcpy(s[6].name,"Prajakta");
    s[6].marks=63;

    s[7].roll_no=8;
    strcpy(s[7].name,"Kshitija");
    s[7].marks=89;

    s[8].roll_no=9;
    strcpy(s[8].name,"Aditi");
    s[8].marks=84;

    s[9].roll_no=10;
    strcpy(s[9].name,"Neha");
    s[9].marks=100;


    for(int i = 0; i < 9; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(s[i].marks > s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("Roll_no\t Name\t Marks\n");

    for(int i = 0; i < 10; i++)
    {    
        printf("%4d", s[i].roll_no);
        printf("\t%s", s[i].name);
        printf("\t%f\n", s[i].marks);
    }

    return 0;

}