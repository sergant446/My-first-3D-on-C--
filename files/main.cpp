#include <iostream>
#include <cmath>

int main() {
  int screenWidth = 120;
  int screenHeight = 30;
  char* screen = new char[screenWidth * screenHeight + 1];
  screen[screenWidth * screenHeight] = '\0';
  for (int i = 0; i < screenWidth; i++) {
    for (int j = 0; j < screenHeight; j++) {
      screen[i + j * screenWidth] = '@';
    }
  }
  printf(screen);
  getchar();
  return 0;
}
