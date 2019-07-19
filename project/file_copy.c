#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  clock_t start,finish;
  double totaltime;
  start=clock();
  //Write your main code
  system("cp -r ~/Documents/c_code_of_deepin ~/shenDocuments/C_code");
  finish=clock();
  totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
  printf("Program run time is %lf s.\n",totaltime);
}

