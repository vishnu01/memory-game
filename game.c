//program needs conio.h header file. It is Operating System Dependent as it uses system('cls') which works in windows
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int s=0,y=1,d=1;
void delay (unsigned int secs) 
{
    int retTime = time(0)+secs;     // Get finishing time.
    while (time(0) < retTime);    // Loop until it arrives.
}
main()
{
    srand((unsigned)time(NULL));
    static int b[9];
    static long int a[30][30],i=1,k,l,j,m,z,c,e,q=5,q1;
    static char ch;
    if (d==1)
    {
    printf("A matrix will be printed for few seconds and vanishes\nYou need to enter the element present at respective positions\nSo be ready.........\n\n \n");
    printf("\ntimer running !!");
    while(q)
    {
    printf("\n\t %d",q);
    --q;
    delay(1);
    }
}
    system("cls");
    for (j=0;j<=s;j++)
    {
        for (i=0;i<=s;i++)
        {
        a[j][i]= rand()%9+1;
    }
    }
    printf("level %d\n",y);
    for(l=0;l<=s;l++)
    {
       for (m=0;m<=s;m++)
       {
          printf("%5d",a[l][m]);
       }
       printf("\n\n");
    }
    printf("\ntimer running !");
    q=abs(s)+1;
    q=4*q;
    while(q)
    {
    printf("\n\t %d",abs(q));
    --q;
    delay(1);
    }
    z=0;
    system("cls");
    //clrscr();
    k = 0;
    for (i=0;i<=s;i++)
    {
        for (j=0;j<=s;j++)
        {
          printf("Enter the Element at (%d,%d):",i+1,j+1);
          z= getch();
          z=z-48;
          if (a[i][j]==z)
          {
            ++k;
            printf("\n\n");
            continue;
           }
          else if (a[i][j]!=z)
          {
            k = -1;
            break;
           }
        // printf("\n");
          }
          }
 
    if (k==(s+1)*(s+1))
    {
    	
        printf("\nCorrect Guess !!!!\n\n");
        printf("press Y if you want to continue otherwise N :");
        fflush(stdin);
        // a = getch();
        // for(i=1;i<=1;i++)
        z = getch();
        if (z == 'Y' || z == 'y')
        {
              system("cls");
              d=0;
              ++s;
              printf("level %d",++y);
            main();
        }
        else if (z == 'N' || z == 'n')
        {
            printf("\n\nTHANK YOU for playing ");
            printf("\t\t\n\n A GAME BY VISHNU SHASHANK \n");
            getch();
            return 0;
        }
        else
        {
            printf("\n\nInvalid Entry !!!\n\nExiting Game ..");
            exit(0);
        }
    }
    else if (k == -1)
    {
 
        printf("\nWrong Entry !!\n\nGAME OVER !!!!\n\n");
        printf("press Y if you want to continue otherwise N : ");
        fflush(stdin);
        z = getch();
        if (z == 'Y' || z == 'y')
        {
              system("cls");
              d=0;
            main();
        }
        else if (z == 'N' || z == 'n')
        {
            printf("\n\nTHANK YOU for playing ");
            printf("\t\t\n\n A GAME BY VISHNU SHASHANK \n");
            getch();
            return 0;
        }
     
    else
    {
        printf("\n\nInvalid Entry !!!\n\nExiting Game..");
        exit(0);
    }
 
    }
    getch();
    return 0;
}
