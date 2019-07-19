#include <iostream>
#include <time.h>
using namespace std;
int my_sum(int n)
{
    int i;
    int sum=0;
    for(i=1;i<n;i++){
        if(n%i== 0){
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
  clock_t start,finish;
  double totaltime;
  start=clock();
  //Write your main code
  int i,j;
  for(i=1;i<=1000;i++){
      for(j=i;j<=1000;j++){
          if(my_sum(i)==j && my_sum(j)==i){
              cout << i <<" " << j << endl;
          }
      }
  }
  cin.get();
  return 0;
  finish=clock();
  totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
  cout << "Program run time is " << totaltime << " s." << '\n';
}

