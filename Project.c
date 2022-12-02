#include <stdio.h>
#include <string.h>

void login();
void customerDetails();

void customerDetails()
{
    struct CustomerDetails
    {
        int roomnumber;
        char name[50];
        char address[100];
        int mobilenum;
        char nationality[50];
        char email[100];
        int staytime;
        char arrivaldate[50];
    }details;

    printf("Room Number : ");
    scanf("%d", &details.roomnumber);
    printf("Name : ");
    scanf("%s", &details.name);
    printf("Address : ");
    scanf("%s", &details.address);
    printf("Mobile Number : ");
    scanf("%d", &details.mobilenum);
    printf("Nationality : ");
    scanf("%s", &details.nationality);
    printf("Email : ");
    scanf("%s", &details.email);
    printf("Stay Duration (In days) : ");
    scanf("%d", &details.staytime);
    printf("Arrival Date : ");
    scanf("%s", &details.arrivaldate);

    FILE *buffer;
    buffer=fopen ("CustomerDetails.txt", "w");

    fprintf(buffer, "------------------------------------------------------");
    fprintf(buffer, "\nRoom No.   Name        Address             Mob. No.        Nationality     Email           Stay Duration   Arrival Date");
    fprintf(buffer, "\n%d  %s       %s           %d       %s       %s           %d   %s", details.roomnumber, details.name, details.address, details.mobilenum, details.nationality, details.email, details.staytime, details.arrivaldate);
    fprintf(buffer, "");
    fprintf(buffer, "");
}

void login()
{
    int username;
    int pass;
    int x;

    printf("-----------------------LOGIN CONSOLE-----------------------");
    printf("\n                    Username : ");
    scanf("%d", &username);
    printf("                    Password : ");
    scanf("%d", &pass);

    if (pass==2021 && username==232323)
    {   
        system("cls");
        printf("\n                  LOGIN SUCCESSFULL!");
        printf("\nEnter any number to proceed : ");
        scanf("%d", &x);
        system("cls");
        customerDetails();

    }
    else
    {   
        system("cls");
        printf("\n                  Wrong Login Credentials!");
    }
    
}

int main()
{
    login();
    
}