#include <stdio.h>

int main() {
  // declare a char array to store the word and the line
  char word[20];
  char line[100];

  // prompt the user to enter the word and the line
  printf("Enter a word: ");
  scanf("%s", word); // read the word from the input
  printf("Enter a line: ");
  scanf(" %[^\n]", line); // read the line from the input until newline

  // print the word and the line
  printf("The word is: %s\n", word); // use %s to print a string
  printf("The line is: %s\n", line);

  return 0;
}
