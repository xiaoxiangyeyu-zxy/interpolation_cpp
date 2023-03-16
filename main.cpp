#include<iostream>
#include<cmath>
#include "constant.h"
#include "read_table.h"
#include "reshape.h"
#include "interpolation.h"
using namespace std;

double dataPT[x_shape * y_shape][datanumber];
double T_table[x_shape][y_shape];
double P_table[x_shape][y_shape];

int main()
{
	getdata(dataPT);

	reshape(dataPT, T_table,P_table);
	double Den = pow(10,2.3);
	double Energy = pow(10,20.4);
	double inter_result[datanumber];
	interpolation(Den, Energy, inter_result);

	cout << inter_result[0]<<"  " <<inter_result[1] ;

	system("pause");
	return 0; 
}