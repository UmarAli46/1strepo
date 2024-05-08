#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char name1[100];
    char name2[] = "umar";
    int pass1;
    int pass2 = 12345;
    int marks = 0;
    float percentage;

    printf("Enter your Name: ");
    scanf("%s", name1);

    if (strcmp(name1, name2) != 0)
    {
        printf("Your name is wrong\n");
        return;
    }

    printf("Enter your password: ");
    scanf("%d", &pass1);

    if (pass1 != pass2)
    {
        printf("Sorry, your password is wrong\n");
        return;
    }

    printf("\t\t\t\t.....Welcome to the Quiz.....\n");
    printf("1. Press any key for the next question\n");
    printf("2. Marks less than 50%% will fail the test\n");

    getchar();
    system("clear || cls");

    char ans;

    printf("Q.1 Which is the first state to join Pakistan?\n");
    printf("a) Shikarpur\n");
    printf("b) Bahawulpur\n");
    printf("c) Kashmir\n");
    printf("d) Chagi\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if (ans == 'B' || ans == 'b')
    {
        printf("\t\t\t Your answer is right\n");
        marks++;
    }
    else
    {
        printf("\t\t\t Your answer is wrong\n");
    }
    getchar();
    system("clear || cls");

    // ... (remaining questions and answers)
    
    printf("\nQ.2 What is the capital of Turkey?\n");
    printf("a) Istanbul\n");
    printf("b) Ankara\n");
    printf("c) Islamabad\n");
    printf("d) Jerusalem\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if (ans == 'b' || ans == 'B')
    {
        printf("\t\t\t your answer is right\n");
        marks++;
    }
    else
    {
        printf("\t\t\t\t your answer is wrong\n");
    }

    getchar(); // Wait for key press
    system("cls");

    printf("\nQ.3 Which city is the gateway of Pakistan?\n");
    printf("a) Karachi\n");
    printf("b) Lahore\n");
    printf("c) Islamabad\n");
    printf("d) Peshawar\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if (ans == 'a' || ans == 'A')
    {
        printf("\t\t\t your answer is right\n");
        marks++;
    }
    else
    {
        printf("\t\t\t your answer is wrong\n");
    }

    getchar(); // Wait for key press
    system("cls");
    
    printf("\nQ.4 Where is Chaghi?\n");
    printf("a) Sindh\n");
    printf("b) KPK\n");
    printf("c) Punjab\n");
    printf("d) Balochistan\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if (ans == 'd' || ans == 'D')
    {
        printf("\t\t\t your answer is right\n");
        marks++;
    }
    else
    {
        printf("\t\t\t your answer is wrong\n");
    }

    getchar(); // Wait for key press
    system("cls");

printf("\nQ.5 Which is the largest democratic country in the world?\n");
printf("a) America\n");
printf("b) China\n");
printf("c) India\n");
printf("d) Pakistan\n");
printf("Enter your answer: ");
scanf(" %c", &ans);

if (ans == 'c' || ans == 'C')
{
    printf("\t\t\t your answer is right\n");
    marks++;
}
else
{
    printf("\t\t\t your answer is wrong\n");
}

getchar(); // Wait for key press
system("cls");

printf("\nQ.6 What is meant by WTO?\n");
printf("a) World Trade Organization\n");
printf("b) World Transport Organization\n");
printf("c) World Technology Organization\n");
printf("d) N-O-T\n");
printf("Enter your answer: ");
scanf(" %c", &ans);

if (ans == 'a' || ans == 'A')
{
    printf("\t\t\t your answer is right\n");
    marks++;
}
else
{
    printf("\t\t\t your answer is wrong\n");
}


printf("\nQ.7 What is the currency of Ireland?\n");
printf("a) Irish Rupee\n");
printf("b) Euro\n");
printf("c) Dollar\n");
printf("d) Pound\n");
printf("Enter your answer: ");
scanf(" %c", &ans);

if (ans == 'b' || ans == 'B')
{
    printf("\t\t\t your answer is right\n");
    marks++;
}
else
{
    printf("\t\t\t your answer is wrong\n");
}

getchar(); // Wait for key press
system("cls");

printf("\nQ.8 When was Mossad founded?\n");
printf("a) 1947\n");
printf("b) 1948\n");
printf("c) 1949\n");
printf("d) 1999\n");
printf("Enter your answer: ");
scanf(" %c", &ans);

if (ans == 'c' || ans == 'C')
{
    printf("\t\t\t your answer is right\n");
    marks++;
}
else
{
    printf("\t\t\t your answer is wrong\n");
}

getchar(); // Wait for key press
system("cls");

printf("\nQ.9 Who was the chairman of the Boundary Commission?\n");
printf("a) Lord Mountbatten\n");
printf("b) Sir Redcliff\n");
printf("c) Lord Wavell\n");
printf("d) Allama Iqbal\n");
printf("Enter your answer: ");
scanf(" %c", &ans);

if (ans == 'b' || ans == 'B')
{
    printf("\t\t\t your answer is right\n");
    marks++;
}
else
{
    printf("\t\t\t your answer is wrong\n");
}

getchar(); // Wait for key press
system("cls");

printf("\nQ.10 When was Facebook founded?\n");
printf("a) 1998\n");
printf("b) 1994\n");
printf("c) 2002\n");
printf("d) 2004\n");
printf("Enter your answer: ");
scanf(" %c", &ans);

if (ans == 'd' || ans == 'D')
{
    printf("\t\t\t your answer is right\n");
    marks++;
}
else
{
    printf("\t\t\t your answer is wrong\n");
}

getchar(); // Wait for key press

getchar(); // Wait for key press
system("cls");
    printf("........ Your Marks are: %d ........\n", marks);
    percentage = (marks * 100) / 10;
    printf("........ Your percentage is: %.2f%% ........\n", percentage);

    if (percentage <= 50)
    {
        printf("........ Sorry, you lose ........\n");
    }
    else
    {
        printf("........ Congratulations, you win ........\n");
    }
}

