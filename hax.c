#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void secret() {

printf("Here is the secret function!\n");

exit(0);

}


int main() {

char buff[8];

  printf("This program is vulnerable! input your name:\n");

  gets(buff);

  printf("Hello %s\n",buff);

  return 0;
}
