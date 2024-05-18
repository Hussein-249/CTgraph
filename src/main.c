#include <stdio.h>
#include <unistd.h>

#include "../headers/canvas.h"


int main(int argc, char *argv[]) {

  char * graphtype = argv[1];
  char * src = argv[2];

  printf("Graph type: %s\n", graphtype);
  printf("Source type: %s", src);
  fflush(stdout);

  sleep(3);

  init_twindow();

  return 0;
}
