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
//	printf("输入一段字符，程序会计算空格数、换行符数和其它字符数并显示。输入#结束程序\n");
//	while ((ch = getchar()) != '#') {
//		if (ch == ' ')
//			blank++;
//		else if (ch == '\n')
//			linefeed++;
//		else
//			other++;
//	}
//	printf("空格数：%d\n换行符数：%d\n其它字符数：%d", blank, linefeed, other);
//
//	return 0;
//}

//2.
//int main(void) {
//	char ch;
//	int count;
//	count = 0;
//
//	printf("输入字符，程序显示其对应的ASCII码（输入“#”结束程序）：");
//	while ((ch = getchar()) != '#') {
//		printf("%c：%d\t", ch, ch);
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
//	printf("请输入一组整数(输入0结束)：");
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
//	printf("输入的偶数个数：%d，这些偶数的平均值：%0.2lf\n",
//		even, (double)evensum / even);
//	printf("输入的奇数个数：%d，这些奇数的平均值：%0.2lf",
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
//	printf("替换次数：%d", replace);
//
//	return 0;
//}

//5.用switch重写练习4

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
//	printf("\"ei\"出现的次数：%d", ei_count);
//
//	return 0;
//}

//7.
//int main(void) {
//	double time, total_wage, taxes, net_income;
//	total_wage = taxes = net_income = 0;
//
//	printf("请输入一周工作的小时数：");
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
//	printf("工资总额：%g\n税金：%g\n净收入：%g", total_wage, taxes, net_income);;
//
//	return 0;
//}

//8.

//9.
//int main(void) {
//	int n, i, j, status;
//
//	printf("请输入一个正整数：");
//	while (scanf_s("%d", &n) == 1) {
//		if (n > 0) {
//			printf("素数：\n");
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
//			printf("请输入正整数。");
//		printf("请输入一个正整数：");
//	}
//
//	return 0;
//}

//10.
//int main(void) {
//	double wage;
//	int number;
//
//	printf("请输入你的工资：");
//	while (scanf_s("%lf", &wage) == 1 && wage > 0) {
//		printf("1)单身     2)户主\n");
//		printf("3)已婚     4)离异\n");
//		printf("请输入与你情况相对的序号：");
//		scanf_s("%d", &number);
//		switch (number) {
//		case 1: {
//			if (wage <= 17850)
//				printf("%g应缴税%g\n", wage, wage * 0.15);
//			else
//				printf("%g应缴税%g\n", wage, 17850 * 0.15 + (wage - 17850) * 0.28);
//		}
//			  break;
//		case 2: {
//			if (wage <= 23900)
//				printf("%g应缴税%g\n", wage, wage * 0.15);
//			else
//				printf("%g应缴税%g\n", wage, 23900 * 0.15 + (wage - 23900) * 0.28);
//		}
//			  break;
//		case 3: {
//			if (wage <= 29750)
//				printf("%g应缴税%g\n", wage, wage * 0.15);
//			else
//				printf("%g应缴税%g\n", wage, 29750 * 0.15 + (wage - 29750) * 0.28);
//		}
//			  break;
//		case 4: {
//			if (wage <= 14875)
//				printf("%g应缴税%g\n", wage, wage * 0.15);
//			else
//				printf("%g应缴税%g\n", wage, 14875 * 0.15 + (wage - 14875) * 0.28);
//		}
//			  break;
//		default:printf("请输入1-4\n");
//		}
//		printf("请输入你的工资：");
//	}
//
//	return 0;
//}

