#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int menu();
void register_();
void login();
void mainProgramCaling(char email[50], char pass[50]);
void cashIn(char email[50], char pass[50]);
void cashOut(char email[50], char pass[50]);
void showInfo(char email[50], char pass[50]);
void delete(char email[50], char pass[50]);

typedef struct age
{
    int day;
    int month;
    int year;
} Age;

typedef struct customer
{
    char name[50];
    Age birthday;
    char email[50];
    char password[50];
    int balance;
} Customer;

int menu()
{
    int choice;

    while (1) // infinity loop
    {
        printf("\n*****Welcome to UBANK*****\n");
        printf("1. Login\n");
        printf("2. Register\n");
        printf("0. Exit\n");
        printf("Please enter your choice (0-2): ");

        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            login();
            break;

        case 2:
            register_();
            break;

        case 0:
            return 0;

        default:
            printf("Invalid input! Please put a valid input.\n");
        }
    }
}

void register_()
{
    FILE *file = fopen("Data.txt", "a");

    Customer c;

    printf("\n*****Registration*****\n");
    printf("Enter 0 to go back.");
    printf("\nName: ");
    fgets(c.name, sizeof(c.name), stdin);
    c.name[strcspn(c.name, "\n")] = '\0';

    int back = strcmp("0", c.name); // Back feature
    if (back == 0)
        menu();

    printf("\nBirthday: ");
    printf("\nBirth-day: ");
    scanf("%d", &c.birthday.day);
    printf("\nBirth-month: ");
    scanf("%d", &c.birthday.month);
    printf("\nBirth-year: ");
    scanf("%d", &c.birthday.year);
    printf("\nEmail: ");
    scanf("%s", &c.email);
    printf("\nPassword: ");
    scanf("%s", &c.password);
    c.balance = 500;

    printf("\n");

    fprintf(file, "%s %d %d %d %s %s %d\n", c.name, c.birthday.day, c.birthday.month, c.birthday.year, c.email, c.password, c.balance); // Printing in file

    fclose(file);

    login();
}

void login()
{
    FILE *file = fopen("Data.txt", "r");
    char email[50], pass[50];

    printf("\n*****Login*****\n");
    printf("Enter 0 to go back.\n");
    printf("\nEmail: ");
    scanf("%s", &email);

    int back = strcmp("0", email); // Back feature
    if (back == 0)
        menu();

    printf("\nPassword: ");
    scanf("%s", &pass);
    getchar();

    while (!feof(file))
    {
        Customer c;
        
        //Reading from file
        fscanf(file, "%s ", c.name);
        fscanf(file, "%i ", &c.birthday.day);
        fscanf(file, "%i ", &c.birthday.month);
        fscanf(file, "%i ", &c.birthday.year);
        fscanf(file, "%s ", c.email);
        fscanf(file, "%s ", c.password);
        fscanf(file, "%i ", &c.balance);

        int emailcheck = strcmp(c.email, email);
        int passcheck = strcmp(c.password, pass);

        if (emailcheck == 0 && passcheck == 0)
        {
            fclose(file);
            mainProgramCaling(email, pass);
        }
        else
            printf("\nInvalid email or password!\n");
    }

    fclose(file);
}

void mainProgramCaling(char email[50], char pass[50])
{
    int choice;

    while (1)
    {
        printf("\n*****What do you want to do?*****\n");
        printf("1. Cash In\n");
        printf("2. Cash Out\n");
        printf("3. Show information\n");
        printf("4. Log out\n");
        printf("5. DELETE ACCOUNT!\n");
        printf("Please enter your choice (1-5): ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            cashIn(email, pass);
            break;

        case 2:
            cashOut(email, pass);
            break;

        case 3:
            showInfo(email, pass);
            break;

        case 4:
            menu();
            break;

        case 5:
            delete (email, pass);
            break;

        default:
            printf("\nInvalid input! Please put a valid input.\n");
        }
    }
}

void cashIn(char email[50], char pass[50])
{
    int amount;
    printf("\n*****How much you want cash in?*****\n");
    printf("\nAmount: ");
    scanf("%d", &amount);

    FILE *ofile = fopen("Data.txt", "r");
    FILE *file = fopen("Data-new.txt", "w");

    while (!feof(ofile))
    {
        Customer c;

        fscanf(ofile, "%s ", c.name);
        fscanf(ofile, "%i ", &c.birthday.day);
        fscanf(ofile, "%i ", &c.birthday.month);
        fscanf(ofile, "%i ", &c.birthday.year);
        fscanf(ofile, "%s ", c.email);
        fscanf(ofile, "%s ", c.password);
        fscanf(ofile, "%i ", &c.balance);

        int emailcheck = strcmp(c.email, email);
        int passcheck = strcmp(c.password, pass);

        if (emailcheck == 0 && passcheck == 0)
        {
            c.balance += amount;
            fprintf(file, "%s %d %d %d %s %s %d\n", c.name, c.birthday.day, c.birthday.month, c.birthday.year, c.email, c.password, c.balance);
        }
        else
            fprintf(file, "%s %d %d %d %s %s %d\n", c.name, c.birthday.day, c.birthday.month, c.birthday.year, c.email, c.password, c.balance);
    }

    fclose(ofile);
    fclose(file);

    remove("Data.txt");
    rename("Data-new.txt", "Data.txt");
}

