#include <stdio.h>
#include <stdlib.h>

int main()
{while(1!=0)
{   printf("[==NOTES==]\n");
    printf("1.Fila noua\n");
    printf("2.Optiuni\n");
    printf("3.Salvati notita\n");
    printf("4.Stergere\n");
int alegere=0;
while(alegere < 1 || alegere > 4)
    {printf("Introduceti o alegere:");
    scanf("%d",&alegere);
    }
system("cls");
if(alegere == 1)
    printf("[==FILA NOUA\n==]");
else if(alegere == 2)
    {printf("[==OPTIUNI==]\n");
    printf("1.Cautare fila\n");
    printf("2.Modificare fila\n");
    int alegere_optiune=0;
    while(alegere_optiune<1 || alegere_optiune>3)
        {printf("Alege optiunea dorita:");
        scanf("%d",&alegere_optiune);
        }
        system("cls");
        if(alegere_optiune==1)
            {printf("[==CAUTARE FILA==]\n");
            char str_nume_fila[50];
            while(str_nume_fila)
            {printf("Introdu numele filei pe care doresti sa o cauti:");
            scanf("%s",&str_nume_fila);
            }
            }
        else if (alegere_optiune==2)
            {printf("[==MODIFICARE FILA==]\n");
            printf("1.Ionutcuceritorul.txt\n");
            printf("2.Ip-uri.txt\n");
            printf("3.Numere de telefon.txt\n");
            printf("4.Johnutz.txt\n");
            int mod_fila=0;
            while(mod_fila<1 || mod_fila>5)
            {printf("Introdu numarul notitei pe care doresti sa o modifici:");
            scanf("%d",&mod_fila);
            }
            }
    }
else if(alegere == 3)
    {printf("[==SALVATI NOTITA DORITA==]\n");}
else
    {printf("[==STERGERE==]\n");
        printf("1.Ionutcuceritorul.txt\n");
        printf("2.Ip-uri.txt\n");
        printf("3.Numere de telefon.txt\n");
        printf("4.Johnutz.txt\n");
    int ster_fila=0;
    while(ster_fila<1 || ster_fila>5)
    {printf("Introduceti numarul notitei pe care doriti sa o stergeti:");
    scanf("%d",&ster_fila);
    }
    }
    system("cls");
}

    return 0;
}
