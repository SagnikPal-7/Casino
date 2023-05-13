#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main()
{
    int t,amtt,gpc,bc,pc,oc,gc,cs,rc,yn,bet,x,sc,hb=1000000,pb,coun,a,b,c,d,e,f,c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,n,r;
    int R[18]={1,3,5,9,7,12,14,18,16,21,19,23,25,27,30,32,34,36};
    int B[18]={2,6,4,8,10,11,13,15,17,20,22,24,26,28,29,31,33,35};
    int r1[12]={3,6,9,12,15,18,21,24,27,30,33,36};
    int r2[12]={2,5,8,11,14,17,20,23,26,29,32,35};
    int r3[12]={1,4,7,10,13,16,19,22,25,28,31,34};
    
    printf("Welcome to the casino world!!!!\n");
    printf("\nRules and Regulations:-");
    printf("\n");
    printf("\nHow much dollar you have brought today:-$");
    scanf("%d",&amtt);
    printf("\nValues of the chips:-");
    printf("\n1. Green Poker Chips: $25");
    printf("\n2. Black Chips: $100");
    printf("\n3. Purple Poker Chips: $500");
    printf("\n4. Orange hue Chips: $1000");
    printf("\n5. Grey Chips: $5000");

    printf("\n\n\nEnter no of Green poker chips you want of exchange:-");
    scanf("%d",&gpc);
    printf("\nEnter no of Black chips you want of exchange:-");
    scanf("%d",&bc);
    printf("\nEnter no of Purple poker chips you want of exchange:-");
    scanf("%d",&pc);
    printf("\nEnter no of Orange hue chips you want of exchange:-");
    scanf("%d",&oc);
    printf("\nEnter no of Grey chips you want of exchange:-");
    scanf("%d",&gc);
	pb=(gpc*25)+(bc*100)+(pc*500)+(oc*1000)+(gc*5000);
    printf("\nTotal player balance:-$%d",pb);

    amtt=amtt-(gpc+bc+pc+oc+gc);
    printf("\nMoney you have left after exchanging with the tokens: $%d",amtt);
    printf("\nHouse Balance of casino:- $%d",hb);

    printf("\n\n\nEnter 1 for ROULETTE.");
    printf("\nEnter 2 for JackPot.");
    printf("\nEnter 3 to play dice rolling luck.");

    printf("\n\n\nENTER YOUR CHOICE:-");
    scanf("%d",&cs);

    switch(cs)
    {
        case 1:
            printf("\n\n\n\nWelcome to Roulette. This game contains numbers from 0-36.\n");
            printf("0 is of Green Colour.");
            printf("1,3,5,9,7,12,14,18,16,21,19,23,25,27,30,32,34,36 are all RED colours.\n");
            printf("2,6,4,8,10,11,13,15,17,20,22,24,26,28,29,31,33,35 are all BLACK colours.\n\n");
            
            printf("Board looks like:-\n");
            printf("  3 6 9 12 15 18 21 24 27 30 33 36\t2 to 1\n");
            printf("0 2 5 8 11 14 17 20 23 26 29 32 35\t2 to 1\n");
            printf("  1 4 7 10 13 16 19 22 25 28 31 34\t2 to 1\n\n");
            printf("  1st Twelve\t2nd Twelve\t3rd Twelve\n");
            printf("  1-18\tEven\tRED\tBLACK\tODD\t19-36\n\n\n");

            printf("Wayes to play Roulette.\n");
            printf("1.If you bet on 1-18 or EVEN or RED or BLACK or ODD or 19-36.:-\t You will get same amount of money we have bet along with our bet money.\n");
            printf("2.If you bet on 1st Twelve or 2nd Twelve or 3rd Twelve.:-\t You get double the amount of money we have bet along with our bet money.\n");
            printf("3.If you bet on one row i.e., 3-36 or 2-5 or 1-34.:-\t You get double the amount of money we have bet along with our bet money.\n");
            printf("4.If you bet on a single number we get the max prize pool.:-\t You get 35 times our bet money along with the our bet money.\n");
            printf("5.If you bet on 2 numbers adjacently at a time.:-\t You get 17 times the amount we have bet along with our bet money.\n");
            printf("6.If you bet on 3 number i.e., in a column at a time.:-\t You get 11 times the amount we have bet along with our bet amount.\n");
            printf("7.If you bet on 4 nnumber i.e., all adjacent to each other in a square form.:-\t You get 8 times the amount we have bet along with our bet amount.\n");
            printf("8.If you bet on 6 numbers i.e., in 2 columns at a time.:-\t You get 5 times the amount we have bet along with our bet amount.\n");
            printf("9.Other than this cases you will.");
            
            
            printf("\n\nEnter 1 for bet in 1-18. \nEnter 2 for bet in 19-36. \nEnter 3 for bet in EVEN.");
        	printf("\nEnter 4 for bet in ODD. \nEnter 5 for bet in RED. \nEnter 6 for bet in BLACK. \nEnter 7 for bet in 1st Twelve(1-12).");
            printf("\nEnter 8 for bet in 2nd Twelve(13-24). \nEnter 9 for bet in 3rd Twelve(25-36). \nEnter 10 for bet in Row 1(3-36).");
            printf("\nEnter 11 for bet in Row 2(2-35). \nEnter 12 for bet in Row 3(1-34). \nEnter 13 for bet in a single number. \nEnter 14 for bet in 2 numbers.");
            printf("\nEnter 15 for bet in 3 numbers. \nEnter 16 for bet in 4 numbers. \nEnter 17 bet in 6 numbers.");

            x=1;
            while(x)
            {
                printf("\n\nEnter 1 to play OR 0 to Exit.\n");
                printf("Enter your choice:-");
                scanf("%d",&yn);
                
                if(yn==1)
                {
                    x=1;
                    printf("Enter your choice for betting:-");
                    scanf("%d",&rc);
                    switch(rc)
                    {
                        case 1:
                            printf("You have choose to bet in 1-18.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            if(sc>=1 && sc<=18)
                            {
                                pb=pb+bet;
                                hb=hb-bet;
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 2:
                            printf("You have choose to bet in 19-36.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            if(sc>=19 && sc<=36)
                            {
                                pb=pb+bet;
                                hb=hb-bet;
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 3:
                            printf("You have choose to bet in EVEN.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            if(sc%2==0)
                            {
                                pb=pb+bet;
                                hb=hb-bet;
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 4:
                            printf("You have choose to bet in ODD.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            if(sc%2!=0)
                            {
                                pb=pb+bet;
                                hb=hb-bet;
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 5:
                            printf("You have choose to bet in RED.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            coun=0;
                            for(int i=0;i<18;i++)
                            {
                                if(R[i]==sc)
                                {
                                    coun=1;
                                    break;
                                }
                            }
                            if(coun==1)
                            {
                                pb=pb+bet;
                                hb=hb-bet;
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 6:
                            printf("You have choose to bet in BLACK.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            coun=0;
                            for(int i=0;i<18;i++)
                            {
                                if(B[i]==sc)
                                {
                                    coun=1;
                                    break;
                                }
                            }
                            if(coun==1)
                            {
                                pb=pb+bet;
                                hb=hb-bet;
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 7:
                            printf("You have choose to bet in 1st Twelve.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            if(sc>=1 && sc<=12)
                            {
                                pb=pb+(bet*2);
                                hb=hb-(bet*2);
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            break;
                        case 8:
                            printf("You have choose to bet in 2nd Twelve.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            if(sc>=13 && sc<=24)
                            {
                                pb=pb+(bet*2);
                                hb=hb-(bet*2);
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 9:
                            printf("You have choose to bet in 3rd Twelve.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            if(sc>=25 && sc<=36)
                            {
                                pb=pb+(bet*2);
                                hb=hb-(bet*2);
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 10:
                            printf("You have choose to bet in ROW 1.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            coun=0;
                            for(int i=0;i<12;i++)
                            {
                                if(r1[i]==sc)
                                {
                                    coun=1;
                                    break;
                                }
                            }
                            if(coun==1)
                            {
                                pb=pb+(bet*2);
                                hb=hb-(bet*2);
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 11:
                            printf("You have choose to bet in ROW 2.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            coun=0;
                            for(int i=0;i<18;i++)
                            {
                                if(r2[i]==sc)
                                {
                                    coun=1;
                                    break;
                                }
                            }
                            if(coun==1)
                            {
                                pb=pb+(bet*2);
                                hb=hb-(bet*2);
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 12:
                            printf("You have choose to bet in ROW 3.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            sc=rand()%(36+1-1)+1;
                            coun=0;
                            for(int i=0;i<18;i++)
                            {
                                if(r3[i]==sc)
                                {
                                    coun=1;
                                    break;
                                }
                            }
                            if(coun==1)
                            {
                                pb=pb+(bet*2);
                                hb=hb-(bet*2);
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 13:
                            printf("You have choose to bet in a single number.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            printf("Enter your number for bet:-");
                            scanf("%d",&a);
                            sc=rand()%(36+1-1)+1;
                            if(sc==a)
                            {
                                pb=pb+(bet*35);
                                hb=hb-(bet*35);
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 14:
                            printf("You have choose to bet in a Two number.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            printf("Enter your 2 numbers for bet:-");
                            scanf("%d %d",&a,&b);
                            sc=rand()%(36+1-1)+1;
                            if(sc==a || sc==b)
                            {
                                pb=pb+(bet*17);
                                hb=hb-(bet*17);
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 15:
                            printf("You have choose to bet in a Three number.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            printf("Enter your 3 numbers for bet:-");
                            scanf("%d %d %d",&a,&b,&c);
                            sc=rand()%(36+1-1)+1;
                            if(sc==a || sc==b || sc==c)
                            {
                                pb=pb+(bet*11);
                                hb=hb-(bet*11);
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 16:
                            printf("You have choose to bet in a Four number.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            printf("Enter your 4 numbers for bet:-");
                            scanf("%d %d %d %d",&a,&b,&c,&d);
                            sc=rand()%(36+1-1)+1;
                            if(sc==a || sc==b || sc==c || sc==d)
                            {
                                pb=pb+(bet*8);
                                hb=hb-(bet*8);
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                        case 17:
                            printf("You have choose to bet in a Four number.\n");
                            printf("Enter How much dollar you want to bet:-");
                            scanf("%d",&bet);
                            printf("Enter your 6 numbers for bet:-");
                            scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
                            sc=rand()%(36+1-1)+1;
                            if(sc==a || sc==b || sc==c || sc==d || sc==e || sc==f)
                            {
                                pb=pb+(bet*5);
                                hb=hb-(bet*5);
                                printf("Win!!!\n");
                                printf("Player balance is %d and House balance is %d",pb,hb);
                            }
                            else
                            {
                                pb=pb-bet;
                                hb=hb+bet;
                                printf("Lost!!!\n");
                                printf("Player balance is %d and House Balance is %d",pb,hb);
                            }
                            break;
                    }
                }
                }
				else
                {
                    x=0;
                    continue;
                }

              }
              break;
            
        case 2:
            printf("\n\n\n\n Welcome to Jackpot!!!");
            printf("\n\nWays to play Jackpot:-\n");
            printf("1.If after spin you got 999:- \tYou will get the full House Balance from the Casino along with your bet ammount.\n");
            printf("2.If after spin you got XXX:- \tYou will get 3 times your bet amount along with your bet amount.\n");
            printf("3.If after spin you got XXN:- \tYou will get 2 times your bet amount along with your bet amount.\n");
            printf("3.If after spin you got XYZ:- \tYou will loose the bet amount.\n");

            x=1;
            while(x)
            {
                c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
                printf("\n\nEnter 1 to play and 0 to exit.\n");
                printf("Enter Your choice:-");
                scanf("%d",&yn);
                if(yn==1)
                {
                    x=1;
                    printf("\nEnter amount you want to bet:-\n");
                    scanf("%d",&bet);
                    sc=rand()%(999+1-1)+1;
                    n=sc;
                    if(n==999)
                    {
                        pb=pb+hb;
                        hb=0;
                        printf("\nJackPot Win!!!!!\n");
                        printf("Player Balance is %d and House balance is %d.\n",pb,hb);
                    }
                    else
                    {
                        while(n!=0)
                        {
                            r=n%10;
                            if(r==0)
                            {
                                c0++;
                            }
                            if(r==1)
                            {
                                c1++;
                            }
                            if(r==2)
                            {
                                c2++;
                            }
                            if(r==3)
                            {
                                c3++;
                            }
                            if(r==4)
                            {
                                c4++;
                            }
                            if(r==5)
                            {
                                c5++;
                            }
                            if(r==6)
                            {
                                c6++;
                            }
                            if(r==7)
                            {
                                c7++;
                            }
                            if(r==8)
                            {
                                c8++;
                            }
                            if(r==9)
                            {
                                c9++;
                            }
                            n/=10;
                        }

                        if(c0==2||c1==2||c3==2||c4==2||c5==2||c6==2||c7==2||c8==2||c9==2)
                        {
                            pb=pb+(bet*2);
                            hb=hb-(bet*2);
                            printf("Win!!!\n");
                            printf("Player Balance is %d and House balance is %d.\n",pb,hb);
                        }
                        else if(c0==3||c1==3||c3==3||c4==3||c5==3||c6==3||c7==3||c8==3)
                        {
                            pb=pb+(bet*3);
                            hb=hb-(bet*3);
                            printf("Win!!!\n");
                            printf("Player Balance is %d and House balance is %d.\n",pb,hb);
                        }
                        else
                        {
                            pb=pb-bet;
                            hb=hb+bet;
                            printf("Lost!!!\n");
                            printf("Player Balance is %d and House balance is %d.\n",pb,hb);
                        }
                    }

                    
                }
                else
                {
                    x=0;
                    continue;
                }
            }
            break;

        case 3:
            printf("\n\nWelcome to Dice Playing Luck game.\n\n");
            printf("Wayes to play the game.:-\n");
            printf("Banker will through the die, guess the number to fall before throughing the dice. your guess is correct. IF:-\n");
            printf("\n1 comes then bet money along with the same bet amount.");
            printf("\n2 comes then you will get 2 time the bet amount.");
            printf("\n3 comes then you will get 3 time the bet amount.");
            printf("\n4 comes then you will get 4 time the bet amount.");
            printf("\n5 comes then you will get 5 time the bet amount.");
            printf("\n6 comes then you will get 6 time the bet amount.\n");

            x=1;
            while(x)
            {
                printf("\nEnter 1 for playing and Enter 0 to exit.");
                scanf("%d",&yn);
                if(yn==1)
                {
                    x=1;
                    printf("\nEnter Amount you want to bet:-");
                    scanf("%d",&bet);
                    printf("\nEnter the number you thing will fall:-");
                    scanf("%d",&a);
                    sc=rand()%(6+1-1)+1;
                    if(sc==a)
                    {
                        pb=pb+bet;
                        hb=hb-bet;
                        printf("Win!!!\n");
                        printf("Player balance is %d and House balance is %d",pb,hb);
                    }
                    else
                    {
                        pb=pb-bet;
                        hb=hb+bet;
                        printf("Lost!!!\n");
                        printf("Player balance is %d and House Balance is %d",pb,hb);
                    }

                }
                else
                {
                    x=0;
                    continue;
                }
            }
            break;
        
        default:
            printf("\nMore games are coming soon!!!\n\n");
            break;
    }

    printf("\n\nFinal Player balance is %d\n Final House Balance is %d",pb,hb);
}