void cashOut(char email[50], char pass[50])
{
    int amount;
    printf("\n*****How much you want cash out?*****\n");
    printf("\nAmount: ");
    scanf("%d", &amount);

    FILE *ofile = fopen("Data.txt", "r");
    FILE *file = fopen("Data-new.txt", "w");

    while (!feof(ofile))
    {
        Customer c;

        fscanf(ofile, "%s ", c.name);
        fscanf(ofile, "%i ", &c.birthday.day);
        fscanf(ofile, "%i ", &c.birthday.month);
        fscanf(ofile, "%i ", &c.birthday.year);
        fscanf(ofile, "%s ", c.email);
        fscanf(ofile, "%s ", c.password);
        fscanf(ofile, "%i ", &c.balance);

        int emailcheck = strcmp(c.email, email);
        int passcheck = strcmp(c.password, pass);

        if (emailcheck == 0 && passcheck == 0)
        {
            if (c.balance == 0)
            {
                printf("\nYou have no balance in account.\n");
                printf("Please CASH-IN some money in order to CASH-OUT.\n");
            }
            else if (c.balance < 0)
            {
                printf("\nYou are in loan.\n");
                printf("Please CASH-IN some money in order to pay up yoor loan.\n");
            }
            else
                c.balance -= amount;
            fprintf(file, "%s %d %d %d %s %s %d\n", c.name, c.birthday.day, c.birthday.month, c.birthday.year, c.email, c.password, c.balance);
        }
        else
            fprintf(file, "%s %d %d %d %s %s %d\n", c.name, c.birthday.day, c.birthday.month, c.birthday.year, c.email, c.password, c.balance);
    }

    fclose(ofile);
    fclose(file);

    remove("Data.txt");
    rename("Data-new.txt", "Data.txt");
}

void showInfo(char email[50], char pass[50])
{
    FILE *file = fopen("Data.txt", "r");
    while (!feof(file))
    {
        Customer c;

        fscanf(file, "%s ", c.name);
        fscanf(file, "%i ", &c.birthday.day);
        fscanf(file, "%i ", &c.birthday.month);
        fscanf(file, "%i ", &c.birthday.year);
        fscanf(file, "%s ", c.email);
        fscanf(file, "%s ", c.password);
        fscanf(file, "%i ", &c.balance);

        int emailcheck = strcmp(c.email, email);
        int passcheck = strcmp(c.password, pass);

        if (emailcheck == 0 && passcheck == 0)
        {
            printf("\nName: %s\n", c.name);
            printf("\nBirth-day: %d\n", c.birthday.day);
            printf("\nBirth-month: %d\n", c.birthday.month);
            printf("\nBirth-year: %d\n", c.birthday.year);
            printf("\nE-mail: %s\n", c.email);
            printf("\nPassword: %s\n", c.password);
            printf("\nBalance: %d\n", c.balance);
        }
    }

    fclose(file);
}

void delete(char email[50], char pass[50])
{

    FILE *ofile = fopen("Data.txt", "r");
    FILE *file = fopen("Data-new.txt", "w");

    while (!feof(ofile))
    {
        Customer c;

        fscanf(ofile, "%s ", c.name);
        fscanf(ofile, "%i ", &c.birthday.day);
        fscanf(ofile, "%i ", &c.birthday.month);
        fscanf(ofile, "%i ", &c.birthday.year);
        fscanf(ofile, "%s ", c.email);
        fscanf(ofile, "%s ", c.password);
        fscanf(ofile, "%i ", &c.balance);

        int emailcheck = strcmp(c.email, email);
        int passcheck = strcmp(c.password, pass);

        if (emailcheck != 0 || passcheck != 0)
        {
            fprintf(file, "%s %d %d %d %s %s %d\n", c.name, c.birthday.day, c.birthday.month, c.birthday.year, c.email, c.password, c.balance);
        }
    }

    fclose(ofile);
    fclose(file);

    remove("Data.txt");
    rename("Data-new.txt", "Data.txt");
    menu();
}

int main()
{
    menu(); // Starting the program
}

/*
    **test case **

    shifty
    26
    6
    2001
    shifty.ishmam@gmail.com
    shifty

    rock
    1
    1
    2000
    rock@gmail.com
    rock

*/