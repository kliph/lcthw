#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
  int16_t n1 = 32767;
  int16_t n2 = n1 + 1;
  uint16_t un1 = 65535;
  uint16_t un2 = 65536;		/* And now it gives a warning. Cool */

  printf("The size of an int16_t is %ld\n", sizeof(int16_t));
  printf("%d\n", n1);
  printf("Since it's signed, numbers above halfway underflow\n");
  printf("So one more and it becomes: %d\n", n2);
  printf("NOTE: If you do the addition without specifically\n");
  printf("casting the int as int16_t, it looks like C\n");
  printf("automatically makes it a larger int? E.g.: %d\n", n1 + 1);
  printf("============================================\n");
  printf("The maximum unsigned 16 bit int is: %d\n", un1);
  printf("One more than that maximum is: %d\n", un2);


  return 0;
}
