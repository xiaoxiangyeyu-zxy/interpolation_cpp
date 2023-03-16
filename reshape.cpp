#include "reshape.h"

void reshape(double a[x_shape * y_shape][datanumber], double(&T)[x_shape][y_shape], double(&P)[x_shape][y_shape])
{
	for (int i = 0; i < x_shape; i++)
	{
		for (int j = 0; j < y_shape; j++)
		{
			T[i][j] = log(a[i * y_shape + j][0])/log(10);
			P[i][j] = log(a[i * y_shape + j][1])/log(10);
		}
	}
	//for (int i = 0; i < x_shape; i++)
	//{
	//	for (int j = 0; j < y_shape; j++)
	//	{
	//		cout << T[i][j]<<"  ";
	//		cout << P[i][j];
	//		cout << endl;
	//	}
	//	
	//}
}