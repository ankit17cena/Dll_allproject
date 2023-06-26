#include "pch.h"
#include <iostream>
#include "RR.h"

double RR::RR(const double data[6000], double pvalue) {
    double sum = 0.0;
    for (int i = 0; i < 6000; ++i) {
        sum += data[i];
    }
    return sum;
}

 
