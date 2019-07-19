#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N  10000

int main(void)
{
  int i, n;
  FILE *fp;
  fp = fopen("data.txt", "wt");
  if (NULL == fp)
    exit(1);
  srand((unsigned int)time(NULL));
  n = 100000;
  for(i = 0; i < n; i++) {
    fprintf(fp, "%d ", rand() % N + 1);
  }
  fclose(fp);
  return 1;
}
