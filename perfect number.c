#include <stdio.h>
#include<math.h>
int count=0;
int isPerfect(long long int n)
 {
	long long int dsum = 0;	
	long long int i;
	count++;
	for (i = 1; i <= sqrt(n); ++i) 
	{
		count++;
		count++;
		count++;
		if (n % i == 0)
		 {
            count++;
			if (i == n / i) 
			{
				count++;
				dsum += i;
			}
			else 
			{
				count++;
				dsum += i;
				count++;
				dsum += n / i;
				count++;
			}
			count++;
		}
		count++;
	}
	count++;
    dsum = dsum - n;
    count++;
	if (dsum == n)
	 return 1;
	else
     	return 0;
}
int isPrime(long long int n)
 {
	if (n == 1)
		return 0;
		
	for (int i = 2; i <= sqrt(n); ++i) {
		count++;
		if (n % i == 0)
			return 0;
	}
	return 1;
    count++;
}
int main() {
	long long int n, i, temp;
	printf("Enter n: ");
	count++;
	scanf("%d", &n);
    count++;
	i = 1;
	count++;
	while (n > 0)
	 {
        count++;
		if (isPrime(i) == 1) 
		{
			count++;
			temp = pow(2, i - 1) * (pow(2, i) - 1);
			count++;
			if (isPerfect(temp) == 1)
			 {
			 	count++;
				printf("%d ", temp);
				count++;
				n = n - 1;
				count++;
			}
		}
		i = i + 1;
		count++;
	}
	count++;
	printf("\n");
    printf("time complexity : %d",count);
}
