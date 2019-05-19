#include <cstdio>
#define DEBUG 0

using namespace std;

int btod(int bin)
{
  int dec = 0;
  int k = 0;
  while(bin!=0){
    dec+=(bin%10)*(1<<k);
    bin/=10;
    k++;
  }
  return dec;
}

int main()
{
#if DEBUG
  printf("%d",btod(101));
#else
  int k,b;
  char a[12][20]={"rat","ox","tiger","rabbit","dragon","snake","horse","goat","monkey","rooster","dog","pig"};
  while(scanf("%d",&k) != EOF){
    b = btod(k);
    if(b<=12)  printf("%s\n",a[b-1]);
    else  printf("dinosaur\n");
  }
#endif
  return 0;
}
