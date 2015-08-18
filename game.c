#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
main()
{
    static int b[9];
    static long int a, i = 1, k;
    static char ch;
    printf
        ("A matrix will be printed for few seconds and vanishes\nyou need to enter the element present at respective positions\nSo be ready.........\n\n \n");
        fflush(stdin);
    for (i = 0; i < 3*100000000; i++);
    i = 1;
    system("cls");
    while (i <= 3)
    {
        // srand(time(NULL));
        a = rand() % 9 + 1;
        printf("%5d", a);
        b[i - 1] = a;
        i++;
    }
    printf("\n\n");
    fflush(stdin);
    while (i <= 6)
    {
        // srand(time(NULL));
        a = rand() % 9 + 0;
        printf("%5d", a);
        b[i - 1] = a;
        i++;
    }
    printf("\n\n");
    fflush(stdin);
    while (i <= 9)
    {
        // srand(time(NULL));
        a = rand() % 9 + 1;
        printf("%5d", a);
        b[i - 1] = a;
        i++;
    }
    printf("\n\n");
    fflush(stdin);
    for (i = 0; i < (1000000000); i++);
    system("cls");
    //clrscr();
    k = 0;
    for (i = 0; i < 9; i++)
    {
        printf("enter the element at %d :", i + 1);
        a = getch();
        a = a - 48;
        // scanf("%d", &a);
        if (b[i] == a)
        {
            k++;
            printf("\n\n");
            continue;
        }
        else if (b[i] != a)
        {
            k = -1;
            break;
        }
        // printf("\n");
    }
 
    if (k == 9)
    {
        printf("\nYOU WON!!!!\n\n");
        printf("press Y if you want to continue otherwise N :");
        fflush(stdin);
        // a = getch();
        // for(i=1;i<=1;i++)
        a = getch();
        if (a == 'Y' || a == 'y')
        {
              system("cls");
            //clrscr();
            main();
        }
        else if (a == 'N' || a == 'n')
        {
            printf("\n\nTHANK YOU for playing ");
            printf("\t\t\n\n A GAME BY VISHNU SHASHANK \n");
            getch();
            return 0;
        }
        else
        {
            printf("\n\ninvalid entry !!!\n\nexiting game ..");
            exit(0);
        }
    }
    else if (k == -1)
    {
 
        printf("\nwrong entry !!\n\nGAME OVER !!!!\n\n");
        printf("press Y if you want to continue otherwise N : ");
        fflush(stdin);
        a = getch();
        if (a == 'Y' || a == 'y')
        {
              system("cls");
            //clrscr();
            main();
        }
        else if (a == 'N' || a == 'n')
        {
            printf("\n\nTHANK YOU for playing ");
            printf("\t\t\n\n A GAME BY VISHNU SHASHANK \n");
            getch();
            return 0;
        }
     
    else
    {
        printf("\n\ninvalid entry !!!\n\nexiting game..");
        exit(0);
    }
 
    }
    getch();
    return 0;
}
