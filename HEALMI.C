#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
struct heal
{ int hqno;
char hq[100];
};
void t41();
void t42();
void t43();
void t44();
void t45();
void t46();
void t47();
void t48();
void t49();
void t410();
void t411();
void t412();
void t413();
void t414();
void t415();
void t416();
void t417();
void t418();
void t419();
void t420();
void test4();
void m1();
void m2();
void m3();
void m4();
void m5();
void m6();
void m7();
void m8();
void m9();
void m10();
void m11();
void m12();
void m13();
void ci();
void re();
void tr();
int menu();
void test1();
void test2();
void test3();
void test4();
void exetest4();
void htest();
int login();
void lowei();
void stroop();
void gawei();
void main2();
void gitime();
void oversc();
void bmi();
void getinfo();
void healthtest();
void mindtest();
void exemind();
void exehealth();
int ch=0,pwd=0; char name[100],srn[100]; float weight=0,foot=0,inch=0;
float overscr=0,rwei=0,refoot=0,rein=0,reinch=0,bm=0; int p=0,i,j,bk=0,bmch,th;

void main2()
{  clrscr();
 login();
if(pwd==1920)
{clrscr();
{while(1)
{switch(menu())
{case 1: healthtest(); break;
case 2: mindtest(); break;
case 3: oversc(); break;
case 4: break;
case 5: gitime();
	exit(0); break;
default: printf("pls enter valid choice number\n");}
}   }}
else
{ clrscr();
printf("\n\n\n\n\n\t\tTry again!");
delay(2000);
main2();
}
}
int menu()
{ clrscr();
textcolor(YELLOW);
printf("ENTER YOUR CHOICE\n");
printf("1.TAKE HEALTH TEST\n");
printf("2.TAKE MIND TESTS\n");
printf("3.CHECK YOUR SCORE\n");
printf("4.CHECK IF YOU ARE QUALIFIED IN THIS TEST OR NOT?\n");
printf("5.EXIT\n");
scanf("%d",&ch);
return(ch);
}
int login()
{ clrscr();
printf("\t\t\t\n\n\n\n\n\n\n\t\tEnter your name:- ");
gets(name);
  printf("\t\t\t\n\n\n\n\n\n\n\t\tEnter 4 digit pin:- ");
  scanf("%d",&pwd);
  return(pwd);
}
void mindtest()
{clrscr();
printf("NOTE:- THERE ARE 4 TESTS AND YOU CAN QUIT AFTER COMPLETING EACH TEST\n");
printf("1.START MIND TEST\n");
printf("2.<< BACK TO MAIN MENU\n");
scanf("%d",&ch);
if(ch==1)
{exemind();}
else if(ch==2)
{menu();}
}
void healthtest()
{clrscr();
printf("NOTE:- ANSWER ALL QUESTIONS CORRECTLY WITHIN 5 SECONDS!\n\n");
printf("1.START HEALTH TEST\n");
printf("2.<<BACK TO MAIN MENU\n");
scanf("%d",&ch);
if(ch==1)
{exehealth();
}
else if(ch==2)
{menu();
}}

void oversc()
{ clrscr();
printf("\n\n\tYour Overall Points =%d",p);
scanf("%c",&ch);
if(ch==1)
menu();
}

void main()
{ clrscr();
 printf("\n\n\n\n\n\n\n\n\n\n\t\t\t---------------------------------");
  printf("\n\t\t\t| Welcome To HealMi Testor! |");
  printf("\n\t\t\t---------------------------------");
  delay(2000);
  main2();
}
void gitime()
{ clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\t\t--------------------------------------------");
 printf("\n\t\t| ThankYou for Giving Us Your Valueable Time |");
 printf("\n\t\t--------------------------------------------");
 delay(2000);}


