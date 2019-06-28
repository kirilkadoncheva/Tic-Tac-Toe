#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <list>
#include <stack>
#include <queue>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <fstream>
using  namespace  std;
struct coord
{
    long long x,y;
};
void gotoxy(int x, int y)
{
    COORD c = { y, x };
    SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}
void color(int n)
{
    HANDLE hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, n);
}

void zapylvane(int x,int y,char ch)
{
    if(ch=='1')
    {
        gotoxy(x+1,y+4);
        cout<<".";
        gotoxy(x+2,y+3);
        cout<<"/"<<char(179);
        gotoxy(x+3,y+4);
        cout<<char(179);
        gotoxy(x+4,y+4);
        cout<<char(179);

        gotoxy(x+5,y+3);
        cout<<"_"<<char(179)<<"_";

    }
    if(ch=='2')
    {

        gotoxy(x+1,y+3);
        cout<<"___";
        gotoxy(x+2,y+2);
        cout<<"/   \\";
        gotoxy(x+3,y+2);
        cout<<"  _-'";
        gotoxy(x+4,y+2);
        cout<<" /   ";
        gotoxy(x+5,y+2);
        cout<<"/___,";
    }
    if(ch=='3')
    {

        gotoxy(x+1,y+3);
        cout<<"___";
        gotoxy(x+2,y+2);
        cout<<"/   \\";
        gotoxy(x+3,y+2);
        cout<<"  _-'";
        gotoxy(x+4,y+2);
        cout<<"   \\ ";
        gotoxy(x+5,y+2);
        cout<<"\\___)";
    }
    if(ch=='4')
    {

        gotoxy(x+2,y+2);
        cout<<char(179)<<"   "<<char(179);
        gotoxy(x+3,y+2);
        cout<<"`.__"<<char(179);

        gotoxy(x+4,y+2);
        cout<<"    "<<char(179);
        gotoxy(x+5,y+2);
        cout<<"    "<<char(179);

    }
    if(ch=='5')
    {

        gotoxy(x+1,y+2);
        cout<<" ____";
        gotoxy(x+2,y+2);
        cout<<"|    ";

        gotoxy(x+3,y+2);
        cout<<"`---.";
        gotoxy(x+4,y+2);
        cout<<"    |";
        gotoxy(x+5,y+2);
        cout<<"\\__.'";
    }
    if(ch=='6')
    {

        gotoxy(x+1,y+2);
        cout<<"  __";
        gotoxy(x+2,y+2);
        cout<<".'  ";

        gotoxy(x+3,y+2);
        cout<<"|---.";
        gotoxy(x+4,y+2);
        cout<<"|   |";
        gotoxy(x+5,y+2);
        cout<<"`._.'";
    }
    if(ch=='7')
    {

        gotoxy(x+1,y+2);
        cout<<" ___ ";
        gotoxy(x+2,y+2);
        cout<<"'   \\";

        gotoxy(x+3,y+2);
        cout<<"  __/";
        gotoxy(x+4,y+2);
        cout<<"   /`";
        gotoxy(x+5,y+2);
        cout<<"  / ";
    }
    if(ch=='8')
    {

        gotoxy(x+1,y+2);
        cout<<" ___ ";
        gotoxy(x+2,y+2);
        cout<<"/   \\";

        gotoxy(x+3,y+2);
        cout<<">---<";
        gotoxy(x+4,y+2);
        cout<<"'   `";
        gotoxy(x+5,y+2);
        cout<<"`---'";
    }
    if(ch=='9')
    {

        gotoxy(x+1,y+2);
        cout<<" ___ ";
        gotoxy(x+2,y+2);
        cout<<"/   \\";

        gotoxy(x+3,y+2);
        cout<<"`---|";
        gotoxy(x+4,y+2);
        cout<<"    |";
        gotoxy(x+5,y+2);
        cout<<"`---'";
    }
    if(ch=='X')
    {

        gotoxy(x+1,y+1);
        cout<<"_     _";
        gotoxy(x+2,y+1);
        cout<<" `.   /";

        gotoxy(x+3,y+1);
        cout<<"   \\,' ";
        gotoxy(x+4,y+1);
        cout<<"  ,'\\  ";
        gotoxy(x+5,y+1);
        cout<<" /   \\ ";
    }
    if(ch=='O')
    {

        gotoxy(x+1,y+1);
        cout<<"  ___ ";
        gotoxy(x+2,y+1);
        cout<<".'   `.";

        gotoxy(x+3,y+1);
        cout<<"|     |";
        gotoxy(x+4,y+1);
        cout<<"|     |";
        gotoxy(x+5,y+1);
        cout<<" `.__.'";
    }
}
void frame(int r=0,int k=0, char ch='k')//syzdava ramkata za igrata
{

    gotoxy(2,4);
    cout<<char(201);
    for(int i=0; i<2; i++)
    {
        cout<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(203);
    }
    cout<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    int s=3;
    for(int j=1; j<=6; j++)
    {
        gotoxy(s,4);
        for(int i=0; i<3; i++)
        {
            cout<<char(186)<<"       ";
        }
        cout<<char(186);
        s++;
    }
    for(int k=1; k<=2; k++)
    {
        gotoxy(s,4);
        cout<<char(204);
        for(int i=1; i<=7; i++)cout<<char(205);
        cout<<char(206);
        for(int i=1; i<=7; i++)cout<<char(205);
        cout<<char(206);
        for(int i=1; i<=7; i++)cout<<char(205);
        cout<<char(185);
        s++;
        for(int j=1; j<=7; j++)
        {
            gotoxy(s,4);
            for(int i=0; i<3; i++)
            {
                cout<<char(186)<<"       ";
            }
            cout<<char(186);
            s++;
        }
    }
    gotoxy(s,4);
    cout<<char(200);
    for(int i=1; i<=7; i++)cout<<char(205);
    cout<<char(202);
    for(int i=1; i<=7; i++)cout<<char(205);
    cout<<char(202);
    for(int i=1; i<=7; i++)cout<<char(205);
    cout<<char(188);

    zapylvane(2,4,'1');
    zapylvane(2,12,'2');
    zapylvane(2,20,'3');
    zapylvane(10,4,'4');
    zapylvane(10,12,'5');
    zapylvane(10,20,'6');
    zapylvane(17,4,'7');
    zapylvane(17,12,'8');
    zapylvane(17,20,'9');



}
char gameover(string ig)
{
    int s=0;
    if(ig[0]==ig[4]&&ig[4]==ig[8]&&ig[0]!='n')
    {
        s=1;
        return ig[0];
    }
    if(ig[2]==ig[4]&&ig[2]==ig[6]&&ig[2]!='n')
    {
        s=1;
        return ig[2];
    }
    for(int i=0; i<9; i=i+3)
    {
        if(ig[i]==ig[i+1]&&ig[i]==ig[i+2]&&ig[i]!='n')
        {
            s=1;
            return ig[i];
        }
    }
    for(int i=0; i<3; i++)
    {
        if(ig[i]==ig[i+3]&&ig[i]==ig[i+6]&&ig[i]!='n')
        {
            s=1;
            return ig[i];
        }
    }

    if(s==0)return 'n';


}
void winner()
{color(2);


    system("cls");
    gotoxy(11,10);
    cout<<"<()> "; gotoxy(12,10);
    cout<<"#|  "; gotoxy(13,10);
    cout<<"# \\_"; gotoxy(14,10);
    cout<<"### \\"; gotoxy(15,10);
    cout<<"# #  \\_"; gotoxy(16,10);
   Sleep(500);
   gotoxy(11,10);
    cout<<" () "; gotoxy(12,10);
    cout<<"#|\\ "; gotoxy(13,10);
    cout<<"#\\_\\"; gotoxy(14,10);
    cout<<"### \\"; gotoxy(15,10);
    cout<<"# # /_"; gotoxy(16,10);
   Sleep(500);
gotoxy(11,10);
    cout<<"  ()"; gotoxy(12,10);
    cout<<"#/\\ "; gotoxy(13,10);
    cout<<"#\\_\\"; gotoxy(14,10);
    cout<<"### \\"; gotoxy(15,10);
    cout<<"# # /_"; gotoxy(16,10);
   Sleep(500);
   gotoxy(11,10);
    cout<<"    ()"; gotoxy(12,10);
    cout<<"#  /| "; gotoxy(13,10);
    cout<<"# /_|"; gotoxy(14,10);
    cout<<"### \\"; gotoxy(15,10);
    cout<<"# # /_"; gotoxy(16,10);
   Sleep(500);
   gotoxy(10,10);
    cout<<"     ()"; gotoxy(11,10);
    cout<<"     /|"; gotoxy(12,10);
    cout<<"#   / \\"; gotoxy(13,10);
    cout<<"#   \\"; gotoxy(14,10);
    cout<<"###  |"; gotoxy(15,10);
    cout<<"# # /_"; gotoxy(16,10);
  Sleep(500);
gotoxy(10,10);
    cout<<"    () "; gotoxy(11,10);
    cout<<"    |\\_" ; gotoxy(12,10);
    cout<<"#   |    "; gotoxy(13,10);
    cout<<"#   |    "; gotoxy(14,10);
    cout<<"### |      "; gotoxy(15,10);
    cout<<"# # |_    "; gotoxy(16,10);
  Sleep(500);
gotoxy(10,10);
    cout<<"    ()"; gotoxy(11,10);
    cout<<"   /|\\ " ; gotoxy(12,10);
    cout<<"# / | \\ "; gotoxy(13,10);
    cout<<"#   |\\ "; gotoxy(14,10);
    cout<<"### | | "; gotoxy(15,10);
    cout<<"# # |_|_"; gotoxy(16,10);
  Sleep(500);
  gotoxy(10,10);
    cout<<"     ()"; gotoxy(11,10);
    cout<<"    /|\\" ; gotoxy(12,10);
    cout<<"#   || \\"; gotoxy(13,10);
    cout<<"#    |\\ "; gotoxy(14,10);
    cout<<"###  / |"; gotoxy(15,10);
    cout<<"# # /_ |_"; gotoxy(16,10);
  Sleep(500);
gotoxy(10,10);
    cout<<"       ()"; gotoxy(11,10);
    cout<<"      /|\\/" ; gotoxy(12,10);
    cout<<"#    / |  "; gotoxy(13,10);
    cout<<"#     /|  "; gotoxy(14,10);
    cout<<"###  / |  "; gotoxy(15,10);
    cout<<"# # /_ |_"; gotoxy(16,10);
  Sleep(500);
  gotoxy(10,10);
    cout<<"       ()"; gotoxy(11,10);
    cout<<"      /|\\/" ; gotoxy(12,10);
    cout<<"#    / |  "; gotoxy(13,10);
    cout<<"#      |\\    "; gotoxy(14,10);
    cout<<"###    | \\ "; gotoxy(15,10);
    cout<<"# #    |_ \\ "; gotoxy(16,10);
  Sleep(500);
gotoxy(10,10);
    cout<<"         ()"; gotoxy(11,10);
    cout<<"        /|\\/" ; gotoxy(12,10);
    cout<<"#      / |  "; gotoxy(13,10);
    cout<<"#       /|  "; gotoxy(14,10);
    cout<<"###    / |  "; gotoxy(15,10);
    cout<<"# #   /_ |_"; gotoxy(16,10);
  Sleep(500);
 gotoxy(10,10);
    cout<<"           ()"; gotoxy(11,10);
    cout<<"          /|\\/" ; gotoxy(12,10);
    cout<<"#        / |  "; gotoxy(13,10);
    cout<<"#          |\\    "; gotoxy(14,10);
    cout<<"###        | \\ "; gotoxy(15,10);
    cout<<"# #        |_ \\ "; gotoxy(16,10);
  Sleep(500);
gotoxy(10,10);
    cout<<"               ()"; gotoxy(11,10);
    cout<<"              /|\\/" ; gotoxy(12,10);
    cout<<"#            / |  "; gotoxy(13,10);
    cout<<"#             /|  "; gotoxy(14,10);
    cout<<"###          / |  "; gotoxy(15,10);
    cout<<"# #         /_ |_"; gotoxy(16,10);
  Sleep(500);
gotoxy(10,10);
    cout<<"               ()--> You win:((((("; gotoxy(11,10);
    cout<<"              /|\\/        -Computer" ; gotoxy(12,10);
    cout<<"#            / |  "; gotoxy(13,10);
    cout<<"#             /|  "; gotoxy(14,10);
    cout<<"###          / |  "; gotoxy(15,10);
    cout<<"# #         /_ |_"; gotoxy(16,10);
  Sleep(2000);
system("cls");
gotoxy(1,1);

  cout<<"_____ _            _____ _        _____            _____            _   _                            _                                  _";gotoxy(2,1);
 cout<<"|_   _| |__   ___  |_   _(_) ___  |_   _|_ _  ___  |_   _|__   ___  | |_| |__  _ __ ___  _ __   ___  (_)___   _   _  ___  _   _ _ __ ___| |";gotoxy(3,1);
 cout<<"  | | | '_ \\ / _ \\   | | | |/ __|   | |/ _` |/ __|   | |/ _ \\ / _ \\ | __| '_ \\| '__/ _ \\| '_ \\ / _ \\ | / __| | | | |/ _ \\| | | | '__/ __| |";gotoxy(4,1);
 cout<<"  | | | | | |  __/   | | | | (__    | | (_| | (__    | | (_) |  __/ | |_| | | | | | (_) | | | |  __/ | \\__ \\ | |_| | (_) | |_| | |  \\__ \\_|";gotoxy(5,1);
 cout<<"  |_| |_| |_|\\___|   |_| |_|\\___|   |_|\\__,_|\\___|   |_|\\___/ \\___|  \\__|_| |_|_|  \\___/|_| |_|\\___| |_|___/  \\__, |\\___/ \\__,_|_|  |___(_)";gotoxy(6,1);
 cout<<"                                                                                                              |___/ ";

Sleep(3000);
}
void loser()
{
 system("cls");
    gotoxy(5,25);
    color(4);
    cout<<"In the game of Tic Tac Toe you either win or lose...";
    Sleep(2000);
    system("cls");
    gotoxy(1,15);
  cout<<"    _              _                       _     ___  ____ _____ _";gotoxy(2,15);
  cout<<"   / \\   _ __   __| |  _   _  ___  _   _  | |   / _ \\/ ___|_   _| |";gotoxy(3,15);
  cout<<"  / _ \\ | '_ \\ / _` | | | | |/ _ \\| | | | | |  | | | \\___ \\ | | | |";gotoxy(4,15);
  cout<<" / ___ \\| | | | (_| | | |_| | (_) | |_| | | |__| |_| |___) || | |_|";gotoxy(5,15);
  cout<<"/_/   \\_\\_| |_|\\__,_|  \\__, |\\___/ \\__,_| |_____\\___/|____/ |_| (_)";gotoxy(6,15);
  cout<<"                      |___/ ";

  Sleep(2000);
  system("cls");
  color(4);
    gotoxy(11,10);
    cout<<"<()>     The Throne is still mine;) "; gotoxy(12,10);
    cout<<"#|                 -Computer"; gotoxy(13,10);
    cout<<"# \\_"; gotoxy(14,10);
    cout<<"### \\"; gotoxy(15,10);
    cout<<"# #  \\_"; gotoxy(16,10);
   Sleep(300);
}
bool findv(vector<int>a,int cp)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==cp)return 1;
    }
    return 0;
}
void game()
{

    srand(time(0));

    string ig="nnnnnnnnn";

    cout<<"X or O?\n";
    char s;cin>>s;
    while(!(s=='X'||s=='x'||s=='O'||s=='o'))
    {    gotoxy(1,0);
          cout<<"You can only choose from X and O!\n";
          Sleep(1500);
        gotoxy(1,0);
        cout<<"                                                         ";
         gotoxy(1,0);cin>>s;


    }
    if(s=='x'){s='X';}
    if(s=='o')s='O';
    char sc;
    if(s=='X')sc='O';
    else sc='X';
system("cls");

    frame();

    int ph,phc;
    do
    {  if(gameover(ig)=='n'){int v=0;for(int i=0;i<9;i++)
                                        {if(ig[i]=='n')v=1;}
                                        if(v==0){cout<<"Tie"<<endl;break;}
    }
        if(gameover(ig)=='p')
        { Sleep(1000);
            winner();
            ig[ph-1]='n';
           ig[phc-1]='n';

            ig=ig+char(phc+48);
   // cout<<ig<<endl;
            fstream f("patterns.txt",ios::out|ios::app);//if(!f.is_open())cout<<"Not"<<endl;
            f<<ig<<endl;
            f.close();f.clear();
            break;
        }
        else if(gameover(ig)!='n')
        {Sleep(1000);
            loser();
            break;
        }
        else
        {
            gotoxy(2,31);
            cout<<"Where will you play?"<<endl;

            char ch;
            string z;
            gotoxy(3,31);cin>>z;;
          while(z.size()>1||ig[z[0]-49]!='n')
          {  gotoxy(3,31);
          if(z.size()>1)cout<<"Choose only from 1 to 9!";
          else if(!(z[0]>='1'&&z[0]<='9'))cout<<"Choose only from 1 to 9!";
             else if(ig[z[0]-49]!='n')cout<<"The posotion is taken! Choose another!"<<endl;
          Sleep(1500);
          gotoxy(3,31);
           cout<<"                                                                  ";           gotoxy(3,31);
          cin>>z;


          }
          ch=z[0];
         /* while(ig[ch-49]!='n')
          {
              gotoxy(3,31);cout<<"The posotion is taken! Choose another!"<<endl;Sleep(1000);
              gotoxy(3,31);cout<<"                                        ";
              gotoxy(3,31);cin>>ch;
          }
*/
   ph=ch-48;
            switch (ch)
            {
            case '1':
                zapylvane(2,4,s);
                ig[0]='p';
                break;
            case '2':
                zapylvane(2,12,s);
                ig[1]='p';
                break;
            case '3':
                zapylvane(2,20,s);
                ig[2]='p';
                break;
            case '4':
                zapylvane(10,4,s);
                ig[3]='p';
                break;
            case '5':
                zapylvane(10,12,s);
                ig[4]='p';
                break;
            case '6':
                zapylvane(10,20,s);
                ig[5]='p';
                break;
            case '7':
                zapylvane(17,4,s);
                ig[6]='p';
                break;
            case '8':
                zapylvane(17,12,s);
                ig[7]='p';
                break;
            case '9':
                zapylvane(17,20,s);
                ig[8]='p';
                break;

            }

            if(gameover(ig)=='p')
        {
            winner();
           ig[ph-1]='n';
           ig[phc-1]='n';

            ig=ig+char(phc+48);
    //cout<<ig<<endl;
            fstream f("patterns.txt",ios::out|ios::app);//if(!f.is_open())cout<<"Not"<<endl;
            f<<ig<<endl;
            f.close();f.clear();
            break;
        }
         if(gameover(ig)=='n'){int v=0;for(int i=0;i<9;i++)
                                        {if(ig[i]=='n')v=1;}
                                        if(v==0){
                                                system("cls");
                                                gotoxy(10,10);color(6);
                                   cout<<" _____ _      _ "; gotoxy(11,10);
                                   cout<<"|_   _(_) ___| |";gotoxy(12,10);
                                   cout<<"  | | | |/ _ \ |";gotoxy(13,10);
                                   cout<<"  | | | |  __/_|";gotoxy(14,10);
                                   cout<<"  |_| |_|\___(_)";gotoxy(15,10);


                                                break;}}
            int cp;



            string pat;
            fstream f("patterns.txt",ios::in);
            f>>pat;
            int j=-1; vector<int>a;
            while(!f.eof())
            {

                int x=0;
                for(int i=0; i<9; i++)
                {
                   if(ig[i]!=pat[i]){x=1;break;}



                }

                if(x==0)
                {
                    a.push_back(pat[9]-48);

                }

                f>>pat;
            }
            f.close(); f.clear();
            do
            {
                cp=rand()%9+1;
            }

            while(ig[cp-1]!='n'||findv(a,cp)||ig[cp-1]!='n');
     phc=cp;


            switch (cp)
            {
            case 1:
                zapylvane(2,4,sc);
                ig[0]='c';
                break;
            case 2:
                zapylvane(2,12,sc);
                ig[1]='c';
                break;
            case 3:
                zapylvane(2,20,sc);
                ig[2]='c';
                break;
            case 4:
                zapylvane(10,4,sc);
                ig[3]='c';
                break;
            case 5:
                zapylvane(10,12,sc);
                ig[4]='c';
                break;
            case 6:
                zapylvane(10,20,sc);
                ig[5]='c';
                break;
            case 7:
                zapylvane(17,4,sc);
                ig[6]='c';
                break;
            case 8:
                zapylvane(17,12,sc);
                ig[7]='c';
                break;
            case 9:
                zapylvane(17,20,sc);
                ig[8]='c';
                break;

            }




        }
    }
    while(1);

        gotoxy(25,0);
    }





    int main()
    {char ch;gotoxy(5,5);


cout<<"__________________ _______   _________ _______  _______   _________ _______  _______"; gotoxy(6,5);
cout<<"\\__   __/\\__   __/(  ____ \\  \\__   __/(  ___  )(  ____ \\  \\__   __/(  ___  )(  ____ \\";gotoxy(7,5);
cout<<"   ) (      ) (   | (    \\/     ) (   | (   ) || (    \\/     ) (   | (   ) || (    \\/";gotoxy(8,5);
cout<<"   | |      | |   | |           | |   | (___) || |           | |   | |   | || (__ ";   gotoxy(9,5);
cout<<"   | |      | |   | |           | |   |  ___  || |           | |   | |   | ||  __)";   gotoxy(10,5);
cout<<"   | |      | |   | |           | |   | (   ) || |           | |   | |   | || ( ";     gotoxy(11,5);
cout<<"   | |   ___) (___| (____/\\     | |   | )   ( || (____/\\     | |   | (___) || (____/\\"; gotoxy(12,5);
cout<<"   )_(   \\_______/(_______/     )_(   |/     \\|(_______/     )_(   (_______)(_______/";gotoxy(13,5);
     Sleep(3000);
     system("cls");

      do
            { system("cls");
              gotoxy(5,5);
  color(2);
             cout<<"__________________ _______   _________ _______  _______   _________ _______  _______"; gotoxy(6,5);
cout<<"\\__   __/\\__   __/(  ____ \\  \\__   __/(  ___  )(  ____ \\  \\__   __/(  ___  )(  ____ \\";gotoxy(7,5);
cout<<"   ) (      ) (   | (    \\/     ) (   | (   ) || (    \\/     ) (   | (   ) || (    \\/";gotoxy(8,5);
cout<<"   | |      | |   | |           | |   | (___) || |           | |   | |   | || (__ ";   gotoxy(9,5);
cout<<"   | |      | |   | |           | |   |  ___  || |           | |   | |   | ||  __)";   gotoxy(10,5);
cout<<"   | |      | |   | |           | |   | (   ) || |           | |   | |   | || ( ";     gotoxy(11,5);
cout<<"   | |   ___) (___| (____/\\     | |   | )   ( || (____/\\     | |   | (___) || (____/\\"; gotoxy(12,5);
cout<<"   )_(   \\_______/(_______/     )_(   |/     \\|(_______/     )_(   (_______)(_______/";
             gotoxy(16,15);
              cout<<"1.START"; gotoxy(17,15);
              cout<<"2.RULES OF THE GAME"; gotoxy(18,15);
              cout<<"3.EXIT"; gotoxy(19,15);

              //cin>>ch;
              string h;
              cin>>h;
              while(h.size()>1||h[0]>'3')
              {  gotoxy(19,15);
                  cout<<"Choose a number from 1 to 3!";Sleep(1000);
                  gotoxy(19,15);
                  cout<<"                                     ";
                  gotoxy(19,15);
                  cin>>h;
              }
              ch=h[0];
               system("cls");
              switch (ch)
        {		case '1': game(); Sleep(3000);  break;
        case '2':
        gotoxy(5,5);cout<<"Tic-tac-toe (also known as Noughts and crosses or Xs and Os) is a paper-and-pencil\n ";
        gotoxy(6,5);cout<<"game for two players, X and O, who take turns marking the spaces in a 3×3 grid. The";
        gotoxy(7,5);cout<<"player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game.\n"; break;
  case '3': system("cls");cout<<"All rights reserved! "<<endl;
                          cout<<"Author: Kiki Doncheva"<<endl;
                            //cout<<"Private tester: Dillon Broadbent"<<endl;
                            Sleep(3000);return 0;break;
        }
         system("pause");
            }
        while (ch!='4');

        //game();
       //Sleep(3000);




        return 0;

    }
