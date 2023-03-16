#include<iostream>
#include<cmath>
#include "constant.h"

extern double T_table[x_shape][y_shape];
extern double P_table[x_shape][y_shape];

void interpolation(double den, double energy, double(&result)[datanumber]);