void bmi()
{clrscr();
printf("\n%s Enter your Approx. Weight in kg",name);
scanf("%f",&weight);
printf("Enter your Approx. Height:- ");
printf("foot=");
scanf("%f",&foot);
printf("inch=");
scanf("%f",&inch);
rwei=weight*2.205;
refoot=foot*12;
rein=inch;
reinch=refoot+rein;
bm=(rwei*703)/(reinch*reinch);
printf("BMI is %f",bm);
if(bm<18.5)
{printf("\nyou are underweight,you need to  gain weight\n\n"); }
else if((bm>=18.5)&&(bm<=24.9))
printf("\nCongraturations!! You Are Within Normal Weight Range");
else
{printf("\nyou are Overweight,you need to lose weight\n\n");  }
delay(2000);
return;
}
void stroop()
{
menu();
}
void exehealth()
{ int ch;
clrscr();
FILE *p;
 struct heal b[100];
 int i;
p=fopen("heal.txt","r");
if(p==NULL)
{printf("not able to open file");
 exit(1);
 }
 fread(b,sizeof(struct heal),100,p);
 for(i=0;i<=11;i++)
 { switch(i)
  { case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6: clrscr();
	    printf("\nQuestion %d %s",i+1,b[i].hq);
	    printf("\n1. MOST OF TIMES \n2. SOMETIMES \n3. NEVER\n\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    p=p+10;
	    else if(ch==2)
	    p=p+5;
	    clrscr();
	    break;
    case 7: clrscr();
	    printf("\nQuestion %d %s",i+1,b[i].hq);
	    printf("\n1.YES \n2.NO \n\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    p=p+10;
	    clrscr();
	    break;
    case 8: printf("NOW ENTER YOUR SOME DETAILS\n\n\n"); delay(1000);
	    bmi();break;

    case 10: clrscr();
	     printf("\nQuestion %d %s",i+1,b[i].hq);
	     printf("\n1.ONE \n2.MORE THAN ONE\n3.NONE");
	     scanf("%d",&ch);
	     if(ch==1)
	    p=p+5;
	    else if(ch==3)
	    p=p+10;
	    break;
    case 11:
    case 9:
	    clrscr();
	    printf("\nQuestion %d%s",i+1,b[i].hq);
	    printf("\n1.TRUE \n2. FALSE\n");
	    scanf("%d",&ch);
	    if(ch==1)
	    p=p+10;
	    clrscr(); break;


 }

 }
 fclose(p);
 clrscr();
 printf("\n\nTHIS TEST IS OVER NOW\\tRETURNING....\n");
 delay(1000);
 menu();
}
void exemind()
{clrscr();
printf("\nTHIS IS FIRST TEST WHICH CONTAINS ONLY 2 QUESTIONS\n FOR EACH QUESTIONS YOU WILL HAVE 10 SECONDS TO ANSWER\n");
test1();
}
void test1()
{ clrscr();
printf("\nQuestion 1:Select the number that best completes the analogy:-\n10:6::3:?\n");
printf("\n1. 2\n2. 1\n3. -1\n4. 7\n");
scanf("%d",&ch);
if(ch==3)
p=p+10;
clrscr();
printf("\nQuestion 2:Fill the next number in this series..\n2,5,8,11,12,15,18,21,...\n");
scanf("%d",&ch);
if(ch==24)
p=p+10;
clrscr();
printf("\nThis test is over now!");
printf("\n1.>> Start Second Test");
printf("\n2.>> Quit Test and back to main menu\n");
scanf("%d",&ch);
if(ch==1)
{ test2();}
else if(ch==2)
{ menu();}
else
printf("enter right choice\n");
scanf("%d",&ch);
}
void test2()
{ clrscr();
 printf("\nThis Test contains only 3 Questions...\n"); delay(20);
 clrscr();
 printf("\nDO YOU FACE DIFFICULTY IN MEMORIZING MOBILE NUMBERS?\n");
 printf("\n1.YES\n2.SOMETIMES\n3.NEVER\n");
 scanf("%d",&ch);
 if(ch==2)
 {p=p+5;}
 else if(ch==3)
{ p=p+10;}
clrscr();
printf("\nDO YOU REPLACE PASSWORDS BECAUSE \nYOU HAVE FORGOTTEN THE ORIGINAL ONES?\n");
printf("\n1.YES\n2.SOMETIMES\n3.NEVER\n");
scanf("%d",&ch);
if(ch==2)
{p=p+5;}
else if(ch==3)
{ p=p+10;}
clrscr();
printf("\nDO YOU FACE DIFFICULTY IN\n REMEMBERING WHERE YOU PARKED YOUR VEHICLE?\n");
printf("\n1.YES\n2.SOMETIMES\n3.NEVER\n");
scanf("%d",&ch);
if(ch==2)
{p=p+5;}
else if(ch==3)
{ p=p+10;}
clrscr();
printf("This Test is over now\n");
delay(500);
clrscr();
printf("\n1.>>Start third test\n2.>>Back to Main menu\n");
scanf("%d",&th);
if(th==1)
test3();
else if(th==2)
menu();
else
printf("enter right choice\n");
scanf("%d",&th);
}
void test3()
{ clrscr();
printf("\nThis test contains 16 questions\nIn this test you will have only two options i.e. correct or incorrect.\nNOTE:-WHEN YOU SEE OPPOSITE WORD ON SCREEN AND IF ANSWER IS CORRECT THEN\nYOU HAVE TO SELECT INCORRECT!");
printf("\nTHAT MEANS WHEN OPPOSITE IS SEEN ON SCREEN THEN \nCORRECT-> INCORRECT \n INCORRECT-> CORRECT\n");
printf("\n\nEnter 'c' for correct and 'i' for incorrect\n\n");
printf("\nPRESS 1 TO START");
scanf("%d",&ch);
if(ch==1)
{ci();
m1();
 re();
 m2();
 m3();
 m4();
 m5();
 m6();
 m7();
 m8();
 m9();
 m10();
 m11();
 m12();
 m13();
 tr();
 printf("THIS TEST IS OVER NOW!");
 printf("\n1.Start TEST 4\n2.<<Back to main menu");
 scanf("%d",&ch);
 if(ch==1)
 test4();
 else if(ch==2)
 menu(); }

}
void test4()
{ clrscr();
 printf("\nIN THIS TEST YOU HAVE TO SELECT RIGHT COLOR OPTION ONLY!\nYOU WILL BE GIVEN 5 SECONDS");
 printf("\nEnter only First letter of the color you see\n\n");
printf("\nTHIS IS CALLED STROOP TEST");
printf("\n1.START\n2.MAIN MENU");
scanf("%d",&ch);
if(ch==1)
exetest4();
else if(ch==2)
menu();
}
void exetest4()
{ t41();
t42();
t43();
t44();
t45();
t46();
t47();
t48();
t49();
t410();
t411();
t412();
t413();
t414();
t415();
t416();
t417();
t418();
t419();
t420();
}
void htest()
{
}
void ci()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCONE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }

void m13()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCONE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }
void m1()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   settextstyle(0,0,7);
   printf("\n\n\t\t\tOPPOSITE!");
   printf("\n\n\n\n\n\t\t\t18-6=11?\n");

     scanf("%d",&ch);
   closegraph();
   }
