#include <cstdio>

using namespace std;

int main(){
  int k,weight,height;
  double bmi;
  while(scanf("%d",&k) != EOF){
    for(int i=0;i<k;i++){
      scanf("%d%d",&height,&weight);
      bmi = weight/(height*height/10000.0);
      if(bmi <= 18.5)  printf("Light\n");
      else if(bmi > 18.5 && bmi <=23.9)  printf("Normal\n");
      else if(bmi > 23.9 && bmi <=27)  printf("Weight\n");
      else if(bmi > 27 && bmi <=32) printf("Fat\n");
      else printf("Very Fat\n");
    }  
  }
  return 0;
}
