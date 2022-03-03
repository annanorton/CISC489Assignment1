//SYSTEM.C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "system.h"

int main() {
printf("before function call\n");
 printf("TEST VALUE IS %d\n", strcmp("?","?"));
//char *contents = fileInput("Article1.txt");
char *question = consoleInput();
printf("finished function call\n");

 return 0;
}