void m2()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCIRCLE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }
void m3()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\t\t\tOPPOSITE");
   printf("\n\n\n\n\n\t\t\t12+7=19 ?\n");
     scanf("%d",&ch);
   closegraph();
   }
void m4()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCONE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }
void m5()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCONE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }
void m6()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCONE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }
void m7()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCONE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }
void m8()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCONE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }
void m9()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCONE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }
void m10()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCONE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }
void m11()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCONE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }
void m12()
 { int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\t\t\tCONE ?\n");
   setfillstyle(SOLID_FILL,RED);
   circle(450,220,50);
   floodfill(451,220,WHITE);
     scanf("%d",&ch);
   closegraph();
   }

void re()
{    int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\n\n\n\t\t\tOCTAGON ?");
   setfillstyle(SOLID_FILL,RED);
   line(400,100,600,100);
   line(400,100,400,200);
   line(400,200,600,200);
   line(600,100,600,200);
   floodfill(401,110,WHITE);

   scanf("%d",&ch);
   closegraph();

   }



void tr()
{ int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tTRIANGLE ?\n\n\n\n\n\n\n\n");
   setfillstyle(SOLID_FILL,YELLOW);
   line(440,160,400,300);
   line(440,160,500,300);
   line(400,300,500,300);
   floodfill(441,170,WHITE);

   scanf("%d",&ch);
   closegraph();

}


void t41()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(BLUE);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tRED\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);

   closegraph();
  }
void t42()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
     setcolor(YELLOW);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tYELLOW\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);
 closegraph(); }
void t43()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(BROWN);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tBLUE\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch); closegraph(); }
void t44()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(WHITE);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tBLACK\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch); closegraph(); }
void t45()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(CYAN);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tGREEN\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch); closegraph(); }
void t46()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(GREEN);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tCYAN\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch); closegraph(); }
void t47()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(RED);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tBROWN\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch); closegraph(); }
void t48()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(MAGENTA);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tBLACK\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();
  }
void t49()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(BLUE);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tYELLOW\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}
void t410()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(LIGHTBLUE);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\GREEN\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}
void t411()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(MAGENTA);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tPINK\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}
void t412()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(CYAN);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tRED\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}
void t413()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(BLUE);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tRED\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}
void t414()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(MAGENTA);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tYELLOW\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}
void t415()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(YELLOW);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tGREEN\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}
void t416()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(LIGHTGREEN);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tPURPLE\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}
void t417()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(WHITE);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tBLACK\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}
void t418()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(RED);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tBLUE\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}
void t419()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(BROWN);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tORANGE\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}
void t420()
{int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
  setcolor(BLUE);
  settextstyle(7,0,10);

  outtextxy(170,150,"\n\n\t\tRED\n");
  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
  scanf("%d",&ch);   closegraph();}














