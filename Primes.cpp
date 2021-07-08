#include<iostream>
#include<math.h>

using namespace std;

int sumOfDigits(int x) {
	int count = 0;
	int sum=0;
	while (x != 0) {
		cout << x << endl;
		sum += x % 10;
		x /= 10;
		count++;
	}
	return sum;
}

bool findIfPrime(int x) {
	bool isPrime = true;
	int counter = 0;
	for (int i = 1; i <= x; i++) {
		if (x%i==0) {
			counter++;
		}
	}
	if (counter == 2) {
		isPrime = true;
		return isPrime;
	}
	else {
		return false;
	}
	/*if ((x == 0) || (x == 1)){
		isPrime = false;
	}
	else {
		for (int i = 2; i <= x / 2; ++i) {
			if (x % i == 0) {
				isPrime = false;
				break;
			}
		}
	}
	return isPrime;*/
}

int countPrime(int goal) {
	int num = 0;
	int counter = 0;
	while (counter <= goal) {
		if (findIfPrime(num)) {
			counter++;
			cout << "Count: " << counter << endl << "Number: " << num << endl;
		}
		num++;
	}
	return num;
}

long sumOfPrimes(int goal) {
	long sum = 0;
	for (int i = 0; i <=goal; i++) {
		if (findIfPrime(i)) {
			//cout << "P: " << i << endl;
			sum+=i;
		}
	}
	return sum;
}

