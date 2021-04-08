#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

typedef struct
{
    char name[60];
    long number;

} Contacts;



int main()
{
    setlocale(LC_ALL,"");

    int nContact, code;

    nContact = 0;
    Contacts contact[10];

    int option;


    do
    {

        printf("\n\n   TELEPHONE BOOK\n\n");
        printf("1 - Add a new contact\n");
        printf("2 - View all contacts\n");
        printf("3 - Edit contact\n");
        printf("4 - Exit\n");


        printf("\n\nChoose an option: ");
        scanf("%d", &option);

        getchar();

        switch(option)
        {
        case 1:
        {
            system("clear");
            printf("Contact Name: ");
            scanf("%[^\n]", contact[nContact].name);

            printf("Phone number: ");
            scanf("%ld", &contact[nContact].number);
            getchar();
            nContact++;
            break;
        }
        case 2:
        {
            system("clear");
            for(int j = 0; j < nContact; j++)
            {
                printf("Name: %s\n", contact[j].name);
                printf("Number: %ld\n", contact[j].number);
                printf("---------------------------------\n");
            }
            break;
        }
        case 3:
        {
            system("clear");
            printf("Choose a contact position to edit [0 - %d]: ", nContact - 1);
            scanf("%d", &code);
            getchar();
            printf("Name: %s\n", contact[code].name);
            printf("NEW NAME: ");
            scanf("%[^\n]", contact[code].name);
            printf("Phone: %ld\n", contact[code].number);
            printf("NEW NUMBER: ");
            scanf("%ld", &contact[code].number);
            break;
        }
        case 4:
        {
            system("clear");
            printf("Contacts closed!");
            break;
        }
        default:
            system("clear");
            printf("\nInvalid option!");
            break;
        }

    }while(option != 4);
}

