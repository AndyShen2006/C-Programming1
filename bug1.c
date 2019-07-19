#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
  char password[30];
  char password2[30];
  char userInput[30];
  while(1) {
    printf(" 请设置密码: ");
    scanf("%s", password);
    if(strlen(password) < 6) {
      puts(" 密码不能少于 6 个字符! ");
      continue;
    }
    printf(" 请重复输入一遍: ");
    scanf("%s", password2);
    if(strcmp(password, password2) != 0) {
      puts(" 两次输入密码不一致 ");
      continue;
    }
    while(1) {
      printf("\n 请输入登录密码: ");
      scanf("%s", userInput);
      if(strcmp(userInput, password) == 0) {
	break;
      }}
    printf(" 登录成功!输入 # 结束程序,按其他键重新开始: ");
    fflush(stdin);
    char ch = getchar();
    if(ch == '#') {
      break;
    }
    printf("\n\n\n");
  }
  return 0;
}
