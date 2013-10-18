/* A program to print out all the special C escape sequences  */
/* Michael Ashley / UNSW / 03-Mar-2003                        */

#include <stdio.h>  // for printf definition

int main (void) {
    printf ("audible alert (bell) BEL  \\a   %d\n" , '\a');
    printf ("backspace            BS   \\b   %d\n" , '\b');
    printf ("horizontal tab       HT   \\t   %d\n" , '\t');
    printf ("newline              LF   \\n  %d\n"  , '\n');
    printf ("vertical tab         VT   \\v  %d\n"  , '\v');
    printf ("formfeed             FF   \\f  %d\n"  , '\f');
    printf ("carriage return      CR   \\r  %d\n"  , '\r');
    printf ("double quote         \"    \\\"  %d\n", '\"');
    printf ("single quote         \'    \\\'  %d\n", '\'');
    printf ("question mark        ?    \\?  %d\n"  , '\?');
    printf ("backslash            \\    \\\\  %d\n", '\\');
    return 0;
}
