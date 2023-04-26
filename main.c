#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choices,plates=0,rate1=0,total=0,total1=0,rate2=0,cup=0,rate3=0,Bill=0;
    printf("Welcome to Hotel 'Nasta-Pani'\nMenu card:");
    printf("\n1 Samosa 20/-\n2 Dosa 30/-\n3 Basundi-chaha 15/-\n0 Bill:");

   A: printf("\n\nEnter your choices:");
    scanf("%d",&choices);

    switch (choices)
    {
    case 1:
         printf("Enter numbers of plates:");
    scanf("%d",&plates);
        printf("You have selected Samosa %d plates",plates);
        rate1=20;
         total1=plates*rate1;
         total+=total1;
        printf("\ntotal=%d",total1);

     goto A;

    case 2:
         printf("Enter numbers of plates:");
    scanf("%d",&plates);
        printf("You have selected Dosa %d plates",plates);
        rate2=30;
          total+=plates*rate2;
        printf("\ntotal=%d",total);

   goto A;

    case 3:
         printf("Enter numbers of cup:");
    scanf("%d",&cup);
        printf("You have selected Basundi-chaha %d cup",cup);
        rate3=15;

        total+=cup*rate3;
        printf("\ntotal=%d",total);

       // printf("%d",choices==4);
        goto A;
        break;
    default :
        printf("Sorry bhau thoda wait krna padega");
        goto A;

        case 0:

        printf("Bill:%d",total);
    }
    return 0;
}
