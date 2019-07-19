#include <cstdio>
#define DEBUG 0

using namespace std;

int main()
{
  char c[19];
  while(scanf("%s",c) != EOF){
    if((c[16]-'0')%2==1)   printf("Boy\n");
    else  printf("Girl\n");
  }
  return 0;
}
