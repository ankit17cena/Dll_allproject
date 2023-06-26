#pragma once

#include </Users/Malini/source/repos/FFT/FFT.h>
#include </Users/Malini/source/repos/HR/HR.h>
#include </Users/Malini/source/repos/HRV/HRV.h>
#include </Users/Malini/source/repos/SPO2/SPO2.h>
#include </Users/Malini/source/repos/RR/RR.h>
#include </Users/Malini/source/repos/SSVEP/SSVEP.h>

#ifndef MY_LIBRARY_H
#define MY_LIBRARY_H

#ifdef _WIN32
#ifdef MY_LIBRARY_EXPORTS
#define MY_LIBRARY_API __declspec(dllexport)
#else
#define MY_LIBRARY_API __declspec(dllimport)
#endif
#else
#define MY_LIBRARY_API
#endif

#ifdef __cplusplus
extern "C" {
#endif

    MY_LIBRARY_API void New_FFT(const double Data[250]);
    MY_LIBRARY_API double New_HR(const double inputIRData[3000], const double inputAXData[3000],
        const double inputAYData[3000], const double inputAZData[3000]);
    MY_LIBRARY_API void New_HRV(const double data[12000]);
    MY_LIBRARY_API double New_SPO2(const double inputRData[100], const double inputIRData[100]);
    MY_LIBRARY_API double New_SSVEP(const double data1[2500], const double data2[2500]);
    MY_LIBRARY_API int New_RR(const double data[6000]);

#ifdef __cplusplus
}
#endif

#endif /* MY_LIBRARY_H */

