//알람설정하기
#include <stdio.h>

int main(void) {
  int h, m, calm = 0, resm = 0, resh = 0;
  scanf("%d %d", &h, &m);
	calm = m - 45;
	if(calm < 0){
		if(h > 0) resh = h - 1;
		if(h == 0) resh = h + 23;
		resm = calm + 60;
		printf("%d %d", resh, resm);
	}
	else printf("%d %d", h, calm);
}
