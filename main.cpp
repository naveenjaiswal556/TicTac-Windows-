#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>


void fill();
void display();
void check();


char a[3][3],ply1,ply2;
int over=1,i,j,turn=1,choice;

using namespace std;

int main()
{

    fill();
    cout << "************************ Let's StaRt *************************" << endl;
    cout << "\n Enter The  Symbol Of First Player:";
    cin >> ply1;
    cout << "\n Enter The  Symbol Of Second Player:";
    cin >> ply2;
    cout << "!!!!!!!!!!! Enter 99 For Exit !!!!!!!!!";
    cout << "\nPress Any Key To Start......";
    getch();
    while(over!=0)
    {
        check();
        display();
        cout << "\n\t Enter Your Choice:";
        fflush(stdin);
        cin >> choice;

        if(choice==99){
            over=0;
        }else if(choice<=3){
          choice=choice-1;
          if(a[0][choice]=='-'){
            if(turn==1){
          a[0][choice]=ply1;
          turn=2;
          }else{
          a[0][choice]=ply2;
          turn=1;
           }
          }else{
           cout << "\n\t !!!!!!!!!!! It's Already Used !!!!!!!!!!!!";
           getch();
           }
          }else if(choice<=6&&choice>3){
          choice=choice-4;
          if(a[1][choice]=='-'){
            if(turn==1){
          a[1][choice]=ply1;
          turn=2;
          }else{
          a[1][choice]=ply2;
          turn=1;
           }
          }else{
           cout << "\n\t !!!!!!!!!!! It's Already Used !!!!!!!!!!!!";
           getch();
           }
          }else if(choice<=9&&choice>6){
          choice=choice-7;
          if(a[2][choice]=='-'){
            if(turn==1){
          a[2][choice]=ply1;
          turn=2;
          }else{
          a[2][choice]=ply2;
          turn=1;
           }
          }else{
           cout << "\n\t !!!!!!!!!!! It's Already Used !!!!!!!!!!!!";
           getch();
           }
          }



    }



    return 0;
}

void  fill()
{
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a[i][j]='-';
        }
    }
}

void display()
{
    system("cls");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout << "\t\t" << a[i][j];
        }
        cout << "\n\n\n";
    }

}

void check()
{
    if(a[0][0]==ply1&&a[0][1]==ply1&&a[0][2]==ply1){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n*******************  First Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[1][0]==ply1&&a[1][1]==ply1&&a[1][2]==ply1){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n*******************  First Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[2][0]==ply1&&a[2][1]==ply1&&a[2][2]==ply1){
        system("cls");
        cout << "First Player Win";
        exit(1);
    }else if(a[0][0]==ply1&&a[1][0]==ply1&&a[2][0]==ply1){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n*******************  First Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[0][1]==ply1&&a[1][1]==ply1&&a[2][1]==ply1){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n*******************  First Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[0][2]==ply1&&a[1][2]==ply1&&a[2][2]==ply1){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n*******************  First Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[0][0]==ply1&&a[1][1]==ply1&&a[2][2]==ply1){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n*******************  First Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[0][2]==ply1&&a[1][1]==ply1&&a[2][0]==ply1){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n*******************  First Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[0][0]==ply2&&a[0][1]==ply2&&a[0][2]==ply2){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n******************  Second Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[1][0]==ply2&&a[1][1]==ply2&&a[1][2]==ply2){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n******************  Second Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[2][0]==ply2&&a[2][1]==ply2&&a[2][2]==ply2){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n******************  Second Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[0][0]==ply2&&a[1][0]==ply2&&a[2][0]==ply2){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n******************  Second Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[0][1]==ply2&&a[1][1]==ply2&&a[2][1]==ply2){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n******************  Second Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[0][2]==ply2&&a[1][2]==ply2&&a[2][2]==ply2){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n******************  Second Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[0][0]==ply2&&a[1][1]==ply2&&a[2][2]==ply2){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n******************  Second Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }else if(a[0][2]==ply2&&a[1][1]==ply2&&a[2][0]==ply2){
        system("cls");
        cout << "\n***********************************************************";
        cout << "\n******************  Second Player Win  ********************";
        cout << "\n***********************************************************";
        getch();
        exit(1);
    }
}
