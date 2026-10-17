//#include <stdio.h>

//int main()
//{
//    int y;
//    if ((y - 2000) % 8 == 0)
//{
//    printf("O");
//}
//else
//{
//    printf("X");
//}
//}

//#include <stdio.h>

//int main()
//{
//    int y;
//    scanf("%d", &y);
//    if (y % 4 == 0 && y % 100 != 0)
//    {
//        printf("YES");
//    }
//    else if (y % 400 == 0)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//}

//#include <stdio.h>

//int main()
//{
//    int m, n;
//    scanf("%d %d", &m, &n);
//    if (n == 0)
//    {
//        printf("%d | %d", m, n);
//    }
//    else if (m / n % 1 * 1.0 == 0)
//    {
//        if (m == 0)
//        {
//            printf("%d !| %d", m, n);
//        }
//        else
//        {
//            printf("%d | %d", m, n);
//        }
//    }
//    else
//    {
//        printf("%d !| %d", m, n);
//    }
//}

//#define _CRT_SECURE_NO_ WARNINGS
//#include <stdio.h>
//void main()
//{
//    int a, b;
//    int result;
//    char k;

//    printf("첫 번째 계산할 값 ==>");
//    scanf("%d", &a);
//    printf("+ - * ? % ==>");
//    scanf("%c", &ch);
//    printf("두번째 계산할 값 ==>");
//    scanf("%d", &b);

//    if (k == '+')
//    {
//        result = a + b;
//        printf("%d + %d = %d\n", a, b, result);
//    }

//    if (k == '-')
//    {
//        result = a - b;
//        printf("%d - %d = %d\n", a, b, result);
//    }

//    if (k == '*')
//    {
//        result = a * b;
//        pritnf("%d * %d = %d\n", a, b, result);
//    }

//    if (k == '/')
//    {
//        if (b != 0)
//        {
//            result = a / b;
//            printf("%d / %d = %d\n", a, b, result);
//        }
//        else
//            printf("0으로 나누면 안됩니다.\n");
//    }

//    if (k == '%')
//    {
//        if (b != 0)
//        {
//            result = a % b;
//            printf("%d %% %d = %d\n", a, b, result);
//        }
//        else
//            printf("0으로 나누면 나머지값이 안됩니다. \n");
//    }
//}

//#include <stdio.h>

//int main()
//{
//    int r, e, c, input;
//    scanf("%d %d %d", &r,&e,&c);
//    input = e - r - c;
//    switch (|input| / input) { case 0: { printf("does not matter"); break; }
//        case -1: { printf("do not  advertise"); break; }
//        case 1: { printf("advertise"); } }
//}

#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
    while (h < 7)
    {
        a
#include <stdio.h>

int main()
        {
            int a, b, c;
            scanf("%d", &a);
            b = a;
            c = a - 1;
            while (b >= 1)
            {
                printf("%d ", a - c);
                b--;
                c--;
            }
        }