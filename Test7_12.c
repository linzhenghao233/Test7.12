#include <stdio.h>

//1.
char ch;
int blank = 0,linefeed = 0, other = 0;

int main(void) {
	printf("输入一段字符，程序会计算空格数、换行符数和其它字符数并显示。输入#结束程序\n");
	while ((ch = getchar()) != '#') {
		if (ch == ' ')
			blank++;
		else if (ch == '\n')
			linefeed++;
		else
			other++;
	}
	printf("空格数：%d\n换行符数：%d\n其它字符数：%d", blank, linefeed, other);

	return 0;
}