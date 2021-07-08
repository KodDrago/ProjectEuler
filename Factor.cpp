#include<iostream>
#include "Primes.h"
using namespace std;

int findFactors(int x) {
	int counter=0;
	for(int i = 1; i <= x; i++) {
		if (x % i == 0) {
			counter++;
			//cout << i<<endl;
		}
	}
	//cout << "Factors";
	return 0;
}

int countFactors(int x) {
	int counter = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			counter++;
		}
	}
	return counter;
}

int countPrimeFactors(int x) {
	int counter = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			counter++;
		}
	}
	return counter;
}

long long findMaxPrimeFactors(long long x) {
	//cout << "Number of factors: " << countFactors(x)<<endl;
	long int counter = 0;
	long int i = 0;
	int max = 0;
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			counter++;
			if (findIfPrime(i) == 1) {
				//cout << "Prime: " << i << endl;
				if (i > max) {
					max = i;
				}
			}
			else {
				//cout << "Not Prime" << endl;
			}
			
		}
		
	}
	//cout << "Factors";
	return max;
}
