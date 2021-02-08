#ifndef TERMINAL_H
#define TERMINAL_H

#include <unistd.h>
#include <termios.h>
#include <errno.h>
#include <stdlib.h>

//extern int errno;
struct termios orig_termios;

void enableRawMode();
void disableRawMode();
 
#endif