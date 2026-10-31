//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int y_age;
//	printf("나이를 입력하세요.");
//	scanf("%d", &y_age);
//	if (y_age <= 12)
//		printf("전체 관람가만 볼 수 있습니다.");
//	else if (y_age > 12 && y_age <= 15)
//		printf("전체 관람가와 12세 관람가를 볼 수 있습니다.");
//	else
//		printf("전체 관람가, 12세 관람가, 15세 관람가를 모두 볼 수 있습니다.");
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int y_age;
//	printf("나이를 입력하세요.");
//	scanf("%d", &y_age);
//	if (y_age >= 15)
//		printf("15세 관람가, ");
//	if (y_age >= 12)
//		printf("12세 관람가, ");
//	
//	printf("전체 관람가를 볼 수 있습니다.");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char initial;
//	printf("영어문자 하나를 입력해 주세요.");
//	scanf("%c", &initial);
//	if (initial >= 0x41 && initial <= 90)
//		printf("대문자입니다.");
//	else if (initial >= 97 && initial <= 'z')
//		printf("소문자입니다.");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	else
//	{
//		if (number < answer)
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		else
//			printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	else if (number < answer)
//		printf("숫자 2가 숫자1보다 큽니다.\n");
//	else
//		printf("숫자1과 숫자2가 같습니다.\n");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int score = 75;
	if (score > 90)
		printf("성적은 A등급입니다.\n");
	else if (score > 80)
		printf("성적은 B등급입니다.\n");
	else if (score > 70)
		printf("성적은 C등급입니다.\n");
	else if (score > 60)
		printf("성적은 D등급이니다.\n");
	else
		printf("성적은 F등급입니다.\n");
	return 0;
}

































































































