//
//  Demo.cpp
//  operatorOverload
//
//  First version by Adam Lev-Ari on 29/12/2019.
//  Second version by Erel Segal-Halevi on 22/04/2020.
//

#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

int main() {
    RealVariable x;

//    cout << solve(2*x-4.0 == 10) << endl;  // 7
//    cout << solve((x^2) == 16) << endl;   // 4 or -4
//    cout << solve((x^2) == -16) << endl;  // exception: no real solution
//    cout << solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) << endl;   // 4 or -4
//    double xvalue = solve(2*x-4.0 == 10.0);   // xvalue == 7

    ComplexVariable y;
    std::complex<double> yvalue = solve(2*y-4 == 10);
    cout << yvalue << endl;  // 7+0i  (can be in any other format)
//    cout << solve((y^2) == 16) << endl;   // 4+0i or -4+0i
//    cout << solve((y^2) == -16) << endl;  // 0+4i or 0-4i
//    cout << solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) << endl;   // 4+0i or -4+0i
//    cout << solve(y+5i == 2*y+3i) << endl;   // 0+2i
    cout << solve ( (y^2) == -9.9990) << endl;
    cout <<std::complex<double> (0,3.1621)<< endl;
    cout <<solve ( (y^2)== -9.9990)<< endl;
    cout <<std::complex<double> (0,-3.1621)<< endl;

    return 0;
}