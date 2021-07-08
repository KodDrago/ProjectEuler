#include<iostream>
#include<vector>

#include "Multiples.h"

using namespace std;

int listMultiples(int x) {
	for (int i = 1; i < x; i++) {
		if (x % i == 0) {
			cout << i << endl;
		}
	}
	return 0;
}

int smallestToNumber(int range) {
	int counter = 1;
	//int runningSum = 0;
	int num = 1;
	while(counter<=range){
		if (num % counter == 0) {
			counter++;
		}else{
			num++;
			counter = 1;
		}
	}
	return num;
}