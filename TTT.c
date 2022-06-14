#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
//////PUT IN AN IF COND. for when all spaces are filled gamewin == 0 to say the game ended in a tie
// && impliment the restart

  char positions[4][4], playagain;
  int movei, movej;
  int gamewin = 0, playercounter = 1;

/*
while(gamewin = 0)
{
*/
  printf("  TIC-TAC-TOE \n  ____________\n\n  Player 1 is O \n  Player 2 is X \n  Enter moves in [x y] form\n\n");

//intializing the board
  for (int i = 1; i < 4; i++)
  {
    for (int j = 1; j < 4; j++)
    {
      positions[i][j] = ' ';
    }
  }


//printing the board
printf("\n   1     2     3\n\n");
  for (int i = 1; i < 4; i++)
  {
    if(i != 1)
    {
    //  puts("\n _________");
      printf("\n  ---------------\n%d", i);
    }

    else
    {
      printf("1");
    }

    for (int j = 1; j < 4; j++)
    {
      if(j != 3)
      {
        printf("  %c  |", positions[i][j]);
      }

      else
        printf("  %c  ", positions[i][j]);
    }

  }
  printf("\n\n\n");


  while(gamewin == 0)
  {

    //WIN conditions

//HORIZONTAL
    //top row O
    if(positions[1][1] == 'O'  && (positions[1][1] == positions[1][2] && positions[1][2] == positions[1][3]))
    {
      printf("GAME END \ncode: 1 \nWINNER IS P1");
      gamewin = 1;
    }

    //top row X
    if(positions[1][1] == 'X'  && (positions[1][1] == positions[1][2] && positions[1][2] == positions[1][3]))
    {
      printf("GAME END \ncode: 2 \nWINNER IS P2");
      gamewin = 1;
    }


    //middle row O
    if(positions[2][1] == 'O'  && (positions[2][1] == positions[2][2] && positions[2][2] == positions[2][3]))
    {
      printf("GAME END \ncode: 3 \nWINNER IS P1");
      gamewin = 1;
    }

    //middle row X
    if(positions[2][1] == 'X'  && (positions[2][1] == positions[2][2] && positions[2][2] == positions[2][3]))
    {
      printf("GAME END \ncode: 4 \nWINNER IS P2");
      gamewin = 1;
    }



    //bottom row O
    if(positions[3][1] == 'O'  && (positions[3][1] == positions[3][2] && positions[3][2] == positions[3][3]))
    {
      printf("GAME END \ncode: 5 \nWINNER IS P1");
      gamewin = 1;
    }

    //bottom row X
    if(positions[3][1] == 'X'  && (positions[3][1] == positions[3][2] && positions[3][2] == positions[3][3]))
    {
      printf("GAME END \ncode: 6 \nWINNER IS P2");
      gamewin = 1;
    }


//VERTICAL
        //1st column O
        if(positions[1][1] == 'O'  && (positions[1][1] == positions[2][1] && positions[2][1] == positions[3][1]))
        {
          printf("GAME END \ncode: 7 \nWINNER IS P1");
          gamewin = 1;
        }

        //1st column X
        if(positions[1][1] == 'X'  && (positions[1][1] == positions[2][1] && positions[2][1] == positions[3][1]))
        {
          printf("GAME END \ncode: 8 \nWINNER IS P2");
          gamewin = 1;
        }


        //2nd column O
        if(positions[1][2] == 'O'  && (positions[1][2] == positions[2][2] && positions[2][2] == positions[3][2]))
        {
          printf("GAME END \ncode: 9 \nWINNER IS P1");
          gamewin = 1;
        }

        //2nd column X
        if(positions[1][2] == 'X'  && (positions[1][2] == positions[2][2] && positions[2][2] == positions[3][2]))
        {
          printf("GAME END \ncode: 10 \nWINNER IS P2");
          gamewin = 1;
        }



        //3rd column O
        if(positions[1][3] == 'O'  && (positions[1][3] == positions[2][3] && positions[2][3] == positions[3][3]))
        {
          printf("GAME END \ncode: 11 \nWINNER IS P1");
          gamewin = 1;
        }

        //3rd column X
        if(positions[1][3] == 'X'  && (positions[1][3] == positions[2][3] && positions[2][3] == positions[3][3]))
        {
          printf("GAME END \ncode: 12 \nWINNER IS P2");
          gamewin = 1;
        }




        //diagnol row O - downward
        if(positions[1][1] == 'O'  && (positions[1][1] == positions[2][2] && positions[2][2] == positions[3][3]))
        {
          printf("GAME END \ncode: 13 \nWINNER IS P1");
          gamewin = 1;
        }

        //diagnol row X - downward
        if(positions[1][1] == 'X'  && (positions[1][1] == positions[2][2] && positions[2][2] == positions[3][3]))
        {
          printf("GAME END \ncode: 14 \nWINNER IS P2");
          gamewin = 1;
        }



        //diagnol row O - upward
        if(positions[3][1] == 'O'  && (positions[3][1] == positions[2][2] && positions[2][2] == positions[1][3]))
        {
          printf("GAME END \ncode: 15 \nWINNER IS P1");
          gamewin = 1;
        }

        //diagnol row X - upward
        if(positions[3][1] == 'X'  && (positions[3][1] == positions[2][2] && positions[2][2] == positions[1][3]))
        {
          printf("GAME END \ncode: 16 \nWINNER IS P2");
          gamewin = 1;
        }


        //all spaces filled and no winnder
        if(gamewin != 1 && positions[1][1] != ' ' && positions[1][2] != ' ' && positions[1][3] != ' ' && positions[2][1] != ' ' && positions[2][2] != ' ' && positions[2][3] != ' ' && positions[3][1] != ' ' && positions[3][2] != ' ' && positions[3][3] != ' ')
      {
          printf("GAME END \nNO WINNER");
          gamewin = 1;
      }




//reading player moves
  if(gamewin == 0)
      {
        if(playercounter%2 != 0)
        {
          printf("\nP1 (O) enter move: ");

        }

        if(playercounter%2 == 0)
        {
          printf("\nP2 (X) enter move: ");

        }

          for(int k = 0; k < (1e8); k++);
          {
            scanf("%d %d", &movei, &movej);

            if(playercounter%2 != 0)
            {
                if(positions[movej][movei] == ' ')
                {
                  positions[movej][movei] = 'O';



              //reprinting board
              printf("\n   1     2     3\n\n");
                for (int i = 1; i < 4; i++)
                {
                  if(i != 1)
                  {
                  //  puts("\n _________");
                    printf("\n  ---------------\n%d", i);
                  }

                  else
                  {
                    printf("1");
                  }

                  for (int j = 1; j < 4; j++)
                  {
                    if(j != 3)
                    {
                      printf("  %c  |", positions[i][j]);
                    }

                    else
                      printf("  %c  ", positions[i][j]);
                  }

                }
                printf("\n\n\n");

                playercounter++;
            }
          }

          if(playercounter%2 == 0)
          {
              if(positions[movej][movei] == ' ')
              {
                positions[movej][movei] = 'X';



            //reprinting board
            printf("\n   1     2     3\n\n");
              for (int i = 1; i < 4; i++)
              {
                if(i != 1)
                {
                //  puts("\n _________");
                  printf("\n  ---------------\n%d", i);
                }

                else
                {
                  printf("1");
                }

                for (int j = 1; j < 4; j++)
                {
                  if(j != 3)
                  {
                    printf("  %c  |", positions[i][j]);
                  }

                  else
                    printf("  %c  ", positions[i][j]);
                }

              }
              printf("\n\n\n");

              playercounter++;
          }
        }



            else
            {
              printf("Invalid move\n\n");
            }
          }




        }
      }





/*
  else {
    printf("Would you like to play again? [Y/N]\n\n");
    scanf("%s\n", playagain);
    if(playagain == 'Y')
      //restart program
    }


*/

  return(0);
}
