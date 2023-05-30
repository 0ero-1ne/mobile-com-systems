#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main()
{
	const int n = 6;//число станций

	int a[n][n] =  //матрица сети
	{
		0,0,0,0,0,0,
		0,0,0,0,0,0,
		0,0,0,0,0,0,
		0,0,0,0,0,0,
		0,0,0,0,0,0,
		0,0,0,0,0,0
	};

	int D = 114;	//координационное расстояние

	double radius = 38.0; // радиус зоны обслуживания
	double R0 = radius *(sqrt(3.0));
	double p12 = R0 * (2 );	
	double p13 = R0 * (1 * (sqrt(3.0)));  
	double p14 = R0 * (2 );  
	double p15 = R0 * (sqrt(7.0)); 
	double p16 = R0 * (4 * (sqrt(3.0))); 
	double p23 = R0 * (1 * (sqrt(3.0))); 
	double p24 = R0 * (sqrt(7.0)); 
	double p25 = R0 * (2 );  
	double p26 = R0 * (4 * (sqrt(3.0))); 
	double p34 = R0 * (1 * (sqrt(3.0)));  
	double p35 = R0 * (1 * (sqrt(3.0)));  
	double p36 = R0 * ((sqrt(7.0)) * (sqrt(3.0))); 
	double p45 = R0 * (1 * (sqrt(3.0)));  
	double p46 = R0 * (2 );  
	double p56 = R0 * (1 * (sqrt(3.0)));  


	if (p12 < D) {
		a[0][1] = 1;
		a[1][0] = 1;
	}

	if (p13 < D) {
		a[0][2] = 1;
		a[2][0] = 1;
	}

	if (p14 < D) {
		a[0][3] = 1;
		a[3][0] = 1;
	}

	if (p15 < D) {
		a[0][4] = 1;
		a[4][0] = 1;
	}

	if (p16 < D) {
		a[0][5] = 1;
		a[5][0] = 1;
	}

	if (p23 < D) {
		a[1][2] = 1;
		a[2][1] = 1;
	}

	if (p24 < D) {
		a[1][3] = 1;
		a[3][1] = 1;
	}

	if (p25 < D) {
		a[1][4] = 1;
		a[4][1] = 1;
	}

	if (p26 < D) {
		a[1][5] = 1;
		a[5][1] = 1;
	}

	if (p34 < D) {
		a[2][3] = 1;
		a[3][2] = 1;
		
	}

	if (p35 < D) {
		a[2][4] = 1;
		a[4][2] = 1;
	}

	if (p36 < D) {
		a[2][5] = 1;
		a[5][2] = 1;
	}

	if (p45 < D) {
		a[3][4] = 1;
		a[4][3] = 1;
	}

	if (p46 < D) {
		a[3][5] = 1;
		a[5][3] = 1;
	}

	if (p56 < D) {
		a[4][5] = 1;
		a[5][4] = 1;
	}

	cout << "Матрица :" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	system("pause");
}