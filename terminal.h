#ifndef TERMINAL_H
#define TERMINAL_H

#include <unistd.h>
#include <termios.h>
struct termios orig_termios;

void enableRawMode();
void disableRawMode();
 
#endif