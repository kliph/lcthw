#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
  uint16_t i = 0;

  /* go through each string in argv.  Skipping argv[0] because it
   contains the program's name. */
  for (i = 1; i < argc; i++)
    {
      printf("arg %d: %s\n", i, argv[i]);
    }

  /* let's make our own array of strings */
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"
  };
  int num_states = 4;

  for (i = 0; i < num_states; i++)
    {
      printf("state %d: %s\n", i, states[i]);
    }

  return 0;
}
