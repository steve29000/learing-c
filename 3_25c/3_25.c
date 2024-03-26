#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int x,a,b,c,p,q,i;
//	int x1,x2 = 0;
//	
//	printf("请输入常数a，b，c\n");
//	scanf("%d %d %d", &a, &b,&c);
//	int d = pow(b, 2);
//	int ret = ((d) - (4 * a * c));
//	
//	if (0 == a)
//	{
//		x = b / c;
//		printf("%d", x);
//	}
//	else
//	{
//		if (0 == ((d) - (4 * a * c)))
//		{
//			x1 = x2 = -(b / (2*a));
//			printf("两个相同实根   %d", x1);
//		}
//		else 
//		{
//			if (((d) - (4 * a * c)) > 0)
//			{
//				x1 = (( - b) + (d - 4 * a * c)^1/2) / 2 * a;
//				x2 = ((-b) - (d - 4 * a * c) ^ 1 / 2) / 2 * a;
//				printf("x1 = %d, x2 = %d", x1, x2);
//			}
//			else
//			{
//				p = (( - b) / (2 * a));
//				q = ((-(d - 4 * a * c)) ^ 1 / 2) / 2 * a;
//				printf("两个复根x1 = %d + %di,x2 = %d - %di", p, q, p, q);
//			}
//		}
//	}
//	return 0;
//	
//}



//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf("%d,%d", &a, &b);
//	scanf("%f,%f", &x, &y);
//	scanf("%c,%c", &c1, &c2);
//	printf("a=%d,b=%d,x=%f,y=%f,%c,%c", a, b, x, y, c1, c2);
//
//	return 0;
//}

//void main()
//{
//	char c1 = 'a', c2 = 'b', c3 = 'c', c4 = '\101', c5 = '\x42';
//	printf("\"%c\",b=%c\tabc=%d\n", c1, c2, c3);
//	printf("\t\b%c %c\n", c4, c5);
//
//}


//void main()
//{
//	int i, j, m = 0, n = 0;
//	i = 3; j = 5;
//	m += i++; n -= --j;
//	printf("i = %d,j=%d,m=%d,n=%d", i, j, m, n);
//}

//void main()
//{
//	char c = 'A';
//	int a = 2, b;
//	float x = 3.5f, y = 3.2f, z;
//	z = (x + 1) / 3 + (int)x / a;
//	b = x + c % 3 * (int)(x + y) % 5 / 3;
//	printf("%d,%f\n", b, z);
//}

//void main()
//{
//	int a = 7; 
//	int x;
//	int ret1 = a % 2 + (a + 1) % 2;
//	printf("%d\n", ret1);
//	int ret2 = (a = 4, 6 * 2);
//	printf("%d\n", ret2);
//
//	int ret3 = ((a = 4 * 5, a * 2), a + 6);
//	printf("%d\n", ret3);
//
//	//int ret4 = a = 4, 6 * 2;
//	//printf("%d\n", ret4);
//
//	int  ret5 = a %= (a /= 2);
//	printf("%d\n", ret5);
//
//	int ret6 = a + a % 3 * (int)(2.3 * a) % 5 / 4;
//	printf("%d\n", ret6);
//
//
//}

//double f(double x) {
//    return 3 * x * x + 2 * x + 1;
//}

//void main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("a = %d b = %d\n", a, b);
//	a = a + b; b = a - b; a = a - b;
//	printf("a = %d, b = %d\n", a, b);
//}



//void main()
//{
//	int a, b, c;
//	long int u, n;
//	float x,y,z; 
//	char c1, c2;
//	a = 3; b = 478; c = -56;
//	x = 67.5678, y = 2.4, z =-189.134;
//	u = 51274, n = 123456;
//	c1 = 'a';
//	printf("\n");
//	printf("a=%2d b=%2d c=%2d\n",a,b,c);
//	printf("x = % 8.6f, y = % 8.6f, z = % 9.6f\n",x,y,z);
//	printf("x+y=5. 2f. y+z=%5,.2f, z+x=%5. 2f\n", x + y, y + z, z + x);
//	printf("x=%-10f, y=%4f,z=%3f \n", x,y,z);
//	printf("x=%e, y=%10.2e\n", x,y);
//	printf("u=%6ld, n=%x\n", u,n);
//	printf("cl=%c cl=%d(ASCII) \n", c1, c1);
//	printf("%s,%5.3s \n", "COMPUTER", "COMPUTER");
//}

//void main()
//{
//	char a, b;
//	a = getchar();
//	b = getchar();
//	putchar('\n');
//	putchar(a);
//	putchar('\n');
//	putchar(b);
//	printf("\n  %c  %c\n", a, b);
//
//}


//#define M_PI 3.14
//void convert_radians_to_dms(double radians) {
//    const double degree_per_radian = 180.0 / M_PI; // π取M_PI的值  
//    double degrees = radians * degree_per_radian;
//    int int_degrees = (int)degrees;
//    double remaining_minutes = (degrees - int_degrees) * 60;
//    int int_minutes = (int)remaining_minutes;
//    double seconds = (remaining_minutes - int_minutes) * 60;
//
//    printf("角度: %d° %d' %.2f\"\n", int_degrees, int_minutes, seconds);
//}
//
//int main() {
//    double radians;
//
//    printf("请输入弧度值: ");
//    scanf("%lf", &radians);
//
//    convert_radians_to_dms(radians);
//
//    return 0;
//}


//int main()
//{
//	int num = 0;
//	printf("请输入一个4位正整数\n");
//	scanf("%d", &num);
//	for (int i = 3; i >= 0; i--)
//	{
//		int j = pow(10,i);
//		printf("%d  ", num / j);
//		num %= j;
//	}
//	return 0;
//}


//int main() {
//    int decimal = 97;
//    unsigned char octal, hex;
//
//    // 将十进制转换为八进制  
//    octal = decimal;
//    printf("十进制数 %d 对应的八进制数是: ", decimal);
//    printf("%o\n", octal);
//
//    // 将十进制转换为十六进制  
//    hex = decimal;
//    printf("十进制数 %d 对应的十六进制数是: ", decimal);
//    printf("%x\n", hex);
//
//    return 0;
//}


//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//
//#define OFFSETOF(type,m_name)   (size_t)&(((type*)0)->m_name)
//
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}

//弓箭形状
//int main()
//{
//	int n = 0;
//	int i = 0;
//	while (scanf("%d", &n) == 1)
//	{
//
//		for (i = 0; i < n; i++)
//		{
//			//打印上半行 n row
//
//			int j = 0;
//			for (j = 0; j < n - i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//				// n+1 row
//		for (i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < n + 1 - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//每组的公务员

int main()
{
	int score = 0;
	int max = 0;
	int min = 100;
	int n = 0;
	int sum = 0;
	while (scanf("%d", &score) == 1)
	{
		n++;
		if (score > max)
		{
			max = score;
		}
		if (score < min)
		{
			min = score;
		}
		sum += score;

		if (n == 7)
		{
			printf("去掉最高和最低分的平均分是%.2lf\n", (sum - max - min) / 5.0);
			n = 0;
			max = 0;
			min = 100;
			sum = 0;
		}
	}
	return 0;
}