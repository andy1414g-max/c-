//#include <stdio.h>
//void main()
//{
//	printf("100+100");
//	printf("\n");
//	printf("%d", 100 + 100); 
//	printf("\n");
//}
//
//#include <stdio.h>
//int main()
//{
//	printf("%d", 100,200);
//	printf("\n");
//	printf("%d %d", 100);
//	printf("\n");
//}
// 
//#include<stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("안녕하세요");
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요");
//	printf("안녕하세요\n");
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드: %d개\n", keyboard);
//	printf("마우스: %d개\n", mouse);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d+%d = %d\n", coin1, coin2, coin1 + coin2);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 70;
//	printf("A=%c,A=%d\n", A, A);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e=%.3f..\n", pi, e);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//
//	int	radius = 5;
//	double pi;
//	pi = 3.14;
//
//	//원의 넓이 공식=r*r*pi
//	double area;
//	area = radius * radius * pi;
//	//원의 둘레 공식=2*r*pi
//	double circumference;
//	circumference = radius * 2 * pi;
//	printf("원의 넓이:%.1lf , 원의 둘레:%.1lf\n", area, circumference);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int base = 3;
//	int upper_edge = 5;
//	int height = 7;
//	int area = (base + upper_edge) / 2 * height;
//	//사다리꼴의 넓이 공식=(높이)*((밑변)+(윗변))/2
//	printf("%d\n", area);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//int r;
//double pi;
//pi = 3.14;
//printf("원하시는 숫자를 입력하시면 그 수를 반지름으로 가지는 원의 넓이와 원의 둘레의 길이가 출력될 것입니다.(원하시는 숫자):");
//scanf("%d", &r);//scanf_s
//double area;
//area = pi * pi * r;
//double  circumference;
//circumference = 2 * pi * r;
//printf("원의 넓이:%.3lf\n",area);
//printf("원의 둘레:%.1lf\n", circumference);
//return 0;
//}
// 
//#define CRT_SECURE_NO_WRNINGS
//#include <stdio.h>
//int main()
//{
//	int W1, W2, H;
//	printf("원하시는 밑변의 길이와 원하시는 윗변의 길이와 원하시는 높이의 길이를 입력: ");
//	scanf("%d %d %d", &W1 , &W2 , &H); //scanf_s
//	double two;
//	two = 2;
//	double area;
//	area = (W1 + W2) * H / two;
//	printf("사다리꼴의 넓이:%.1lf\n", area);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int number1, number2;
//	printf("n1 & n2: ");
//	scanf("%d %d", &number1, &number2);
//	printf("n1 %% 4 = %d\n", number1%4);
//	printf("n2 %% 3 = %d\n", number2%3);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    
//	printf("원하는 숫자 입력");
//	int number;
//	scanf("%d", &number);
//	int answer;
//	answer = number % 50;
//	printf("%d%%50 = %d", number, answer);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d/%d", number1, number2);
//	printf("=%d\n", number1 / number2);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int buck;
	printf("돈을 입력해주세요.(원)");
	scanf("%d", &buck);
	int buck10000 = buck / 10000;
	buck = buck % 10000;
	int buck5000 = buck / 5000;
	buck = buck % 5000;
	int buck1000 = buck / 1000;
	printf("만원권 %d개, ", buck10000);
	printf("오천원권 %d개, ", buck5000);
	printf("천원권 %d개, ", buck1000);
	printf("나머지는 동전입니다. ");
	return 0;

}