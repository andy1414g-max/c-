//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int coin;
//	printf("1000원 이하의 젤리 가격을 입력해주세요.(가격의 1의 자리는 비워주세요.)");
//	scanf("%d", &coin);
//	int cost;
//	cost = 1000 - coin;
//	int cost500 = cost / 500;
//	cost = cost % 500;
//	int cost100 = cost / 100;
//	cost = cost % 100;
//	int cost50 = cost / 50;
//	cost = cost % 50;
//	int cost10 = cost / 10;
//	cost = cost % 10;
//	printf("오백원 %d개,", cost500);
//	printf("백원 %d개,", cost100);
//	printf("오십원 %d개,", cost50);
//	printf("십원 %d개,", cost10);
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫숫자:%d\n", randInt);//0-9
//	printf("다음숫자:%d", nextInt);//50-59
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)//apple이 15이면 실행
//	{
//		printf("사과는 15개 있습니다.\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7)//apple이 7보다 크면 실행
//	{
//		printf("사과는 7개보다 많습니다.\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int apple = 20;
//	if (apple < 20)//apple이 20보다 적으면 실행
//	{
//		printf("사과는 20개보다 적습니다.\n");
//	}
//	if (apple > 20)//apple이 20보다 크면 실행
//	{
//		printf("사과는 20개보다 큽니다.\n");
//	}
//	if (apple = 20)//apple이 20이면 실행
//	{
//		printf("사과는 20개 입니다.\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)//apple이 아니면 실행
//	{
//		printf("사과는 0개가 아닙니다.\n");
//	}
//	return 0;
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)//apple이 0이면 실행
//	{
//		printf("사과는 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10)//apple이 10이면 실행
//	{
//		printf("사과는 10개 있습니다.");
//	}
//	else if (apple == 0)//apple이 0이면 실행
//	{
//		printf("사과는 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)//apple이면 실행
//	{
//		printf("사과는 하나도 없습니다.\n");
//	}
//	else//if가 틀리면 (appled이 0이 아니면)실행
//	{
//		printf("사과는 0개가 아닙니다.\n");
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("원하는 숫자를 쓰시오.");
//	scanf("%d", &input);
//	if (input == 0)
//		printf("그 숫자는 0입니다.\n");
//	else if (input < 0)
//		printf("그 숫자는 음수입니다.\n");
//	else
//		printf(" 그 숫자는 양수입니다.\n");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("원하는 숫자를 쓰시오.");
//	scanf("%d", &input);
//	if (input < 10 || input > 99)
//		printf("그 숫자는 두 자리 숫자가 아닙니다.");
//	else
//		printf("그 숫자는 두 자리 숫자입니다.");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//		printf("키가150 이상입니다.\n");
//	if (height > 160)
//		printf("키가 160 이상입니다.");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//		printf("키가 150 이상입니다.\n");
//	else if (height > 160)
//		printf("키가 160 이상입니다.\n");
//		return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int y_age;
	printf("나이를 입력하시오.");
	scanf("%d", &y_age);
	if (y_age < 12)
		printf("전체관람가만 볼 수 있습니다.");
	else if ((y_age = > 12) && (y_age < 15))
		printf("전체 관람가랑 12세 관람가를 볼 수 있습니다.");
	else
		printf("전체 관람가랑 12세 관람가, 15세 관람가를 볼 수 있습니다.");
	return 0;
}