#include <stdio.h>
#include <Windows.h> // For sleep function
#include <stdlib.h>
#include <time.h> // For time()

int main()
{
  printf("Loading...");
  // fflush(stdout); // Ensure the output is displayed immediately

  // Simulate a loading process
  for (int i = 0; i <= 100; i += 10)
  {
    srand(time(0));
    int ran = (rand() % 6) / 2 + 1;
    printf("\rLoading... %d%%", i); // Move cursor to the beginning and print percentage
    // fflush(stdout);                 // Flush output to the console
    Sleep(361 * ran);
  }
  printf("\nDone!\n"); // Move to a new line after loading is complete
  printf("Enter your name: ");
  // fflush(stdout); // Ensure that "Enter your name: " is printed immediately
  char name[50];
  scanf("%s", name);

  printf("Hello, %s!\n", name);

  return 0;
}