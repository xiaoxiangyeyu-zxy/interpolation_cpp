#include "read_table.h"

void getdata(double(&a)[x_shape * y_shape][datanumber])
{
	ifstream infile;
	infile.open("table_29_21.txt", ios::in);
	if (!infile.is_open())
	{
		cout << "error" << endl;
	}
	for (int i = 0; i < x_shape * y_shape; i++)
	{
		for (int j = 0; j < datanumber; j++)
		{
			infile >> a[i][j];
		}
	}
	infile.close();
	//for (int i = 0; i < x_shape * y_shape; i++)
	//{
	//	for (int j = 0; j < datanumber; j++)
	//	{
	//		cout << a[i][j]<<"  ";
	//	}
	//	cout << endl;
	//}
}