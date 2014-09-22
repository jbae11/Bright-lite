#ifndef BURNUPCALC_H_INCLUDED
#define BURNUPCALC_H_INCLUDED

#include<iostream>
#include<vector>
#include<regex>
#include<iterator>
#include<fstream>
#include<algorithm>
#include<map>
#include "structures.h"
#include "origenBuilder.h"
#include "cyclus.h"
//#include <eigen3/Eigen/Eigen>
//#include <armadillo>




double intpol(double y0, double y1, double x0, double x1, double x);
fuelBundle regionCollapse(fuelBundle fuel);
std::map<int, double> tomass (int ti, double time, isoInformation isoinfo);
fuelBundle phicalc_simple(fuelBundle core);
fuelBundle phicalc_cylindrical(fuelBundle core);
double dest_to_siga(double dest);
double prod_to_nusigf(double prod);
double kcalc(fuelBundle core);
fuelBundle burnupcalc(fuelBundle core, int mode, double tolerance);

#endif // BURNUPCALC_H_INCLUDED

