#include <stdio.h>
#include <ctype.h>
#define BASIC_WAGE 1000
#define ARTICHOKE_PRICE 2.05
#define BEET_PRICE 1.15
#define CARROT_PRICE 1.09

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
//int main(void) {
//	double time, total_wage, taxes, net_income;
//	total_wage = taxes = net_income = 0;
//
//	printf("������һ�ܹ�����Сʱ����");
//	scanf_s("%lf", &time);
//	if (time <= 40) {
//		total_wage = BASIC_WAGE * time;
//		if (total_wage <= 300)
//			taxes = total_wage * 0.15;
//		else if (total_wage > 300 && total_wage <= 450)
//			taxes = 300 * 0.15 + (total_wage - 300) * 0.20;
//		else
//			taxes = 300 * 0.15 + 150 * 0.20 + (total_wage - 450) * 0.25;
//		net_income = total_wage - taxes;
//	}
//	else {
//		total_wage = (double)BASIC_WAGE * 40 + BASIC_WAGE * (time - 40) * 1.5;
//		if (total_wage <= 300)
//			taxes = total_wage * 0.15;
//		else if (total_wage > 300 && total_wage <= 450)
//			taxes = 300 * 0.15 + (total_wage - 300) * 0.20;
//		else
//			taxes = 300 * 0.15 + 150 * 0.20 + (total_wage - 450) * 0.25;
//		net_income = total_wage - taxes;
//	}
//	printf("�����ܶ%g\n˰��%g\n�����룺%g", total_wage, taxes, net_income);;
//
//	return 0;
//}

//8.

//9.
//int main(void) {
//	int n, i, j, status;
//
//	printf("������һ����������");
//	while (scanf_s("%d", &n) == 1) {
//		if (n > 0) {
//			printf("������\n");
//			for (i = 2; i <= n; i++) {
//				status = 0;
//				for (j = 2; j < i; j++) {
//					if (i % j == 0) {
//						status = 1;
//						break;
//					}
//				}
//				if (status == 0) {
//					printf("%d\n", i);
//				}
//			}
//		}
//		else
//			printf("��������������");
//		printf("������һ����������");
//	}
//
//	return 0;
//}

//10.
//int main(void) {
//	double wage;
//	int number;
//
//	printf("��������Ĺ��ʣ�");
//	while (scanf_s("%lf", &wage) == 1 && wage > 0) {
//		printf("1)����     2)����\n");
//		printf("3)�ѻ�     4)����\n");
//		printf("���������������Ե���ţ�");
//		scanf_s("%d", &number);
//		switch (number) {
//		case 1: {
//			if (wage <= 17850)
//				printf("%gӦ��˰%g\n", wage, wage * 0.15);
//			else
//				printf("%gӦ��˰%g\n", wage, 17850 * 0.15 + (wage - 17850) * 0.28);
//		}
//			  break;
//		case 2: {
//			if (wage <= 23900)
//				printf("%gӦ��˰%g\n", wage, wage * 0.15);
//			else
//				printf("%gӦ��˰%g\n", wage, 23900 * 0.15 + (wage - 23900) * 0.28);
//		}
//			  break;
//		case 3: {
//			if (wage <= 29750)
//				printf("%gӦ��˰%g\n", wage, wage * 0.15);
//			else
//				printf("%gӦ��˰%g\n", wage, 29750 * 0.15 + (wage - 29750) * 0.28);
//		}
//			  break;
//		case 4: {
//			if (wage <= 14875)
//				printf("%gӦ��˰%g\n", wage, wage * 0.15);
//			else
//				printf("%gӦ��˰%g\n", wage, 14875 * 0.15 + (wage - 14875) * 0.28);
//		}
//			  break;
//		default:printf("������1-4\n");
//		}
//		printf("��������Ĺ��ʣ�");
//	}
//
//	return 0;
//}

