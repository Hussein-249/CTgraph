#include <ctype.h>

#include "../headers/canvas.h"
#include "../headers/macros.h"

static int display_axes(usi rowsize, usi colsize, usi ypos, usi xpos); // only accesible in current file
static int display_desc(char *description);


// take in command line args - such as bar, line...
// depending on args, can also accept a pointer to a function
int init_twindow() {
  int in;
  usi desc = 1;
  usi loop = 1;
  usi rowsize = 0;
  usi colsize = 0;
  usi ypos = 4;

  char *description = "Hello, World!";

  initscr();
  cbreak();
  noecho(); // from ncurses, disables printing typed characters
  keypad(stdscr, TRUE); // enabling keypad for the window
  getmaxyx(stdscr, rowsize, colsize);
  curs_set(0); // hide cursor

  usi xpos = rowsize - 3;

  display_axes(rowsize, colsize, ypos, xpos);

  while(loop) {
    in = getch();

    switch (toupper(in)) {
      case QUIT:
        loop = 0;
        break;
      case GRAPH:
        display_axes(rowsize, colsize, ypos, xpos);
      case DESC:
        if (desc) {
          display_desc(description);
        }
      default:
        continue;
    }
    refresh();
  }

  endwin();

  return 0;
}

static int display_axes(usi rowsize, usi colsize, usi ypos, usi xpos) {

  for (usi row = 0; row < rowsize - 2; ++row) {
    mvaddch(row, ypos, '|');
  }

  for (usi col = 4; col < colsize -1; ++col) {
    mvaddch(xpos, col, '_');
  }

  refresh();
  return 0;
}


static int display_desc(char *description) {
  refresh();
  return 0;
}
