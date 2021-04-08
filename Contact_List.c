#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

typedef struct
{
    char name[60];
    long int number;

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
            system("CLS");
            printf("Contact Name: ");
            scanf("%[^\n]", contact[nContact].name);

            printf("Phone number: ");
            scanf("%d", &contact[nContact].number);
            getchar();
            nContact++;
            break;
        }
        case 2:
        {
            system("CLS");
            for(int j = 0; j < nContact; j++)
            {
                printf("Name: %s\n", contact[j].name);
                printf("Number: %d\n", contact[j].number);
                printf("---------------------------------\n");
            }
            break;
        }
        case 3:
        {
            system("CLS");
            printf("Choose a contact position to edit [0 - %d]: ", nContact);
            scanf("%d", &code);
            getchar();
            printf("Name: %s\n", contact[code].name);
            printf("NEW NAME: ");
            scanf("%[^\n]", contact[code].name);
            printf("Phone: %d\n", contact[code].number);
            printf("NEW NUMBER: ");
            scanf("%d", &contact[code].number);
            break;
        }
        case 4:
        {
            system("CLS");
            printf("Contacts closed!");
            break;
        }
        default:
            system("CLS");
            printf("\nInvalid option!");
            break;
        }

    }while(option != 4);
}

