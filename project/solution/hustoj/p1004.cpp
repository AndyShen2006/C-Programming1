#include <cstdio>

using namespace std;

int main()
{
  int a,sum,k;
  while(scanf("%d",&k) != EOF){
    if(k == 0)  break;
    sum=0;
    while(k--){
      scanf("%d",&a);
      sum+=a;
    }
    printf("%d\n",sum);
  }
  return 0;
}
