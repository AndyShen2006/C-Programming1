#include <cstdio>

using namespace std;

int main()
{
  int i=12;
  int money,s,om,bl;
  om=0;
  while(i--) {
    scanf("%d",&money);
    bl = 300 + om - money;
    if(bl < 0) {
      printf("%d",-i);
      return 0;
    }
    else {
      s += bl / 100;
      om = bl - 100*s;
    }
  }
  int end = 1.2 * s + om;
  printf("%d",end);
  return 0;
}
