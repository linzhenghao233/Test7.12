#include <stdio.h>

//1.
char ch;
int blank = 0,linefeed = 0, other = 0;

int main(void) {
	printf("����һ���ַ�����������ո��������з����������ַ�������ʾ������#��������\n");
	while ((ch = getchar()) != '#') {
		if (ch == ' ')
			blank++;
		else if (ch == '\n')
			linefeed++;
		else
			other++;
	}
	printf("�ո�����%d\n���з�����%d\n�����ַ�����%d", blank, linefeed, other);

	return 0;
}