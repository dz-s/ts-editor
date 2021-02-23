#include <DuckX/include/duckx.hpp>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>

using namespace rapidxml;
using namespace std;

int main() {

  duckx::Document doc("Test_doc.docx");

  doc.open();

  for (auto p : doc.paragraphs()) {
    for (auto r : p.runs()) {
      std::cout << r.get_text() << std::endl;
    }
  }

  // enableRawMode();

  // while (1) {
  //   char c = '\0';
  //   if (read(STDIN_FILENO, &c, 1) == -1 && errno != EAGAIN) die("read");
  //   if (iscntrl(c)) {
  //     printf("%d\r\n", c);
  //   } else {
  //     printf("%d ('%c')\r\n", c, c);
  //   }
  //   if (c == 'q') break;
  // }
  return 0;
}