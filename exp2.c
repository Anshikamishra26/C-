#include <stdio.h>

//Defining structure student
typedef struct student
{
    int rollno;
    char name[20];
    int marks;
} student;


//Declaring functions
void create(student[], int);
void print(student[], int);
void bubble_sort(student[], int);
void insertion_sort(student[], int);

int main()
{
    student st[30];
    int n, op;

    do
    {
        printf("\n1)Create \n2)Print \n3)Bubble Sort \n4)Insertion Sort \n5)Exit \n");
        printf("\nEnter your choice : ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\nEnter the number of students : ");
            scanf("%d", &n);
            //Function call
            create(st, n);
            break;

        case 2:
            //Function call
            print(st, n);
            break;

        case 3:
            //Function call
            bubble_sort(st, n);
            print(st, n);
            break;

        case 4:
            //Function call
            insertion_sort(st, n);
            print(st, n);
            break;

        default:
            printf("Enter the correct choice!!!\n");
            break;
        }
    } while (op != 5);
    return 0;
}

//Defining create function
void create(student st[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the data (Name , Roll Number and Marks) of the student %d\n", i + 1);
        scanf("%s %d %d", &st[i].name, &st[i].rollno, &st[i].marks);
    }
}

//Defining print function
void print(student st[], int n)
{
    int i;
    printf("________\n");
    printf("Name\tRoll No\tMarks\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%s\t%d\t%d\n", st[i].name, st[i].rollno, st[i].marks);
    }
    printf("________\n");
}

//Defining bubble_sort function
void bubble_sort(student st[], int n)
{
    int i, j;
    student temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (st[j].marks > st[j + 1].marks)
            {
                //Swapping values
                temp = st[j];
                st[j] = st[j + 1];
                st[j + 1] = temp;
            }
        }
    }
}

//Defining insertion_sort function
void insertion_sort(student st[], int n)
{
    int k, i;
    student y;
    for (k = 0; k < n; k++)
    {
        y = st[k];
        for (i = k - 1; i >= 0 && y.rollno < st[i].rollno; i--)
        {
            st[i + 1] = st[i];
        }
        st[i + 1] = y;
    }
}