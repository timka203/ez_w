#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
using namespace std;
void task23()
{
	int a[10] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = 0 + rand() % 200;
		printf("%d\n", a[i]);
	}
	int min = 0;
	int h;
	printf("--------------\n");
	for (int i = 1; i < 9; i++)
	{
		for (size_t g = i; g < 9; g++)
		{

			if (a[i]< a[g + 1])
			{
				h = a[g + 1];
			}
			a[i] = h;
		}
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}



}
void task22()
{
	int a[10] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = 0 + rand() % 200;
		printf("%d\n", a[i]);
	}
	int h;
	printf("--------------\n");
	for (int i = 1; i < 10; i++)
	{
		for (size_t g = i; g < -1; g--)
		{
			if (a[g] < a[g - 1])
			{
				h = a[g];
				a[g] = a[g - 1];
				a[g -1] = h;
				
			}
			else break;
		}
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}


}
bool f5(char c[])
{
	int f = 0;
	int d = 0;
	int r = 0;
	for (int i = 0; i < strlen(c); i++)
	{
		if (c[i] == '(')
			f++;
		if (c[i] == ')')
			f--;
		if (f <= -1)
			return false;
		if (c[i] == '{')
			d++;
		if (c[i] == '}')
			d--;
		if (d <= -1)
			return false;
		if (c[i] == '[')
			r++;
		if (c[i] == ']')
			r--;
		if (r <= -1)
			return false;
		
	}
	if (f==0&&d==0&&r==0)
	return true;
	else return false;

}
void task21()
{
	char c[10] = "Hello";
	cin >> c;
	cout << f5(c) << endl;

}
void task20()
{
	char c[10] = "Hello";
	cin >> c;
	for (int i= 0; i < strlen(c); i++)
	{

		cout << c[i] << endl;
	}


}

void f4(int a[], int n)
{
	int g;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 200;
		printf("%d\n", a[i]);
	}
	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			if (a[j] > a[j + 1])
			{
				g = a[j];
				a[j] = a[j + 1];
				a[j + 1] = g;

			}
		}
	}
	printf("-------------\n");
	for (size_t i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}

}
void task19()
{
int	a[10] = { 0 };
int n = 10;
f4(a, n);

}
int f3(int a[], int &f, int n)
{
	int min1 = 0;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 200;
		if (a[i] > min1)
		{
			min1 = a[i];
			f = i;
		}
		printf("%d \n", a[i]);
		
	}
	printf("-----------\n");
	return min1;

}
int f3(double a[], int &f, int n)
{
	int min1 = 0;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 200;
		if (a[i] > min1)
		{
			min1 = a[i];
			f = i;
		}
		printf("%d \n", a[i]);
	}
	printf("-----------\n");
	return min1;

}
void task18()
{

	int a[10] = { 0 };
	int min;
	int n = 10;
	printf("-----------\n");
	cout << f3(a, min, n) << " ";
	cout << min << endl;
}



int f2(int a[], int &f,int n)
{
	int min1 = 200;
	for (size_t i = 0; i <n ; i++)
	{
		a[i] = 0 + rand() % 200;
		if (a[i] < min1)
		{
			min1 = a[i];
			f = i;
		}
		printf("%d \n", a[i]);
	}
	return min1;

}
int f2(double a[], int &f, int n)
{
	int min1 = 200;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 200;
		if (a[i] < min1)
		{
			min1 = a[i];
			f = i;
		}
		printf("%d \n", a[i]);
	}
	return min1;

}
void task17()
{
	int a[10] = { 0 };
	int min;
	int n = 10;
	printf("-----------\n");
	cout << f2(a, min, n)<<" ";
	cout << min << endl;
}
int  f1(int a[], int n, int h)
{
	int c = 0;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 200;
		if (a[i] < h)
			c++;
		printf("%d \n", a[i]);
	}
	return c;

}
int  f1(double a[], int n, double h)
{
	int c = 0;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 200;
		if (a[i] < h)
			c++;
		printf("%d \n", a[i]);
	}
	return c;

}
void task16()
{
	int n = 10;
	int a[10] = { 0 };
	int h;
	cin >> h;
	cout << f1(a, n, h);
}



int  f(int a[], int n,int h)
{
	int c = 0;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 200;
		if (a[i] > h)
			c++;
		printf("%d \n", a[i]);
	}
	return c;

}
int  f(double a[], int n,double h)
{
	int c = 0;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 200;
		if (a[i] > h)
			c++;
		printf("%d \n", a[i]);
	}
	return c;

}
void task15()
{
	int n=10;
	int a[10] = { 0 };
	int h;
	cin >> h;
     cout << f(a, n,h);
}

int func4(int a[], int n)
{
	int c = 0;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 2;
		if (a[i] == 0)
			c++;
		printf("%d \n", a[i]);
	}
	return c;
}
int func4(double a[], int n)
{
	int c = 0;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 2;
		if (a[i] == 0)
			c++;
		printf("%d \n", a[i]);
	}
	return c;
}