//11.
int main(void) {
	double artichoke, beet, carrot, a, b, c, price, weight;
	artichoke = beet = carrot = price = weight = 0;
	char option;

	printf("a.��   b.���   c.���ܲ�\n");
	printf("��������Ҫ�������Ʒ����ţ�����q�˳�������:\n");
	while (scanf("%c", &option) == 1 && option != 'q') {
		switch (option) {
		case 'a':
			printf("�󼻣�2.05Ԫ/������Ҫ���ٰ���");
			scanf_s("%lf", &a);
			artichoke += a;
			printf("�ɹ�����%g���󼻡�\n", a);
			break;
		case 'b':
			printf("��ˣ�1.15Ԫ/������Ҫ���ٰ���");
			scanf_s("%lf", &b);
			beet += b;
			printf("�ɹ�����%g����ˡ�\n", b);
			break;
		case 'c':
			printf("���ܲ���1.09Ԫ/������Ҫ���ٰ���");
			scanf_s("%lf", &c);
			carrot += c;
			printf("�ɹ�����%g�����ܲ���\n", c);
			break;
		default:
			printf("��������ȷ����š�\n");
		}
		printf("a.��   b.���   c.���ܲ�\n");
		printf("��������Ҫ�������Ʒ����ţ�����q�˳�������:\n");
	}

	if (artichoke >= 0 && beet >= 0 && carrot >= 0 && !(artichoke == 0 && beet == 0 && carrot == 0)) {
		price = ARTICHOKE_PRICE * artichoke + BEET_PRICE * beet + CARROT_PRICE * carrot;
		weight = artichoke + beet + carrot;
		if (price >= 100) {
			if (weight <= 5) {
				printf("��������%g���󼻣�%g����ˣ�%g�����ܲ����ܹ�%g��\n",
					artichoke, beet, carrot, weight);
				printf("���������100Ԫ�Ķ�������5%���Żݣ�\n");
				printf("���ζ�������%gԪ\n", price * 0.05);
				printf("С�ڵ���5���Ķ�����Ҫ��ȡ6.5Ԫ���˷ѺͰ�װ�ѡ�\n");
				printf("��������Ҫ֧��%gԪ�߲˷��ã�%gԪ�˷ѺͰ�װ�ѡ��ܹ�%gԪ",
					price * 0.95, 6.5, price * 0.95 + 6.5);
			}
			else if(weight > 5 && weight <= 20){
				printf("��������%g���󼻣�%g����ˣ�%g�����ܲ����ܹ�%g��\n",
					artichoke, beet, carrot, weight);
				printf("���������100Ԫ�Ķ�������5%���Żݣ�\n");
				printf("���ζ�������%gԪ\n", price * 0.05);
				printf("����5������С�ڵ���20���Ķ�����Ҫ��ȡ14Ԫ���˷ѺͰ�װ�ѡ�\n");
				printf("��������Ҫ֧��%gԪ�߲˷��ã�%dԪ�˷ѺͰ�װ�ѡ��ܹ�%gԪ",
					price * 0.95, 14 , price * 0.95 + 14);
			}
			else {
				printf("��������%g���󼻣�%g����ˣ�%g�����ܲ����ܹ�%g��\n",
					artichoke, beet, carrot, weight);
				printf("���������100Ԫ�Ķ�������5%���Żݣ�\n");
				printf("���ζ�������%gԪ\n", price * 0.05);
				printf("����20���Ķ�����14Ԫ�Ļ�����ÿ����1������0.5Ԫ\n");
				printf("��������Ҫ֧��%gԪ�߲˷��ã�%gԪ�˷ѺͰ�װ�ѡ��ܹ�%gԪ",
					price * 0.95, 14 + (weight - 20) * 0.5, price * 0.95 + 14 + (weight - 20) * 0.5);
			}
		}
		else {
			if (weight <= 5) {
				printf("��������%g���󼻣�%g����ˣ�%g�����ܲ����ܹ�%g��\n",
					artichoke, beet, carrot, weight);
				printf("С�ڵ���5���Ķ�����Ҫ��ȡ6.5Ԫ���˷ѺͰ�װ�ѡ�\n");
				printf("��������Ҫ֧��%gԪ�߲˷��ã�%gԪ�˷ѺͰ�װ�ѡ��ܹ�%gԪ",
					price, 6.5, price + 6.5);
			}
			else if (weight > 5 && weight <= 20) {
				printf("��������%g���󼻣�%g����ˣ�%g�����ܲ����ܹ�%g��\n",
					artichoke, beet, carrot, weight);
				printf("����5������С�ڵ���20���Ķ�����Ҫ��ȡ14Ԫ���˷ѺͰ�װ�ѡ�\n");
				printf("��������Ҫ֧��%gԪ�߲˷��ã�%dԪ�˷ѺͰ�װ�ѡ��ܹ�%gԪ",
					price, 14, price + 14);
			}
			else {
				printf("��������%g���󼻣�%g����ˣ�%g�����ܲ����ܹ�%g��\n",
					artichoke, beet, carrot, weight);
				printf("����20���Ķ�����14Ԫ�Ļ�����ÿ����1������0.5Ԫ\n");
				printf("��������Ҫ֧��%gԪ�߲˷��ã�%gԪ�˷ѺͰ�װ�ѡ��ܹ�%gԪ",
					price, 14 + (weight - 20) * 0.5, price + 14 + (weight - 20) * 0.5);
			}
		}
	}
	else {
		printf("δ������Ʒ��");
	}

	return 0;
}