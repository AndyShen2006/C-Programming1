#include <cstdio>
#include <cstdlib>
#define DEBUG 1

using namespace std;

int main()
{
  int k,a,sum;
  while (scanf("%d", &k) != EOF) {
    sum=0;
    while (k--) {
      scanf("%d", &a);
      if (a <= 100 && a >= 90)  sum += 4;
      else if (a <= 89 && a >= 80)  sum += 3;
      else if (a <= 79 && a >= 70)  sum += 2;
      else if (a <= 69 && a >= 60)  sum += 1;
    }
    printf("%d\n",sum);
  }
  return 0;
}
