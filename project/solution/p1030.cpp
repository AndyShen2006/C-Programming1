#include <cstdio>
#define N 10000
using namespace std;

void arwb(int a[],int b[],int length)
{
  for(int i=0;i<=length;i++){
    a[i]=b[i];
    b[i]=0;
  }
}
int main()
{
  int line;
  scanf("%d",&line);
  int ptt_old[N] = {0};    //Pascal's trangle old array.
  int ptt_new[N] = {0};    //Pascal's trangle new array.
  ptt_old[0]=1;ptt_old[1]=1;
  printf("1\n1 1\n");
  for(int j=2;j<=line;j++){
    ptt_new[0]=1;ptt_new[j-1]=1;    //Start and end is 1.
    printf("1 ");       //Print Start.
    for(int i=1;i<=j;i++){
      ptt_new[i]=ptt_old[i-1]+ptt_old[i];    //This line item i equal to last line item i-1 add item i.
      printf("%d ",ptt_new[i]);               //Print Pascal's  Column j,item i.
    }
    printf("\n");
    arwb(ptt_old,ptt_new,j);  //Old array Replace with new array
  }
  return 0;
}
