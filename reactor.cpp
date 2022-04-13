#include <iostream>
#include <cmath>
#include "dPhidEantinue.h"
using namespace std;
/*dphidEantinue under 2Mev*/
struct datapoint
{
    double_t x[30]=
    {
        7.813e-3, 1.563e-2, 3.12e-2, 6.25e-2, 0.125, 0.25, 0.5, 0.75, 1.0, 1.5, 2.0, 
        2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0, 
        3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9
    };
    double_t y[30]=
    {
        0.4581, 1.8118, 7.254, 4.465, 13.07876, 15.25688, 17.31967, 17.18876, 15.47449, 10.095, 7.506 
    };
};
double_t dNdU235(double_t Enu);
double_t dNdPu239(double_t Enu);
double_t dNdU238(double_t Enu);
double_t dNdPu241(double_t Enu);
double_t dsigmadEantinue(double_t Enu);
double_t dNdU235(double_t Enu)
{
    double_t N = U235_a*exp(U235_a0+U235_a1*Enu+U235_a2*pow(Enu,2));
    return N;
}
double_t dNdPu239(double_t Enu)
{
    double_t N = Pu239_a*exp(Pu239_a0+Pu239_a1*Enu+Pu239_a2*pow(Enu,2));
    return N;
}
double_t dNdU238(double_t Enu)
{
    double_t N = U238_a*exp(U238_a0+U238_a1*Enu+U238_a2*pow(Enu,2));
    return N;
}
double_t dNdPu241(double_t Enu)
{
    double_t N = Pu241_a*exp(Pu241_a0+Pu241_a1*Enu+Pu241_a2*pow(Enu,2));
    return N;
}
double_t dsigmadEantinue(double_t Enu)
{
    double_t sum = n_f/(4*3.14159*pow(d,2))*(dNdPu239(Enu)+dNdPu241(Enu)+dNdU235(Enu)+dNdU238(Enu));
    return sum;
}
double_t reactor()
{
    struct datapoint a;
    for (int i = 11; i < 30;i++)
    {
        a.y[i] = dsigmadEantinue(a.x[i]);
    }
    //create graph
    TGraph *gr1 = new TGraph(30,a.x,a.y);
    TCanvas *c1 = new TCanvas("c1","Antineutrino flux expected at the CONNIE detector",
    800,600,800,600);
    gr1->GetXaxis()->SetTitle("Eantinue(MeV)");
    gr1->GetYaxis()->SetTitle("dsigamdEantinue(N/MeV/cm2/s)");
    gr1->GetXaxis()->CenterTitle();
    gr1->GetYaxis()->CenterTitle();
    // draw the graph with the axis,contineous line, and put
    c2->cd(4);
    gr1->Draw("AL");
    std::cout << "hello world" << std::endl;
    return 0;
}