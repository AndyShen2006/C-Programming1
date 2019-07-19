#include <cstdio>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
  clock_t start,finish;
  double totaltime;
  start=clock();
  //Write your main code
  int line;
  scanf("%d",&line);
  vector<int> ptt_old = {0};    //Pascal's trangle old array.
  vector<int> ptt_new = {0};    //Pascal's trangle new array.
  ptt_old[0]=1;ptt_old[1]=1;
  printf("1\n1 1\n");
  ptt_old.reserve(2);ptt_new.reserve(1);
  for(int j=2;j<=line;j++){
    ptt_old.reserve(1);ptt_new.reserve(1);
    ptt_new[0]=1;ptt_new[j]=1;    //Start and end is 1.
    printf("1 ");       //Print Start.
    for(int i=1;i<=j;i++){
      if(i<=(j>>+1)){
	ptt_new[i]=ptt_old[i-1]+ptt_old[i];    //This line item i equal to last line item i-1 add item i.
      }else{
	ptt_new[i]=ptt_new[j-i];
      }
      printf("%d ",ptt_new[i]);    //Print Pascal's  Column j,item i.
    }
    printf("\n");
    ptt_old.swap(ptt_new);  //Old array Replace with new array
    ptt_new = {0};
  }

  finish=clock();
  totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
  printf("Program run time is %lf s.\n",totaltime);
  return 0;
}
