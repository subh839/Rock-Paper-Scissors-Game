#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// we define constants for ROCK, PAPER, SCISSORS
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main()
{
  // random numbers each time the program is run
  srand( time(NULL) );
  
  int player_throw = 0;
  int comp_throw = 0;
  bool draw = false;
  
  do
  {
    // accept the player throw
    printf("Select your throw.\n");
    printf("1) Rock\n");
    printf("2) Paper\n");
    printf("3) Scissors\n");
    printf("Selection: ");
    scanf("%d", &player_throw);
    
    // remainder btw 0,1,2
    comp_throw = (rand() % 3) + 1;
    
    // output the AI's throw to the player
    if (comp_throw == ROCK)
      printf("\n computer throws ROCK.\n");
    else if (comp_throw == PAPER)
      printf("\ncomputer throws PAPER.\n");
    else if (comp_throw == SCISSORS)
      printf("\ncomputer throws SCISSORS.\n");
    
    // determine and output the winner, if any
    draw = false;
    if (player_throw == ROCK && comp_throw == SCISSORS)
      printf("\nROCK beats SCISSORS. yo!!! YOU WIN.\n\n");
    else if (player_throw == ROCK && comp_throw == PAPER)
      printf("\nPAPER beats ROCK. Ohh! YOU LOSE.\n\n");
    else if (player_throw == SCISSORS && comp_throw == PAPER)
      printf("\nSCISSORS beats PAPER.Yo!!! YOU WIN.\n\n");
    else if (player_throw == SCISSORS && comp_throw == ROCK)
      printf("\nROCK beats SCISSORS. Ohh!!!YOU LOSE.\n\n");
    else if (player_throw == PAPER && comp_throw == ROCK)
      printf("\nPAPER beats ROCK. Yoo!!!YOU WIN.\n\n");
    else if (player_throw == PAPER && comp_throw == SCISSORS)
      printf("\nSCISSORS beats PAPER.Ohh!! YOU LOSE.\n\n");
    else
    {
      // if both player and AI throw the same, it's a draw
      printf("\nDRAW! Play again.\n\n");
      draw = true;
    }
  
  // in the case of a draw, the game is played again until there is a winner
  } while (draw!=false);

  return 0;
}