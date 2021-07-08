#include<iostream>
#include<vector>
#include<math.h>

#include"Maths.h"

using namespace std;

int countDigits(int x) {
	int counter = 0;
	while (x != 0) {
		cout << x << endl;
		counter++;
		x = x / 10;
	}
	return counter;
}

vector<int> createIntVector(int x) {
	vector<int> iVector;
	while (x != 0) {
		iVector.push_back(x % 10);
		x = x / 10;
	}
	reverse(iVector.begin(), iVector.end());
	return iVector;
}

int printVector(vector<int> v) {
	cout << "Print Vector: ";
	cout << "\tSize: " << v.size();
	if (v.size() > 0) {
		cout << "\t";
		for (unsigned int i = 0; i < v.size(); i++) {
			cout << v[i];
		}
	}
	cout << endl;
	return 0;
}

bool checkIfPalindrome(vector<int> v) {
	vector<int> newVector = reverseVector(v);
	for (unsigned int i = 0; i < v.size(); i++) {
		if (v.at(i) != (newVector.at(i))){
			return false;
		}
	}
	return true;
}

int largestPalindrome(int min, int max) {
	vector<int> largest;
	vector<int> current;
	for (int i = min; i <= max; i++) {
		for (int j = min; j <= max; j++) {
			current = createIntVector(i * j);
			if (checkIfPalindrome(current)) {
				printVector(current);
			}
		}
	}
	return 0;
}

vector<int> reverseVector(vector<int> v) {
	vector<int> newVector;

	for (int i = v.size()-1; i >=0; i--) {
		newVector.push_back(v[i]);
	}
	return newVector;
}

int sumOfRange(int range) {
	int sum=0;
	for (int i = 0; i <= range; i++) {
		sum += i;
	}
	return sum;
}

int productOfVector(int num) {
	vector<int> productV=createIntVector(num);
	int product = 1;
	for (unsigned int i = 0; i < productV.size(); i++) {
		product *= productV[i];
	}
	return product;
}

int squareSumOfRange(int range) {
	int product = sumOfRange(range);
	product *= product;
	return product;
}

int sumOfSquares(int range) {
	int sum = 0;
	for (int i = 0; i <= range; i++) {
		sum += (i * i);
	}
	return sum;
}

vector<int> createLargeVector(long long x) {
	vector<int> iVector;
	while (x != 0) {
		iVector.push_back(x % 10);
		x = x / 10;
	}
	reverse(iVector.begin(), iVector.end());
	return iVector;
}

double pythagoreanTheory(double a, double b) {
	double c = a * a + b * b;
	return sqrt(c);
}

double pythagoreanTriple(double a, double b) {
	double c;
	if (a < b) {
		c=a* a + b * b;
	}
	c = sqrt(c);
	return c;
}

int equalsNumber(int x) {
	for (int i=0; i < x; i++) {
		for (int j=0; j < x; j++) {
			for (int k=0; k < x; k++) {
				if (i + j + k == x) {
					//cout << "I: " << i << " J: " << j << " K: " << k << endl;
					if (pythagoreanTheory(i, j) == k) {
						cout << "I: " << i << " J: " << j << " K: " << k << endl;
					}
				}
			}
		}
	}
	return 0;
}

int collatzSequence(int start) {
	int current=start;
	int length=1;
	bool check = true;
	cout << current << " - ";
	while (check == true) {
		if (current % 2 == 0) {
			current /= 2;
		}
		else if(current%2!=0) {
			current = (current * 3) + 1;
		}
		length++;
		if (current == 1) {
			check = false;
		}
		cout << current << " - ";

	}
	cout<<endl << "Length: " << length << endl;
	return current;
}

int collatzSequenceLength(int start) {
	int current = start;
	int length = 1;
	bool check = true;
	cout << current << " - ";
	while (check == true) {
		if (current % 2 == 0) {
			current /= 2;
		}
		else if (current % 2 != 0) {
			current = (current * 3) + 1;
		}
		length++;
		if (current == 1) {
			check = false;
		}
		cout << current << " - ";

	}
	cout << endl << "Length: " << length << endl;
	return length;
}

int longestCollatzUnderGoal(int goal) {
	int longestLength = collatzSequenceLength(1);
	int currentLength = collatzSequenceLength(1);
	for (int i = 0; i <= goal; i++) {
		cout << "Length: " << currentLength << endl;
		currentLength = collatzSequenceLength(i);
		cout << currentLength << endl;
		if (currentLength >= longestLength) {
			longestLength = currentLength;
		}

	}
	return longestLength;
}

long sumOfDigitsToPower(double power) {
	long long num = pow(2, power);
	double sum = 0;
	
	cout << "Power: " << num << endl;

	vector<int> numVector = createLargeVector(num);
	cout << "SIZZE: " << numVector.size() << endl;
	for (int i = 0; i < numVector.size(); i++) {
		cout << numVector.at(i)<<endl;
		sum += numVector.at(i);
	}
	return sum;
}