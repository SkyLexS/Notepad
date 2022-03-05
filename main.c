#include <stdio.h>
#include <stdlib.h>

int main()
{while(1!=0)
{   printf("[==NOTES==]\n");
    printf("1.Fila noua\n");
    printf("2.Modificati notita\n");
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
    {printf("[==MODIFICATI NOTITA==]\n");
    printf("1.Ionutcuceritorul.txt\n");
    printf("2.Ip-uri.txt\n");
    printf("3.Numere de telefon.txt\n");
    printf("4.Johnutz.txt\n");
    int alegere_notita=0;
    while(alegere_notita<1 || alegere_notita>4)
        {printf("Introdu notita ce doresti sa o modifici:");
        scanf("%d",&alegere_notita);

        }
    }
else if(alegere == 3)
    {printf("[==SALVATI NOTITA DORITA==]\n");}
else
    {printf("[==STERGERE==]\n");
    system("pause");
    }
    system("cls");
}

    return 0;
}
