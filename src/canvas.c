#include "../headers/canvas.h"


int init_twindow() {
  initscr();
  cbreak();
  noecho(); // from ncurses, disables printing typed characters
  keypad(stdscr, TRUE); // enabling keypad for the window

  curs_set(0); // hide cursor

  return 0;
}