//11.
int main(void) {
	double artichoke, beet, carrot, a, b, c, price, weight;
	artichoke = beet = carrot = price = weight = 0;
	char option;

	printf("a.洋蓟   b.甜菜   c.胡萝卜\n");
	printf("请输入需要购买的物品的序号（输入q退出订购）:\n");
	while (scanf("%c", &option) == 1 && option != 'q') {
		switch (option) {
		case 'a':
			printf("洋蓟：2.05元/磅。需要多少磅：");
			scanf_s("%lf", &a);
			artichoke += a;
			printf("成功订购%g磅洋蓟。\n", a);
			break;
		case 'b':
			printf("甜菜：1.15元/磅。需要多少磅：");
			scanf_s("%lf", &b);
			beet += b;
			printf("成功订购%g磅甜菜。\n", b);
			break;
		case 'c':
			printf("胡萝卜：1.09元/磅。需要多少磅：");
			scanf_s("%lf", &c);
			carrot += c;
			printf("成功订购%g磅胡萝卜。\n", c);
			break;
		default:
			printf("请输入正确的序号。\n");
		}
		printf("a.洋蓟   b.甜菜   c.胡萝卜\n");
		printf("请输入需要购买的物品的序号（输入q退出订购）:\n");
	}

	if (artichoke >= 0 && beet >= 0 && carrot >= 0 && !(artichoke == 0 && beet == 0 && carrot == 0)) {
		price = ARTICHOKE_PRICE * artichoke + BEET_PRICE * beet + CARROT_PRICE * carrot;
		weight = artichoke + beet + carrot;
		if (price >= 100) {
			if (weight <= 5) {
				printf("您订购了%g磅洋蓟，%g磅甜菜，%g磅胡萝卜。总共%g磅\n",
					artichoke, beet, carrot, weight);
				printf("超过或等于100元的订单享受5%的优惠！\n");
				printf("本次订单打折%g元\n", price * 0.05);
				printf("小于等于5磅的订单需要收取6.5元的运费和包装费。\n");
				printf("所以您需要支付%g元蔬菜费用，%g元运费和包装费。总共%g元",
					price * 0.95, 6.5, price * 0.95 + 6.5);
			}
			else if(weight > 5 && weight <= 20){
				printf("您订购了%g磅洋蓟，%g磅甜菜，%g磅胡萝卜。总共%g磅\n",
					artichoke, beet, carrot, weight);
				printf("超过或等于100元的订单享受5%的优惠！\n");
				printf("本次订单打折%g元\n", price * 0.05);
				printf("大于5磅或者小于等于20磅的订单需要收取14元的运费和包装费。\n");
				printf("所以您需要支付%g元蔬菜费用，%d元运费和包装费。总共%g元",
					price * 0.95, 14 , price * 0.95 + 14);
			}
			else {
				printf("您订购了%g磅洋蓟，%g磅甜菜，%g磅胡萝卜。总共%g磅\n",
					artichoke, beet, carrot, weight);
				printf("超过或等于100元的订单享受5%的优惠！\n");
				printf("本次订单打折%g元\n", price * 0.05);
				printf("超过20磅的订单在14元的基础上每续重1磅增加0.5元\n");
				printf("所以您需要支付%g元蔬菜费用，%g元运费和包装费。总共%g元",
					price * 0.95, 14 + (weight - 20) * 0.5, price * 0.95 + 14 + (weight - 20) * 0.5);
			}
		}
		else {
			if (weight <= 5) {
				printf("您订购了%g磅洋蓟，%g磅甜菜，%g磅胡萝卜。总共%g磅\n",
					artichoke, beet, carrot, weight);
				printf("小于等于5磅的订单需要收取6.5元的运费和包装费。\n");
				printf("所以您需要支付%g元蔬菜费用，%g元运费和包装费。总共%g元",
					price, 6.5, price + 6.5);
			}
			else if (weight > 5 && weight <= 20) {
				printf("您订购了%g磅洋蓟，%g磅甜菜，%g磅胡萝卜。总共%g磅\n",
					artichoke, beet, carrot, weight);
				printf("大于5磅或者小于等于20磅的订单需要收取14元的运费和包装费。\n");
				printf("所以您需要支付%g元蔬菜费用，%d元运费和包装费。总共%g元",
					price, 14, price + 14);
			}
			else {
				printf("您订购了%g磅洋蓟，%g磅甜菜，%g磅胡萝卜。总共%g磅\n",
					artichoke, beet, carrot, weight);
				printf("超过20磅的订单在14元的基础上每续重1磅增加0.5元\n");
				printf("所以您需要支付%g元蔬菜费用，%g元运费和包装费。总共%g元",
					price, 14 + (weight - 20) * 0.5, price + 14 + (weight - 20) * 0.5);
			}
		}
	}
	else {
		printf("未订购物品。");
	}

	return 0;
}