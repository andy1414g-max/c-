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
//
//#include <stdio.h>
//int main()
//{
//	int y,x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x); //scanf_s
//	printf("두 값의 합을 %d입니다.\n", y + x);
//	return 0;
//}

#include <stdio.h>
int main()
{
	char a, b, c;
	printf("문자 두 개 입력 : ");
	scanf("%c%c%c", &a, &b, &c);
	printf("문자출력 : %c%c%c\n", a, b, c);
	return 0;
}
//
//#include <stdio.h>
//int main()
//{
//int r;
//double pi;
//pi = 3.14;
//printf("원하시는 숫자를 입력하시면 그 수를 반지름으로 가지는 원의 넓이와 원의 둘레의 길이가 출력될 것입니다.(원하시는 숫자):");
//scanf("%d", &r);//vs: scanf_s
//printf("%d*%d*%.2lf%d*%d*%.2lf\n", r, r, pi);
//printf("%d*%d*%.2lf\n", r, 2, pi);
//return 0;
//}