#include"produceTestData.h"
#include<math.h>
#include <cstdlib>
#include<iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	//produceTestData();
	for (int i=0;i<200;i++)
	{
		double d = ((double)rand() / (RAND_MAX));
		double c = ((double)rand() / (RAND_MAX));
		cout << d << endl;
		double x = sqrt(-2 * log(d)) * cos(2 * 3.1415926 * c);
		x = abs( x);
		cout << x << endl;
	
	}
	


}