void task14()
{
	int a[10];
	cout << func4(a, 10);
}
double func3(double a, int n)
{
	a = double(int(a*pow(10, n)+0.5)) / pow(10, n);
	return a;
}
void task13()
{
	double a;
	int n;
	cin >> a;

	printf("-----------------\n");
	cin >> n;
	cout <<fixed<<setprecision(n)<< func3(a, n);

}
void func2(int a[], int b[], int c[],int s)
{
	for (size_t i = 0; i < 10; i++)
	{

		a[i] = 1 + rand() % 100;
		b[i] = 1 + rand() % 100;
		printf("%d   %d\n", a[i], b[i]);
	}
	printf("-----------------\n");
	for (size_t i = 0; i < 10; i++)
	{
		c[i] = a[i] + b[i];
		printf("%d \n", c[i]);
	}



}
void task12()
{
	int a[10] = { 0 };
	int b[10] = { 0 };
	int c[10] = { 0 };
	func2(a,b,c,10);
}
void printArray(int a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = (i + 1) * 10;
	}
}
	void fillArray(int a[], int n)
	{
		for (size_t i = 0; i < n; i++)
		{
			cout << a[i] << " ";
			cout << endl;
		}
	}


void task11()
{
	int a[5] = { 1,2,3,4,5 };
	printArray(a, 5);
	fillArray(a, 5);
	printArray(a, 5);

}
int func1(int a[], int size,int k)
{
	int low=0;
	int high = size - 1;
	int middle = 0;
	while (low <= high)
	{
		middle = (low + high)/2;
		if (a[middle] < k)
			low = middle + 1;
		else if (a[middle] > k)
		{
			high = middle - 1;
		}
		else
			return middle+1;
	}
	return -123;
}    
void task10()
{
	int a[10] = { 0 };
	int k;
	int g;

	for (size_t i = 0; i < 10; i++)
	{
		a[i] = 1 + rand() % 100;
		printf("%d\n", a[i]);
	}
	printf("--------");
	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			if (a[j] > a[j+1])
			{
				g = a[j];
				a[j] = a[j+1];
				a[j+1] = g;

			}
		}
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	cin >> k;
	cout << func1(a,10,k) << endl;
}
void  AddLeftDigit(int &a, int d)
{
	int g = a;
	int f = 0;
	while (g)
	{
		g = g / 10;
		f++;
	}

	a = (d*pow(10,f ))+a ;

}
void task9()
{
	int a;
	int d = 1 + rand() % 8;
	cin >> a;
	printf("--------\n");
	AddLeftDigit(a, d);
	cout << a << endl;


}
void AddRightDigit(int &a, int d)
{
	a = (a * 10) + d;
}
void task8()
{
	int a;
	int d = 1 + rand() % 8;
	cin >> a;
	printf("--------\n");
	AddRightDigit(a,d);
	cout << a << endl;

}
void   InvertDigits(int a)
{
	int d[110] = { 0 };
	int f=0;
	
	for (size_t i = 0; i < 10; i++)
	{
		
		d[i] = a % 10;
		a = a / 10;
		if (a >= 1)
		{
			f++;
		}
	}
	for (size_t i = 0; i <= f; i++)
	{
			printf("%d", d[i]);
	}
}
void task7()
{
	int a;
	cin >> a;
	printf("--------\n");
	InvertDigits(a);
	



}
void  DigitCountSum(int a, int &b,int &f)
{
	int d[10] = { 0 };
	if (a < 10)
	{
		b = 1;
	}
	for (size_t i = 0; i < 10; i++)
	{
		if (a / 10 >= 10)
		{
			b++;
		}
		d[i] = a % 10;
		a = a / 10;
	}
	for (size_t i = 0; i < 10; i++)
	{
		f = f + d[i];
	}
}
void task6()
{
	int a;
	int b=2;
	int f=0;
	cin >> a;
	DigitCountSum(a, b, f);
	printf("--------\n");
	cout << b << endl;
	cout << f << endl;

}
void change_number4(int a, int b, int c,int d,int &e,int &f)
{
	int x, y;
	
	x = sqrt(pow(2, c - a));
	y = sqrt(pow(2, d - b));
	e = x * y;
	f = 2 * (x + y);
}
void task5()
{
	int a, b;
	int c,d;
	int e, f;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	change_number4(a, b, c,d,e,f);
	printf("\n______________\n");
	cout << e << endl;
	cout << f << endl;
}
void change_number3(int a, int &b, int &c)
{
	b = 3 * a;
	c = pow(2, a)*(sqrt(3) / 4);
}

void task4()
{
	int a, c;
	int b;
	cin >> a;
	change_number3(a, b, c);
	cout << b << endl;
	cout << c << endl;
}
void change_number2(int a, int b, int &c, int &d)
{
	c = (a + b) / 2;
	d = sqrt(a*b);
}
void task3()
{
	int a, c;
	int b, d;
	cin >> a;
	cin >> b;
	change_number2(a, b, c, d);
	cout << c << endl;
	cout << d << endl;


}
void change_number1(int a, int &b,int &c,int &d)
{
	b = a * a;
	c = a * a*a;
	d = a * a*a*a;
}
void task2()
	{
	int a,c;
	int b,d;
	cin >> a;
	change_number1(a, b,c,d);
	cout << b<<endl;
	cout << c<<endl;
	cout << d<<endl;

	}

void change_number(int a,int &b)
{
	b=a* a*a;
}

void task1()
{
	int a;
	int b;
	cin >> a;
    change_number(a,b);
	cout << b;

 }
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;	
		case 3: task3(); break;
		case 4: task4(); break;
		case 5: task5(); break;
		case 6: task6(); break;
		case 7: task7(); break;
		case 8: task8(); break;
		case 9: task9(); break;
		case 10: task10(); break;
		case 11: task11(); break;
		case 12: task12(); break;
		case 13: task13(); break;
		case 14: task14(); break;
		case 15: task15(); break;
		case 16: task16(); break;
		case 17: task17(); break;
		case 18: task18(); break;
		case 19: task19(); break;
		case 20: task20(); break;
		case 21: task21(); break;
		case 22: task22(); break;
		case 23: task22(); break;


		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}

