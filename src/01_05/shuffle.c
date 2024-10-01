#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int half = 13;
  char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char fw[half + 1], sw[half + 1];
  for (int i = 0; i < half; i++)
  {
    fw[i] = c[i];
    sw[i] = c[half + i];
  }
  
  for (int i = 0; i < half; i++)
  {
    c[i * 2] = fw[i];
    c[i * 2 + 1] = sw[i];
  }
  printf("%s", c);
  return 0;
}