#include "pch.h"
#include "Combine_dll.h"

void New_FFT(const double Data[250])
{
    FFT::struct0_T* powerband_output = nullptr;
    double fs=0.0;
    double PSD[129];
    double Freq[129];
    FFT::FFT(Data, fs, PSD, Freq, powerband_output);
}

double New_HR(const double inputIRData[3000], const double inputAXData[3000],
    const double inputAYData[3000], const double inputAZData[3000])
{
    HR::HRStackData* SD = nullptr;
    return HR::HR(SD, inputIRData, inputAXData, inputAYData, inputAZData);
}

void New_HRV(const double data[12000])
{
    HRV::HRVStackData* SD = nullptr;
    double hrvData[13];
    HRV::HRV(SD, data, hrvData);
}

double New_SPO2(const double inputRData[100], const double inputIRData[100])
{
    return SPO2::SPO2(inputRData, inputIRData);
}

int New_RR(const double data[6000])
{
    double pvalue=0.0;
    return RR::RR(data, pvalue);
}

double New_SSVEP(const double data1[2500], const double data2[2500])
{
    SSVEP::SSVEPStackData* SD = nullptr;
    return SSVEP::SSVEP(SD, data1, data2);
}


