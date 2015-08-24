1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
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
    printf("A matrix will be printed for few seconds and vanishes\nyou need to enter the element present at respective positions\nSo be ready.........\n\n \n");
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
          printf("enter the element at (%d,%d):",i+1,j+1);
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
        printf("\nYOU WON!!!!\n\n");
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
            printf("\n\ninvalid entry !!!\n\nexiting game ..");
            exit(0);
        }
    }
    else if (k == -1)
    {
 
        printf("\nwrong entry !!\n\nGAME OVER !!!!\n\n");
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
        printf("\n\ninvalid entry !!!\n\nexiting game..");
        exit(0);
    }
 
    }
    getch();
    return 0;
}
