#include <stdio.h>
#include <time.h>
#include <unistd.h>

void renderLoading() {
  printf("\033[H\033[J");

  printf("\n\n +--------------------------------------+\n");
  printf("<| Please wait while we fetch the data. |>\n");
  printf("<| This may take a few moments.         |>\n");
  printf("<| Thank you for your patience!         |>\n");
  printf(" +--------------------------------------+\n\n");

  for (int i = 0; i < 5; i++) {
    if (i == 0) printf("Loading");
    printf(".");
    fflush(stdout);
    sleep(1);
  }
  printf("\n");

  printf("\033[H\033[J");
}
