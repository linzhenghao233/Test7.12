#include <stdio.h>
#include <ctype.h>

//1.
//char ch;
//int blank = 0,linefeed = 0, other = 0;
//
//int main(void) {
//	printf("����һ���ַ�����������ո��������з����������ַ�������ʾ������#��������\n");
//	while ((ch = getchar()) != '#') {
//		if (ch == ' ')
//			blank++;
//		else if (ch == '\n')
//			linefeed++;
//		else
//			other++;
//	}
//	printf("�ո�����%d\n���з�����%d\n�����ַ�����%d", blank, linefeed, other);
//
//	return 0;
//}

//2.
//int main(void) {
//	char ch;
//	int count;
//	count = 0;
//
//	printf("�����ַ���������ʾ���Ӧ��ASCII�루���롰#���������򣩣�");
//	while ((ch = getchar()) != '#') {
//		printf("%c��%d\t", ch, ch);
//		count++;
//		if (count % 8 == 0)
//			printf("\n");
//	}
//
//	return 0;
//}

//3.
//int main(void) {
//	int n, even, odd, evensum, oddsum;
//	even = odd = evensum = oddsum = 0;
//	
//	printf("������һ������(����0����)��");
//	while (scanf_s("%d", &n) == 1 && n) {
//		if (n % 2 == 0) {
//			even++;
//			evensum += n;
//		}	
//		else {
//			odd++;
//			oddsum += n;
//		}
//	}
//	printf("�����ż��������%d����Щż����ƽ��ֵ��%0.2lf\n",
//		even, (double)evensum / even);
//	printf("���������������%d����Щ������ƽ��ֵ��%0.2lf",
//		odd, (double)oddsum / odd);
//
//	return 0;
//}

//4.
//int main(void) {
//	char ch;
//	int replace = 0;
//
//	while ((ch = getchar()) != '#') {
//		if (ch == '.') {
//			putchar('!');
//			replace++;
//		}
//		else if (ch == '!') {
//			putchar('!');
//			putchar('!');
//			replace++;
//		}
//		else
//			putchar(ch);
//	}
//	printf("�滻������%d", replace);
//
//	return 0;
//}

//5.��switch��д��ϰ4

//6.
//int main(void) {
//	char ch1, ch2;
//	int ei_count = 0;
//
//	while ((ch1 = getchar()) != '#') {
//		if (ch1 == 'e') {
//			if ((ch2 = getchar()) == 'i')
//				ei_count++;
//		}
//	}
//	printf("\"ei\"���ֵĴ�����%d", ei_count);
//
//	return 0;
//}

//7.
