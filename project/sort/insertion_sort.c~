#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100000
int main()
{
  clock_t start,finish;
  double totaltime;

  //Write your main code
  FILE *fp;
  fp=fopen("data.txt","r");
  if(fp == NULL)
    exit(1);
  int a[N];
  int temp;
  int i;
  for(i=0; i<N; i++){
    if(fscanf(fp,"%d",&a[i]) == EOF)
      break;
  }
  if(i != N){
    printf("Array not full,Error!Exit now!");
    exit(1);
   }

  start=clock();
  // Main code start
  for(int i=0;i<N;i++){
    int v = a[i];
    int j = i-1;
    while(j >= 0 && a[j] > v){
      a[j+1] = a[j];
      j--;
    }
    a[j+1]=v;
  }
  // Main code end
  finish=clock();
  for(int i=0; i<N; i++){
    printf("%d ",a[i]);
  }

  totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
  printf("Program run time is %lf s.\n",totaltime);
  return 0;
 }
