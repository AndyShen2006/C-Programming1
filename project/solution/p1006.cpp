#include <cstdio>

using namespace std;

int main(){
  int k,weight,height;
  while(scanf("%d",&k) != EOF){
    for(int i=0;i<k;i++){
      scanf("%d%d",&weight,&height);
      printf("%.2f\n",weight/(height*height/10000.0));
    }  
  }
  return 0;
}
