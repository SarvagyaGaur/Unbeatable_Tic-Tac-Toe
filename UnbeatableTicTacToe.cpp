#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
int k,l,b;
int check(char a1[5][5])
{
  b=0;
  for(k=0;k<=4;k+=2)
  {
    for(l=0;l<=4;l+=2)
    {
      b+=1;
      if(a1[k][l]== ' ')
      {
        a1[k][l] = 'O';
        if((a1[0][0]=='O' && a1[2][2]=='O' && a1[4][4]=='O') || (a1[0][4]=='O' && a1[2][2]=='O' && a1[4][0]=='O'))
        {
          a1[k][l] = ' ';
          return b;
        }
        if((a1[k][0]=='O' && a1[k][2]=='O' && a1[k][4]=='O') || (a1[0][l]=='O' && a1[2][l]=='O' && a1[4][l]=='O'))
        {
          a1[k][l] = ' ';
          return b;
        }
        else
        {
          a1[k][l] = ' ';
          continue;
        }
      }

    }

  }
  return 0;
}
  int check1(char a1[5][5])
{
  b=0;
  for(k=0;k<=4;k+=2)
  {
    for(l=0;l<=4;l+=2)
    {
      b+=1;
      if(a1[k][l]== ' ')
      {
        a1[k][l] = 'X';
        if((a1[0][0]=='X' && a1[2][2]=='X' && a1[4][4]=='X') || (a1[0][4]=='X' && a1[2][2]=='X' && a1[4][0]=='X'))
        {
          a1[k][l] = ' ';
          return b;
        }
         if((a1[k][0]=='X' && a1[k][2]=='X' && a1[k][4]=='X') || (a1[0][l]=='X' && a1[2][l]=='X' && a1[4][l]=='X'))
        {
          a1[k][l] = ' ';
          return b;
        }
        else
        {
          a1[k][l] = ' ';
          continue;
        }
      }

    }
  }return 0;
}
void display(char a1[5][5])
{
   for(k = 0; k<5; k++)
   {
      for(l = 0; l<5; l++)
      {
        cout<<a1[k][l];
      }
        cout<<endl;
   }
}
void main()
{
  clrscr();
  char a[5][5];
  int i,j;
  for(i = 0; i<5; i++)
  {
    for(j = 0; j<5; j++)
    {
      if(i==1||i==3)
      {
        a[i][j] = '-';
      }
      else
      {
        if(j%2==0)
        {
          a[i][j] = ' ';
        }
        else
        {
          a[i][j] = '|';
        }
      }
    }
  }
  char ch = 'Y';
  while(ch=='Y')
  {
    int n;
    cout<<"Press 1 to play, 2 to exit"<<endl;
    cin>>n;
    switch(n)
    {
      case 1 : randomize();
               int n1,r,c;
               n1 = random(4);
               for(i = 0; i<=4; i+=2)
               {
                  for(j = 0; j<=4; j+=2)
                  {
                     a[i][j] = ' ';
                  }
               }
               if(n1==0 || n1==3)
               {
                 cout<<"You start first"<<endl;
                 cout<<"Enter the position where u want O to be placed"<<endl;
                 cout<<"Row(1,2 or 3) = ";
                 cin>>r;
                 cout<<"Column(1,2 or 3) = ";
                 cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                 a[r][c] = 'O';
                 if(r==2 && c==2)
                 {
                    a[0][0] = 'X';
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    if(check(a)==1)
                    {
                      a[0][0] = 'X';
                    }
                    else if(check(a)==2)
                    {
                      a[0][2] = 'X';
                    }
                    else if(check(a)==3)
                    {
                      a[0][4] = 'X';
                    }
                    else if(check(a)==4)
                    {
                      a[2][0] = 'X';
                    }
                    else if(check(a)==5)
                    {
                      a[2][2] = 'X';
                    }
                    else if(check(a)==6)
                    {
                      a[2][4] = 'X';
                    }
                    else if(check(a)==7)
                    {
                      a[4][0] = 'X';
                    }
                    else if(check(a)==8)
                    {
                      a[4][2] = 'X';
                    }
                    else if(check(a)==9)
                    {
                      a[4][4] = 'X';
                    }
                    else if(check(a)==0)
                    {
                      a[4][0] = 'X';
                    }
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                    cout<<endl;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    if(check1(a)==1)
                    {
                      a[0][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==2)
                    {
                      a[0][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==3)
                    {
                      a[0][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==4)
                    {
                      a[2][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==5)
                    {
                      a[2][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==6)
                    {
                      a[2][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==7)
                    {
                      a[4][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==8)
                    {
                      a[4][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==9)
                    {
                      a[4][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==0)
                    {
                       if(check(a)==1)
                     {
                         a[0][0] = 'X';
                     }
                    else if(check(a)==2)
                     {
                         a[0][2] = 'X';
                     }
                    else if(check(a)==3)
                     {
                         a[0][4] = 'X';
                     }
                    else if(check(a)==4)
                     {
                         a[2][0] = 'X';
                     }
                    else if(check(a)==5)
                     {
                         a[2][2] = 'X';
                     }
                    else if(check(a)==6)
                     {
                         a[2][4] = 'X';
                     }
                    else if(check(a)==7)
                     {
                         a[4][0] = 'X';
                     }
                    else if(check(a)==8)
                     {
                        a[4][2] = 'X';
                     }
                    else if(check(a)==9)
                     {
                        a[4][4] = 'X';
                     }
                    else if(check(a)==0)
                     {
                       if(a[0][4]==' ')
                       {
                         a[0][4] = 'X';
                       }
                       else if(a[4][0]==' ')
                       {
                         a[4][0] = 'X';
                       }
                       else if(a[4][4]==' ')
                       {
                         a[4][4] = 'X';
                       }
                     }
                    }
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    cout<<endl;
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                     if(check1(a)==1)
                    {
                      a[0][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==2)
                    {
                      a[0][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==3)
                    {
                      a[0][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==4)
                    {
                      a[2][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==5)
                    {
                      a[2][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==6)
                    {
                      a[2][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==7)
                    {
                      a[4][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==8)
                    {
                      a[4][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==9)
                    {
                      a[4][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==0)
                    {
                       if(check(a)==1)
                     {
                         a[0][0] = 'X';
                     }
                    else if(check(a)==2)
                     {
                         a[0][2] = 'X';
                     }
                    else if(check(a)==3)
                     {
                         a[0][4] = 'X';
                     }
                    else if(check(a)==4)
                     {
                         a[2][0] = 'X';
                     }
                    else if(check(a)==5)
                     {
                         a[2][2] = 'X';
                     }
                    else if(check(a)==6)
                     {
                         a[2][4] = 'X';
                     }
                    else if(check(a)==7)
                     {
                         a[4][0] = 'X';
                     }
                    else if(check(a)==8)
                     {
                        a[4][2] = 'X';
                     }
                    else if(check(a)==9)
                     {
                        a[4][4] = 'X';
                     }
                    else if(check(a)==0)
                     {
                         int c = 0;
                         for(i = 0; i<=4; i+=2)
                         {
                           if(c==1)
                           {
                             break;
                           }
                           for(j = 0; j<=4; j+=2)
                           {
                             if(c==1)
                             {
                               break;
                             }
                             if(a[i][j]==' ')
                             {
                               c = 1;
                               a[i][j] = 'X';
                             }
                           }
                         }
                     }
                    }
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    cout<<endl;
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    display(a);
                    cout<<endl;
                    cout<<"Draw"<<endl;
                    break;
                  }
                  if((r==0 && c==0) || (r==0 && c==4) || (r==4 && c==0) || (r==4 && c==4))
                  {
                    a[2][2] = 'X';
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    if(check(a)==1)
                    {
                      a[0][0] = 'X';
                    }
                    else if(check(a)==2)
                    {
                      a[0][2] = 'X';
                    }
                    else if(check(a)==3)
                    {
                      a[0][4] = 'X';
                    }
                    else if(check(a)==4)
                    {
                      a[2][0] = 'X';
                    }
                    else if(check(a)==5)
                    {
                      a[2][2] = 'X';
                    }
                    else if(check(a)==6)
                    {
                      a[2][4] = 'X';
                    }
                    else if(check(a)==7)
                    {
                      a[4][0] = 'X';
                    }
                    else if(check(a)==8)
                    {
                      a[4][2] = 'X';
                    }
                    else if(check(a)==9)
                    {
                      a[4][4] = 'X';
                    }
                    else if(check(a)==0)
                    {
                       if(a[0][2]==' ')
                       {
                         a[0][2] = 'X';
                       }
                       else if(a[2][0]==' ')
                       {
                         a[2][0] = 'X';
                       }
                       else if(a[2][4]==' ')
                       {
                         a[2][4] = 'X';
                       }
                       else if(a[4][2]==' ')
                       {
                         a[4][2] = 'X';
                       }
                    }
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    cout<<endl;
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    if(check1(a)==1)
                    {
                      a[0][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==2)
                    {
                      a[0][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==3)
                    {
                      a[0][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==4)
                    {
                      a[2][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==5)
                    {
                      a[2][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==6)
                    {
                      a[2][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==7)
                    {
                      a[4][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==8)
                    {
                      a[4][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==9)
                    {
                      a[4][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==0)
                    {
                       if(check(a)==1)
                     {
                         a[0][0] = 'X';
                     }
                    else if(check(a)==2)
                     {
                         a[0][2] = 'X';
                     }
                    else if(check(a)==3)
                     {
                         a[0][4] = 'X';
                     }
                    else if(check(a)==4)
                     {
                         a[2][0] = 'X';
                     }
                    else if(check(a)==5)
                     {
                         a[2][2] = 'X';
                     }
                    else if(check(a)==6)
                     {
                         a[2][4] = 'X';
                     }
                    else if(check(a)==7)
                     {
                         a[4][0] = 'X';
                     }
                    else if(check(a)==8)
                     {
                        a[4][2] = 'X';
                     }
                    else if(check(a)==9)
                     {
                        a[4][4] = 'X';
                     }
                    else if(check(a)==0)
                     {
                       if(a[0][2]==' ')
                       {
                         a[0][2] = 'X';
                       }
                       else if(a[2][0]==' ')
                       {
                         a[2][0] = 'X';
                       }
                       else if(a[2][4]==' ')
                       {
                         a[2][4] = 'X';
                       }
                       else if(a[4][2]==' ')
                       {
                         a[4][2] = 'X';
                       }
                     }
                    }
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    cout<<endl;
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                     if(check1(a)==1)
                    {
                      a[0][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==2)
                    {
                      a[0][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==3)
                    {
                      a[0][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==4)
                    {
                      a[2][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==5)
                    {
                      a[2][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==6)
                    {
                      a[2][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==7)
                    {
                      a[4][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==8)
                    {
                      a[4][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==9)
                    {
                      a[4][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==0)
                    {
                       if(check(a)==1)
                     {
                         a[0][0] = 'X';
                     }
                    else if(check(a)==2)
                     {
                         a[0][2] = 'X';
                     }
                    else if(check(a)==3)
                     {
                         a[0][4] = 'X';
                     }
                    else if(check(a)==4)
                     {
                         a[2][0] = 'X';
                     }
                    else if(check(a)==5)
                     {
                         a[2][2] = 'X';
                     }
                    else if(check(a)==6)
                     {
                         a[2][4] = 'X';
                     }
                    else if(check(a)==7)
                     {
                         a[4][0] = 'X';
                     }
                    else if(check(a)==8)
                     {
                        a[4][2] = 'X';
                     }
                    else if(check(a)==9)
                     {
                        a[4][4] = 'X';
                     }
                    else if(check(a)==0)
                     {
                         int c = 0;
                         for(i = 0; i<=4; i+=2)
                         {
                           if(c==1)
                           {
                             break;
                           }
                           for(j = 0; j<=4; j+=2)
                           {
                             if(c==1)
                             {
                               break;
                             }
                             if(a[i][j]==' ')
                             {
                               c = 1;
                               a[i][j] = 'X';
                             }
                           }
                         }
                     }
                    }
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    cout<<endl;
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    display(a);
                    cout<<endl;
                    cout<<"Draw"<<endl;
                    break;
                 }
                 if((r==0 && c==2) || (r==2 && c==0) || (r==2 && c==4) || (r==4 || c==2))
                 {
                    a[2][2] = 'X';
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    if(check(a)==1)
                    {
                      a[0][0] = 'X';
                    }
                    else if(check(a)==2)
                    {
                      a[0][2] = 'X';
                    }
                    else if(check(a)==3)
                    {
                      a[0][4] = 'X';
                    }
                    else if(check(a)==4)
                    {
                      a[2][0] = 'X';
                    }
                    else if(check(a)==5)
                    {
                      a[2][2] = 'X';
                    }
                    else if(check(a)==6)
                    {
                      a[2][4] = 'X';
                    }
                    else if(check(a)==7)
                    {
                      a[4][0] = 'X';
                    }
                    else if(check(a)==8)
                    {
                      a[4][2] = 'X';
                    }
                    else if(check(a)==9)
                    {
                      a[4][4] = 'X';
                    }
                    else if(check(a)==0)
                    {
                        if(a[0][0]==' ')
                        {
                          a[0][0] = 'X';
                        }
                        else if(a[0][4]==' ')
                        {
                         a[0][4] = 'X';
                        }
                        else if(a[4][0]==' ')
                        {
                         a[4][0] = 'X';
                        }
                        else if(a[4][4]==' ')
                        {
                         a[4][4] = 'X';
                        }
                    }
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    cout<<endl;
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    if(check1(a)==1)
                    {
                      a[0][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==2)
                    {
                      a[0][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==3)
                    {
                      a[0][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==4)
                    {
                      a[2][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==5)
                    {
                      a[2][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==6)
                    {
                      a[2][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==7)
                    {
                      a[4][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==8)
                    {
                      a[4][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==9)
                    {
                      a[4][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==0)
                    {
                       if(check(a)==1)
                     {
                         a[0][0] = 'X';
                     }
                    else if(check(a)==2)
                     {
                         a[0][2] = 'X';
                     }
                    else if(check(a)==3)
                     {
                         a[0][4] = 'X';
                     }
                    else if(check(a)==4)
                     {
                         a[2][0] = 'X';
                     }
                    else if(check(a)==5)
                     {
                         a[2][2] = 'X';
                     }
                    else if(check(a)==6)
                     {
                         a[2][4] = 'X';
                     }
                    else if(check(a)==7)
                     {
                         a[4][0] = 'X';
                     }
                    else if(check(a)==8)
                     {
                        a[4][2] = 'X';
                     }
                    else if(check(a)==9)
                     {
                        a[4][4] = 'X';
                     }
                    else if(check(a)==0)
                     {
                        if(a[0][0]==' ')
                        {
                          a[0][0] = 'X';
                        }
                        else if(a[0][4]==' ')
                        {
                         a[0][4] = 'X';
                        }
                        else if(a[4][0]==' ')
                        {
                         a[4][0] = 'X';
                        }
                        else if(a[4][4]==' ')
                        {
                         a[4][4] = 'X';
                        }
                     }
                    }
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    cout<<endl;
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                     if(check1(a)==1)
                    {
                      a[0][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==2)
                    {
                      a[0][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==3)
                    {
                      a[0][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==4)
                    {
                      a[2][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==5)
                    {
                      a[2][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==6)
                    {
                      a[2][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==7)
                    {
                      a[4][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==8)
                    {
                      a[4][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==9)
                    {
                      a[4][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==0)
                    {
                       if(check(a)==1)
                     {
                         a[0][0] = 'X';
                     }
                    else if(check(a)==2)
                     {
                         a[0][2] = 'X';
                     }
                    else if(check(a)==3)
                     {
                         a[0][4] = 'X';
                     }
                    else if(check(a)==4)
                     {
                         a[2][0] = 'X';
                     }
                    else if(check(a)==5)
                     {
                         a[2][2] = 'X';
                     }
                    else if(check(a)==6)
                     {
                         a[2][4] = 'X';
                     }
                    else if(check(a)==7)
                     {
                         a[4][0] = 'X';
                     }
                    else if(check(a)==8)
                     {
                        a[4][2] = 'X';
                     }
                    else if(check(a)==9)
                     {
                        a[4][4] = 'X';
                     }
                    else if(check(a)==0)
                     {
                         int c = 0;
                         for(i = 0; i<=4; i+=2)
                         {
                           if(c==1)
                           {
                             break;
                           }
                           for(j = 0; j<=4; j+=2)
                           {
                             if(c==1)
                             {
                               break;
                             }
                             if(a[i][j]==' ')
                             {
                               c = 1;
                               a[i][j] = 'X';
                             }
                           }
                         }
                     }
                    }
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    cout<<endl;
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    display(a);
                    cout<<endl;
                    cout<<"Draw"<<endl;
                    break;
                 }
               }
               if(n1==1 || n1==2)
               {
                 int r1,c1;
                 cout<<"Opponent starts first"<<endl;
                 a[4][0] = 'X';
                 display(a);
                 cout<<endl;
                 cout<<"Enter the position where u want O to be placed"<<endl;
                 cout<<"Row(1,2 or 3) = ";
                 cin>>r1;
                 cout<<"Column(1,2 or 3) = ";
                 cin>>c1;
                 if(r1==1)
                 {
                   r1 = 0;
                 }
                 if(r1==3)
                 {
                   r1 = 4;
                 }
                 if(c1==1)
                 {
                   c1 = 0;
                 }
                 if(c1==3)
                 {
                   c1 = 4;
                 }
                 while(a[r1][c1]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r1;
                      cin>>c1;
                 if(r1==1)
                 {
                   r1 = 0;
                 }
                 if(r1==3)
                 {
                   r1 = 4;
                 }
                 if(c1==1)
                 {
                   c1 = 0;
                 }
                 if(c1==3)
                 {
                   c1 = 4;
                 }
                    }
                 a[r1][c1] = 'O';
                 if(r1==2 && c1==2)
                 {
                    a[0][4] = 'X';
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    cout<<endl;
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    if(r==0 && c==0)
                    {
                      a[4][4] = 'X';
                      display(a);
                      cout<<endl;
                    }
                    else if(r==4 && c==4)
                    {
                      a[0][0] = 'X';
                      display(a);
                      cout<<endl;
                    }
                    else
                    {
                      if(check(a)==1)
                      {
                        a[0][0] = 'X';
                      }
                      else if(check(a)==2)
                      {
                        a[0][2] = 'X';
                      }
                      else if(check(a)==3)
                      {
                        a[0][4] = 'X';
                      }
                      else if(check(a)==4)
                      {
                        a[2][0] = 'X';
                      }
                      else if(check(a)==5)
                      {
                        a[2][2] = 'X';
                      }
                      else if(check(a)==6)
                      {
                        a[2][4] = 'X';
                      }
                      else if(check(a)==7)
                      {
                        a[4][0] = 'X';
                      }
                      else if(check(a)==8)
                      {
                      a[4][2] = 'X';
                      }
                      else if(check(a)==9)
                      {
                        a[4][4] = 'X';
                      }
                      display(a);
                      cout<<endl;
                    }
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    cout<<endl;
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    if(check1(a)==1)
                    {
                      a[0][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==2)
                    {
                      a[0][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==3)
                    {
                      a[0][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==4)
                    {
                      a[2][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==5)
                    {
                      a[2][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==6)
                    {
                      a[2][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==7)
                    {
                      a[4][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==8)
                    {
                      a[4][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==9)
                    {
                      a[4][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==0)
                    {
                         if(check(a)==1)
                     {
                         a[0][0] = 'X';
                     }
                    else if(check(a)==2)
                     {
                         a[0][2] = 'X';
                     }
                    else if(check(a)==3)
                     {
                         a[0][4] = 'X';
                     }
                    else if(check(a)==4)
                     {
                         a[2][0] = 'X';
                     }
                    else if(check(a)==5)
                     {
                         a[2][2] = 'X';
                     }
                    else if(check(a)==6)
                     {
                         a[2][4] = 'X';
                     }
                    else if(check(a)==7)
                     {
                         a[4][0] = 'X';
                     }
                    else if(check(a)==8)
                     {
                        a[4][2] = 'X';
                     }
                    else if(check(a)==9)
                     {
                        a[4][4] = 'X';
                     }
                    }
                    display(a);
                    cout<<endl;
                    cout<<"Enter position:";
                    cin>>r;
                    cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    cout<<endl;
                    while(a[r][c]!= ' ')
                    {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                    }
                    a[r][c] = 'O';
                    cout<<endl;
                    if(check1(a)==1)
                    {
                      a[0][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==2)
                    {
                      a[0][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==3)
                    {
                      a[0][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==4)
                    {
                      a[2][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==5)
                    {
                      a[2][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==6)
                    {
                      a[2][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==7)
                    {
                      a[4][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==8)
                    {
                      a[4][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==9)
                    {
                      a[4][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==0)
                    {
                         if(check(a)==1)
                     {
                         a[0][0] = 'X';
                     }
                    else if(check(a)==2)
                     {
                         a[0][2] = 'X';
                     }
                    else if(check(a)==3)
                     {
                         a[0][4] = 'X';
                     }
                    else if(check(a)==4)
                     {
                         a[2][0] = 'X';
                     }
                    else if(check(a)==5)
                     {
                         a[2][2] = 'X';
                     }
                    else if(check(a)==6)
                     {
                         a[2][4] = 'X';
                     }
                    else if(check(a)==7)
                     {
                         a[4][0] = 'X';
                     }
                    else if(check(a)==8)
                     {
                        a[4][2] = 'X';
                     }
                    else if(check(a)==9)
                     {
                        a[4][4] = 'X';
                     }
                    }
                    display(a);
                    cout<<endl;
                    cout<<"Draw"<<endl;
                 }
                 else
                 {
                   if((r1==2 && c1==0)||(r1==0 && c1==2))
                   {
                     a[4][4] = 'X';
                     display(a);
                     cout<<endl;
                     cout<<"Enter position:";
                     cin>>r;
                     cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                     cout<<endl;
                     while(a[r][c]!= ' ')
                     {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                     }
                     a[r][c] = 'O';
                     cout<<endl;
                     if(check1(a)==8)
                     {
                      a[4][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                     }
                     else
                     {
                       a[2][2] = 'X';
                       display(a);
                       cout<<endl;
                       cout<<"Enter position:";
                       cin>>r;
                       cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                       cout<<endl;
                       while(a[r][c]!= ' ')
                       {
                         cout<<"Invalid choice, please re-enter";
                         cin>>r;
                         cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                       }
                       a[r][c] = 'O';
                       cout<<endl;
                       if(check1(a)==1)
                       {
                         a[0][0] = 'X';
                         display(a);
                         cout<<endl;
                         cout<<"You lost"<<endl;
                         break;
                       }
                       else if(check1(a)==3)
                       {
                         a[0][4] = 'X';
                         display(a);
                         cout<<endl;
                         cout<<"You lost"<<endl;
                         break;
                       }
                     }
                   }
                   else if((r1==4 && c1==2)||(r1==2 && c1==4))
                   {
                     a[0][0] = 'X';
                     display(a);
                     cout<<endl;
                     cout<<"Enter position:";
                     cin>>r;
                     cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                     cout<<endl;
                     while(a[r][c]!= ' ')
                     {
                      cout<<"Invalid choice, please re-enter";
                      cin>>r;
                      cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                     }
                     a[r][c] = 'O';
                     cout<<endl;
                     if(check1(a)==4)
                     {
                      a[2][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                     }
                     else
                     {
                       a[2][2] = 'X';
                       display(a);
                       cout<<endl;
                       cout<<"Enter position:";
                       cin>>r;
                       cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                       cout<<endl;
                       while(a[r][c]!= ' ')
                       {
                         cout<<"Invalid choice, please re-enter";
                         cin>>r;
                         cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                       }
                       a[r][c] = 'O';
                       cout<<endl;
                       if(check1(a)==3)
                       {
                         a[0][4] = 'X';
                         display(a);
                         cout<<endl;
                         cout<<"You lost"<<endl;
                         break;
                       }
                       else if(check1(a)==9)
                       {
                         a[4][4] = 'X';
                         display(a);
                         cout<<endl;
                         cout<<"You lost"<<endl;
                         break;
                       }
                     }
                   }
                   else
                   {
                       if(a[0][0]==' ')
                       {
                         a[0][0] = 'X';
                       }
                       else if(a[0][4]==' ')
                       {
                         a[0][4] = 'X';
                       }
                       else if(a[4][4]==' ')
                       {
                         a[4][4] = 'X';
                       }
                       display(a);
                       cout<<endl;
                       cout<<"Enter position:";
                       cin>>r;
                       cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                       cout<<endl;
                       while(a[r][c]!= ' ')
                       {
                         cout<<"Invalid choice, please re-enter";
                         cin>>r;
                         cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                       }
                       a[r][c] = 'O';
                       cout<<endl;
                   if(check1(a)==1)
                    {
                      a[0][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==2)
                    {
                      a[0][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==3)
                    {
                      a[0][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==4)
                    {
                      a[2][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==5)
                    {
                      a[2][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==6)
                    {
                      a[2][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==7)
                    {
                      a[4][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==8)
                    {
                      a[4][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==9)
                    {
                      a[4][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==0)
                    {
                       if(a[0][0]==' ')
                       {
                         a[0][0] = 'X';
                       }
                       else if(a[0][4]==' ')
                       {
                         a[0][4] = 'X';
                       }
                       else if(a[4][4]==' ')
                       {
                         a[4][4] = 'X';
                       }
                    }
                       display(a);
                       cout<<endl;
                       cout<<"Enter position:";
                       cin>>r;
                       cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                       cout<<endl;
                       while(a[r][c]!= ' ')
                       {
                         cout<<"Invalid choice, please re-enter";
                         cin>>r;
                         cin>>c;
                 if(r==1)
                 {
                   r = 0;
                 }
                 if(r==3)
                 {
                   r = 4;
                 }
                 if(c==1)
                 {
                   c = 0;
                 }
                 if(c==3)
                 {
                   c = 4;
                 }
                       }
                       a[r][c] = 'O';
                       cout<<endl;
                    if(check1(a)==1)
                    {
                      a[0][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==2)
                    {
                      a[0][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==3)
                    {
                      a[0][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==4)
                    {
                      a[2][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==5)
                    {
                      a[2][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==6)
                    {
                      a[2][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==7)
                    {
                      a[4][0] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==8)
                    {
                      a[4][2] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }
                    else if(check1(a)==9)
                    {
                      a[4][4] = 'X';
                      display(a);
                      cout<<endl;
                      cout<<"You lost"<<endl;
                      break;
                    }

                  }
               }
              }

                  break;
     case 2:      ch = 'N';
                  break;
    }
  }
  getch();
}
