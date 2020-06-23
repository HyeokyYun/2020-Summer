//두수의 크기비교
#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if(a > b)printf(">");
  else if(a < b)printf("<");
  else printf("==");
}
