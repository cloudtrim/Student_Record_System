#include<stdio.h>
#include<string.h>
#include<conio.h>

int z,i=0;           //global declaration

struct student_data
{
    char first_name[10];
    char last_name[10];
    int roll_no;
    int M_marks,S_marks,E_marks,H_marks;
} st[100];



void add_data()     //function for adding student data
{
    printf("\t\t*** \"Add Student Data\" ***\n\n\n");
    printf("Enter first name of student>");
    scanf("%s",st[i].first_name);
    printf("Enter last name of student>");
    scanf("%s",st[i].last_name);
    printf("Enter Roll no of student>");
    scanf("%d",&st[i].roll_no);
    printf("Enter Maths marks of student>");
    scanf("%d",&st[i].M_marks);
    printf("Enter Science marks of student>");
    scanf("%d",&st[i].S_marks);
    printf("Enter English marks of student>");
    scanf("%d",&st[i].E_marks);
    printf("Enter Hindi marks of student>");
    scanf("%d",&st[i].H_marks);
    printf("\nEnter 1 to enter next data or Enter 0 to exit\n");
    scanf("%d",&z);
    i=i+1;
    if(z==1)
    {
        add_data();
    }
    else
    {
        printf("End Of Data\n\n");
    }
}



void find_by_rollNo()    //function for searching data by roll numbers
{
    int rollno,j=0;
    double per;
    printf("\t\t***Search by Roll No***\n\n\n");
    printf("Enter the Roll No=");
    scanf("%d",&rollno);

    for(j; j<i; j++)
    {
        if(rollno==st[j].roll_no)
        {
            printf("\nDetails of Student\n");
            printf("Name of student is %s %s\n",st[j].first_name, st[j].last_name);
            printf("Roll no is %d\n",st[j].roll_no);
            printf("Marks in Maths is %d\n",st[j].M_marks);
            printf("Marks in Science is %d\n",st[j].S_marks);
            printf("Marks in English is %d\n",st[j].E_marks);
            printf("Marks in Science is %d\n",st[j].H_marks);
            per=(double)(st[j].M_marks+st[j].S_marks+st[j].E_marks+st[j].H_marks)/4;
            printf("Percentage is %.2lf\%\%  \n\n",per);
        }
    }
    printf("\nEnter 1 to enter next data or Enter 0 to exit\n");
    scanf("%d",&z);
    if(z==1)
    {
        find_by_rollNo();
    }
    else
    {
        printf("End Of Data\n\n");
    }
}



void find_by_name()       //function for searching data by names
{
    char name[20];
    int j=0;
    double per;
    printf("\t\t***Search by Name***\n\n\n");
    printf("Enter the First Name=");
    scanf("%s",name);

    for(j; j<i; j++)
    {
        if(strcmp(st[j].first_name, name)==0)
        {
            printf("\nDetails of Student\n");
            printf("Name of student is %s %s\n",st[j].first_name, st[j].last_name);
            printf("Roll no is %d\n",st[j].roll_no);
            printf("Marks in Maths is %d\n",st[j].M_marks);
            printf("Marks in Science is %d\n",st[j].S_marks);
            printf("Marks in English is %d\n",st[j].E_marks);
            printf("Marks in Hindi is %d\n",st[j].H_marks);
            per=(double)(st[j].M_marks+st[j].S_marks+st[j].E_marks+st[j].H_marks)/4;
            printf("Percentage is %.2lf\%\%  \n\n",per);
        }
    }
    printf("\nEnter 1 to enter next data or Enter 0 to exit\n");
    scanf("%d",&z);
    if(z==1)
    {
        find_by_name();
    }
    else
    {
        printf("End Of Data\n\n");
    }
}



void display()     //function for displaying all data
{
    int srNo=1,j=0;
    double per;
    printf("\t\t ***Total Data Display***\n\n\n");
    for(j; j<i; j++)
    {
        printf("|%d-Name of student \t| %s %s \n",srNo,st[j].first_name, st[j].last_name);
        printf("|  Roll no         \t| %d  \n",st[j].roll_no);
        printf("|  Marks in Maths  \t| %d  \n",st[j].M_marks);
        printf("|  Marks in Science  \t| %d  \n",st[j].S_marks);
        printf("|  Marks in English  \t| %d  \n",st[j].E_marks);
        printf("|  Marks in Hindi  \t| %d  \n",st[j].H_marks);
        per=(double)(st[j].M_marks+st[j].S_marks+st[j].E_marks+st[j].H_marks)/4;
        printf("|  Percentage \t\t| %.2lf\%\%  \n\n",per);
        srNo++;
    }
    if(i==0)
    {
        printf("No Data Entered\n\n\n");
    }
    printf("Enter 0 to exit\n");
    scanf("%d",&z);
}


int main()
{
    int task_to_perform;
    while(1)
    {
        printf("Enter the given \"number\" to perform task\n\n");
        printf("A- Enter 1 to add data\n");
        printf("B- Enter 2 to search by Roll No\n");
        printf("C- Enter 3 to search by name\n");
        printf("D- Enter 4 to display\n");
        printf("E- Enter 5 to Exit\n\n");
        printf("Enter the number=");
        scanf("%d",&task_to_perform);

        switch(task_to_perform)
        {
        case 1:
            clrscr();
            add_data();
            clrscr();
            break;
        case 2:
            clrscr();
            find_by_rollNo();
            clrscr();
            break;
        case 3:
            clrscr();
            find_by_name();
            clrscr();
            break;
        case 4:
            clrscr();
            display();
            clrscr();
            break;
        default:
            exit(0);
        }
    }
    return 0;
}
    
