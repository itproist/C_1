#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

#define TASK_10

#ifdef TASK_1
int main() 
{
	int fact = 1, number;
	scanf("%d", &number);
	for (int i = 1; i <= number; ++i)
	{
		fact *= i;
	}
	printf("factorial %d .\n", fact);
	return 0;
}
#endif

#ifdef TASK_2
int main() 
{
	int num, i, j, sum, n, count;
     printf("Enter a number to check for a prime: ");
     scanf("%d", &num);
     int isPrime = 1;
     for (i = 2; i <= num / 2; i++) {
         if (num % i == 0) {
             isPrime = 0;
             break;
         }
     }
     printf("Number %d %s простое.\n", num, isPrime ? "является" : "не является");
     return 0;
}

#endif

#ifdef TASK_3
int main() 
{
	int num, i, j, sum, n, count;
	printf("Prime numbers up to %d: ", num);
	for (i = 2; i <= num; i++) {
		int isPrime = 1;
		for (j = 2; j <= i / 2; j++) {
			if (i % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}

#endif

#ifdef TASK_4

int main() 
{
	int num, i;
	printf("Number divisors %d: ", num);
	for (i = 1; i <= num; i++) {
		if (num % i == 0) printf("%d ", i);
	}
	printf("\n");
	return 0;
}

#endif

#ifdef TASK_5
int main() 
{
	int n, sum, i;
	printf("Enter n: ");
	scanf("%d", &n);
	sum = 0;
	for (i = 0; i < n; i++) {
		sum += 2* i+1;
	}
	printf("Summa %d:", sum);
	
	return 0;
}
#endif

#ifdef TASK_6

int main() 
{	
	float i, y;
	for (i = -2.0; i <= 2.0; i += 0.5)
	{
		y = -2.4 * i * i + 5 * i - 3;
		printf("%.1f  |  %.2f\n", i, y);
	}
	
     return 0;
}
#endif

#ifdef TASK_7
int main() 
{
	int count, i, num, min;
	printf("Enter the number of fractional numbers: ");
	scanf("%d", &count);
	float min;
	printf("Enter fractional numbers:\n");
	for (i = 0; i < count; i++) {
		float num;
		scanf("%f", &num);
		if (i == 0 || num < min) min = num;
	}
	printf("Minimum number: %.2f\n", min);
    
     return 0;
}
#endif

#ifdef TASK_8
int main() 
{
	double pi = 0.0;
	double precision;
	int n = 1;
	int sign = 1;
	
	printf("Введите точность: ");
	scanf("%lf", &precision);
	
	double term = 1.0; // Начальный член ряда
	while (term >= precision) {
		pi += sign * (1.0 / n);
		sign = -sign; // Меняем знак
		n += 2; // Переходим к следующему нечетному числу
		term = (1.0 / n) * sign; // Новый член ряда
	}
	
	pi *= 4; // Умножаем на 4, чтобы получить Пи
	
	printf("Приближенное значение числа Пи: %.15f\\n", pi);
	
	return 0;
}

#endif

#ifdef TASK_9
int main() 
{
	int number, sum = 0;
	printf("Введите число: ");
	scanf("%d", &number);
	
	for (int i = 1; i <= number / 2; i++) {
		if (number % i == 0) {
			sum += i; // Суммируем делители
		}
	}
	
	if (sum == number && number != 0) {
		printf("%d является совершенным числом.\\n", number);
	} else {
		printf("%d не является совершенным числом.\\n", number);
		}
    
    return 0;
}

#endif

#ifdef TASK_10
int main() 
{
	int limit;
	printf("Введите предел (включительно): ");
	scanf("%d", &limit);
	printf("Совершенные числа до %d:\\n", limit);
	for (int num = 1; num <= limit; num++) {
		int sum = 0;
		
		for (int i = 1; i <= num / 2; i++) {
			if (num % i == 0) {
				sum += i; // Суммируем делители
			}
		}
		
		if (sum == num && num != 0) {
			printf("%d\\n", num); // Выводим совершенное число
		}
	}
	
	return 0;
}
#endif