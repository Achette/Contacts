#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

typedef struct
{
    char nome[60];
    long int numero;

} Agenda;



int main()
{
    setlocale(LC_ALL,"");

    int NContato, codigo;

    NContato = 0;
    Agenda agenda[10];

    int opcao;


    do
    {

        printf("\n\n      AGENDA TELEF�NICA\n\n");
        printf("1 - Adicionar um contato\n");
        printf("2 - Visualizar todos os contatos\n");
        printf("3 - Alterar nome ou n�mero do contato\n");
        printf("4 - Sair\n");


        printf("\n\nDigite a op��o desejada: ");
        scanf("%d", &opcao);

        getchar();

        switch(opcao)
        {
        case 1:
        {
            system("CLS");
            printf("Nome do contato: ");
            scanf("%[^\n]", agenda[NContato].nome);

            printf("N�mero do telefone: ");
            scanf("%d", &agenda[NContato].numero);
            getchar();
            NContato++;
            break;
        }
        case 2:
        {
            system("CLS");
            for(int j = 0; j < NContato; j++)
            {
                printf("Nome: %s\n", agenda[j].nome);
                printf("N�mero: %d\n", agenda[j].numero);
                printf("---------------------------------\n");
            }
            break;
        }
        case 3:
        {
            system("CLS");
            printf("Digite a posi��o do contato que deseja alterar[0 - %d]: ", NContato);
            scanf("%d", &codigo);
            getchar();
            printf("Nome: %s\n", agenda[codigo].nome);
            printf("DIGITE NOVO NOME: ");
            scanf("%[^\n]", agenda[codigo].nome);
            printf("Telefone: %d\n", agenda[codigo].numero);
            printf("DIGITE NOVO N�MERO DE TELEFONE: ");
            scanf("%d", &agenda[codigo].numero);
            break;
        }
        case 4:
        {
            system("CLS");
            printf("Voc� saiu da agenda!");
            break;
        }
        default:
            system("CLS");
            printf("\nOp��o Inv�lida!");
            break;
        }

    }while(opcao != 4);
}

