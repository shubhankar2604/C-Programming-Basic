#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer) {
  // If both the user and computer has chosen the same thing
  if (you == computer)
    return -1;

  // If user's choice is stone and computer's choice is paper
  if (you == 's' && computer == 'p')
    return 0;

  // If user's choice is paper and computer's choice is stone
  else if (you == 'p' && computer == 's')
    return 1;

  // If user's choice is stone and computer's choice is scissor
  if (you == 's' && computer == 'z')
    return 1;

  // If user's choice is scissor and computer's choice is stone
  else if (you == 'z' && computer == 's')
    return 0;

  // If user's choice is paper and computer's choice is scissor
  if (you == 'p' && computer == 'z')
    return 0;

  // If user's choice is scissor and computer's choice is paper
  else if (you == 'z' && computer == 'p')
    return 1;
}

// Main Code
int main() {
  // Random number
  int n;
  char you, computer, result;

  // Random number
  srand(time(NULL));

  // Make the random number less than 100, by dividing it by 100
  n = rand() % 100;

  // Now, 100 is roughly divided among stone, paper, and scissor
  if (n < 33)
    computer = 's';

  else if (n > 33 && n < 66)
    computer = 'p';

  else
    computer = 'z';

  printf("Enter s for STONE, p for PAPER and z for SCISSOR: \n");

  // Input from the user
  scanf("%c", &you);

  // Function call to play game
  result = game(you, computer);

  printf("\nYou choose : %c and Computer choose : %c\n", you, computer);

  if (result == -1) {
    printf("\n\nThe Game is drawn!\n");
  } else if (result == 1) {
    printf("\n\nYou have won the game!! Computer loses!\n");
  } else {
    printf("\n\nThe Computer has won the game!! You lose!\n");
  }

  return 0;
}