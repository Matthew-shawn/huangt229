#include "global_variable.h"
#include "pion_decay_at_rest.h"
#include "COHERENT_variable.h"
#include <iostream>
#include <cmath>
using namespace std;
/*datapoint 1708.01294*/
    struct datapointM
    {
    Double_t y[75] =
    {
        3.14516129032, 1.23991935484, 4.6875, 
        -0.9375, -3.20564516129, 1.23991935484, 
        -5.92741935484, -10.1008064516, -2.11693548387, 
        8.04435483871, 0.0604838709677, 15.8467741935, 
        11.1290322581, 0.423387096774, 21.4717741935, 
        24.0120967742, 11.4012096774, 36.623, 
        25.0100806452, 13.9415322581, 36.0786, 
        21.1088709677, 11.0383064516, 30.8165322581, 
        17.1169354839, 8.04435483871, 25.9173387097, 
        4.95967741935, -3.02419354839, 13.0342741935, 
        9.94959677419, 2.51008064516, 17.3891129032, 
        6.04838709677, -0.9375, 12.8528225806, 
        -0.0302419354839, -6.47177419355, 6.41129032258, 
        5.05040322581, -2.93346774194, 12.8528225806, 
        9.04233870968, 2.41935483871, 15.4838709677, 
        5.95766129032, 0.151209677419, 11.7641129032, 
        -5.11088709677, -10.372983871, 0.332661290323, 
        4.95967741935, -1.30040322581, 11.310483871, 
        15.0302419355, 8.86088709677, 21.1088709677, 
        -0.9375, -7.74193548387, 5.68548387097, 
        -0.9375, -7.28830645161, 5.32258064516,
        -4.02217741935,-9.46572580645, 1.42137096774, 
        -4.92943548387, -11.0987903226, 1.05846774194, 
        8.13508064516, 2.0564516129, 13.9415322581, 
        -7.01612903226, -13.4576612903, -0.665322580645
    };
    };
/*Prompt neutrons*/
    struct rawdataM
    {
        Double_t x[50] = 
        {
            0.5,1.5,2.5,3.5,4.5,5.5,6.5,7.5,8.5,9.5,10.5,11.5,12.5,
            13.5,14.5,15.5,16.5,17.5,18.5,19.5,20.5,21.5,22.5,23.5,
            24.5,25.5,26.5,27.5,28.5,29.5,30.5,31.5,32.5,33.5,34.5,
            35.5,36.5,37.5,38.5,39.5,40.5,41.5,42.5,43.5,44.5,45.5,
            46.5,47.5,48.5,49.5
        };
        Double_t y[50] = 
        {
            0.5526297688, 0.3600910306, 0.2893956006, 0.2455627024, 0.2146807015, 
            0.1870733798, 0.1672490835, 0.1485182494, 0.1309850961, 0.1176154017, 
            0.1059512645, 0.09618978202, 0.08857161552, 0.0814935416, 0.07583297789, 
            0.07025010884, 0.06572848558, 0.06062696502, 0.05677618831, 0.05254071578, 
            0.04883775488, 0.04655988514, 0.04468566552, 0.04201362282, 0.03922787309, 
            0.03755453229, 0.03586792201, 0.03401644155, 0.03259514272, 0.03017514199, 
            0.02954977006, 0.02846010774, 0.02676591836, 0.02588471211, 0.02438192442, 
            0.02406544797, 0.02307243273, 0.02263846248, 0.02197708562, 0.02133844793, 
            0.02100870572, 0.02059747651, 0.01988303661, 0.01959309168, 0.01897908933, 
            0.01875547133, 0.01815663092, 0.01761464216, 0.01659699157, 0.01667658426

        };
    };
    struct promptneutronM
    {
        Double_t x[50] = {0};
        Double_t y[50] = {0};

    };
    struct plotM
    {
        Double_t x[50] = {0};
        Double_t y[50] = {0};
    };
    struct nucleusM
    {
        Double_t Cs[5] = {55,78,0.5,4.804,5.01};
        Double_t I[5] = {53,74,0.5,4.750,4.94};
        /*Z,N,abundance,Rp experiment,Rn theory*/
    };
Double_t pion_decay_NEDofFnumubar(Double_t Enu);
Double_t pion_decay_NEDofFnue(Double_t Enu);
Double_t NERofEnumubarminF(Double_t MNuc,Double_t Er);
Double_t NERofEnueminF(Double_t MNuc,Double_t Er);
Double_t RERofErnumumaxF(Double_t MNuc);
Double_t RERofErnumubarmaxF(Double_t MNuc);
Double_t RERofErnuemaxF(Double_t MNuc);
Double_t R0HelmF(Double_t Rrms,Double_t s);
Double_t HelmF(Double_t Q,Double_t R0,Double_t s);
Double_t FF(Double_t Q,Double_t Rrms,Double_t s);
Double_t acctheta(Double_t x);
Double_t accF(Double_t x);
Double_t ErF(Double_t PE);
Double_t dErdPE(Double_t x);
Double_t dsigmadErF(Double_t ZNuc,Double_t NNuc,Double_t MNuc,Double_t Er,Double_t Enu,Double_t Rprms,Double_t Rnrms,Double_t s);
Double_t dNnumudErF(Double_t ZNuc,Double_t NNuc,Double_t MNuc,Double_t Er,Double_t Rprms,Double_t Rnrms,Double_t s);
Double_t dNnumubardErF(Double_t ZNuc,Double_t NNuc,Double_t MNuc,Double_t Er,Double_t Rprms,Double_t Rnrms,Double_t s);
Double_t dNnuedErF(Double_t ZNuc,Double_t NNuc,Double_t MNuc,Double_t Er,Double_t Rprms,Double_t Rnrms,Double_t s);
Double_t dNdErMF(Double_t ErkeV);
Double_t dNdPEMF(Double_t PE);
Double_t pdg()
{
    Double_t sum;
    struct datapointM a;
    struct rawdataM b;
    struct promptneutronM c;
    struct plotM d;
    for (Int_t i = 0; i < 25; i++)
    {
        Double_t temp;
        temp = (b.y[2*(i+1)-2]*accF(b.x[2*(i+1)-2])+b.y[2*(i+1)-1]*accF(b.x[2*(i+1)-1]))*7.47594;
        c.x[(i+1)-1] = b.x[2*(i+1)-2]+0.5;
        c.y[(i+1)-1] = temp;
        d.x[2*(i+1)-2] = b.x[2*(i+1)-2]-0.5;
        d.x[2*(i+1)-1] = b.x[2*(i+1)-1]+0.5;
        d.y[i] = temp;
    }
    /*recoil energy spectrum*/
    const Int_t n1 = 380;
    Double_t p[n1];
    Double_t q[n1];
    Double_t ErkeV;
    p[0]=0;
    q[0]=160;
    // build the arrays with the coordinate of points
    for (Int_t i=1; i<n1; i++) 
    {
        p[i] = i*0.1;
        ErkeV = p[i];
        q[i] = dNdErMF(ErkeV);
    }
    //create graph
    TGraph *gr1 = new TGraph(n1,p,q);
    TCanvas *c2 = new TCanvas ("c2","Recoil Energy",
    800,600,800,600);
    gr1->GetXaxis()->SetTitle("Recoil Energy(KeV)");
    gr1->GetYaxis()->SetTitle("Counts");
    gr1->GetXaxis()->CenterTitle();
    gr1->GetYaxis()->CenterTitle();
    // draw the graph with the axis,contineous line, and put
    c2->cd(4);
    gr1->Draw("AL");
    /*Nu3MF*/
    /*error bar*/
    TCanvas *c3 = new TCanvas ("c3","Recoil Energy",800,600,800,600);
    c3->SetFillColor(0);
    c3->SetGrid();
    c3->GetFrame()->SetFillColor(21);
    c3->GetFrame()->SetBorderSize(12);
    const Int_t n = 25;
    Double_t x[n];
    Double_t y[n];
    Double_t eyl[n];
    Double_t eyh[n];
    for (Int_t i=0;i < 25; i++)
    {
        x[i] = 2*(i+1)-1;
        y[i] = a.y[3*(i+1)-3];
        eyl[i] =  a.y[3*(i+1)-3]-a.y[3*(i+1)-2];
        eyh[i] = a.y[3*(i+1)-1]-a.y[3*(i+1)-3];
    }
    int step = 20;
    const int n2 = 30;
    Double_t Nu3Mx[n2];
    Double_t Nu3My[n2];
    Double_t NPM[n2];
    for(int i = 0;i<15;i++){
    Double_t PEfrom = 2*i;
    Double_t PEto = 2*i+2;
    Double_t sum=0;
    Double_t h = (PEto-PEfrom)/step;
    for(int ix=0;ix<step;ix++){
    Double_t x = PEfrom + ix*h;
    sum = sum + h*dNdPEMF(x+h/2.0);
    }
    Nu3Mx[2*i]=2*i;
    Nu3Mx[2*i+1]=2*i+2;
    Nu3My[2*i]=sum;
    Nu3My[2*i+1]=sum;
    NPM[2*i]=sum+d.y[i];
    NPM[2*i+1]=sum+d.y[i];
    }
    TGraph *gr2 = new TGraph(n2,Nu3Mx,Nu3My);
    TGraph *gr3 = new TGraph(n2,Nu3Mx,NPM);
    auto gr = new TGraphAsymmErrors(n,x,y,0,0,eyl,eyh);
    gr->SetTitle("Statistical Errorbars of COHERENT");
    gr->SetMarkerColor(1);
    gr->SetMarkerStyle(8);
    gr2->GetXaxis()->SetTitle("Number of photoelectrons (PE)");
    gr2->GetYaxis()->SetTitle("Res. counts / 2 PE");
    gr2->GetXaxis()->CenterTitle();
    gr2->GetYaxis()->CenterTitle();
    gr2->SetLineColor(2);
    gr2->GetXaxis()->SetRangeUser(0,38);
    gr2->GetYaxis()->SetRangeUser(-12,40);
    gr3->SetLineStyle(2);
    // draw the graph with the axis,contineous line, and put
    gr2->Draw("AL");
    gr3->Draw("L");
    gr->Draw("P");
    return 0;
}
/*Neutrino Energy distribution*/ 
Double_t pion_decay_NEDofFnumubar(Double_t Enu)/*MeV_1*/
{
    Double_t Fnumubar;
    if(Enu > Mmu/2){
        Fnumubar = 0;
    }
    else if(Enu){
        Fnumubar = (64/Mmu)*pow((Enu/Mmu),2)*(0.75-Enu/Mmu);
    }
    return Fnumubar;
}
Double_t pion_decay_NEDofFnue(Double_t Enu)/*MeV-1*/
{
    Double_t Fnue;
    if(Enu > Mmu/2){
        Fnue = 0;
    }
    else if(Enu){
        Fnue = (192/Mmu)*pow((Enu/Mmu),2)*(0.5-Enu/Mmu);
    }
    return Fnue;
}
/*Energy range*/
/*Neutrino energy range in MeV*/
Double_t NERofEnumubarminF(Double_t MNuc,Double_t Er)
{
    Double_t EnumubarminF;
    EnumubarminF = sqrt(MNuc*Er/2);
    return EnumubarminF;
}
Double_t NERofEnueminF(Double_t MNuc,Double_t Er)
{
    Double_t EnumubarminF;
    EnumubarminF = sqrt(MNuc*Er/2);
    return EnumubarminF;
}
/*Recoil energy range for each kind of neutrino in MeV*/
Double_t RERofErnumumaxF(Double_t MNuc)
{
    Double_t ErnumumaxF;
    ErnumumaxF = 2*pow(Enumu,2)/MNuc;
    return ErnumumaxF;
}
Double_t RERofErnumubarmaxF(Double_t MNuc)
{
    Double_t ErnumubarmaxF;
    ErnumubarmaxF = 2*pow(Enumubarmax,2)/MNuc;
    return ErnumubarmaxF;
}
Double_t RERofErnuemaxF(Double_t MNuc)
{
    Double_t ErnuemaxF;
    ErnuemaxF = 2*pow(Enuemax,2)/MNuc;
    return ErnuemaxF;
}
/*Helm FF*/
Double_t R0HelmF(Double_t Rrms,Double_t s)
{
    Double_t R0HelmF;
    R0HelmF = sqrt((5.0/3.0)*(pow(Rrms,2)-3*pow(s,2)));
    return R0HelmF;
}
Double_t HelmF(Double_t Q,Double_t R0,Double_t s)
{
    Double_t HelmF;
    HelmF = 3/(Q*R0/hbar)*(sin(Q*R0/hbar)/pow(Q*R0/hbar,2)-cos(Q*R0/hbar)/(Q*R0/hbar))*exp(-pow(Q*R0/hbar,2)*pow(s,2)/pow(R0,2)/2);
    return HelmF;
}
Double_t FF(Double_t Q,Double_t Rrms,Double_t s)
{
    Double_t FF;
    FF = HelmF(Q, R0HelmF(Rrms,s),s);
    return FF;
}
/*surviving fraction*/
Double_t acctheta(Double_t x)
{
    Double_t acctheta;
    if(x < 5){
        acctheta = 0;
    }
    else if(x >= 6){
        acctheta = 1;
    }
    else if(x>=5&&x<6){
        acctheta = 0.5;
    }
    return acctheta;
}
Double_t accF(Double_t x)
{
    Double_t accF;
    accF = acca/(1+exp(-acck*(x-accx0)))*acctheta(x);
    return accF;
}

/*old Quench factor sigmaalpha=0.28*/
Double_t ErF(Double_t PE)
{
    Double_t ErF = PE/1.17;
    return ErF;
}
Double_t dErdPE(Double_t x)
{
    Double_t dErdPE = 1/1.17;
    return dErdPE;
}
Double_t dsigmadErF(Double_t ZNuc,Double_t NNuc,Double_t MNuc,Double_t Er,Double_t Enu,Double_t Rprms,Double_t Rnrms,Double_t s)
/*10^(-38)cm^2/MeV*/
{
    Double_t QwI =2*(ZNuc*gpV*FF(sqrt(2*MNuc*Er),Rprms,s)+NNuc*gnV*FF(sqrt(2*MNuc*Er),Rnrms,s));
    Double_t res = pow(GF,2)/(2*PI)*MNuc*(2-MNuc*Er/(pow(Enu,2)))*pow(hbar,2)*(pow(QwI,2)/4);
    return res;
}
Double_t dNnumudErF(Double_t ZNuc,Double_t NNuc,Double_t MNuc,Double_t Er,Double_t Rprms,Double_t Rnrms,Double_t s)
{
    Double_t Ernumumax = RERofErnumumaxF(MNuc);
    Double_t temp;
    if(Er < Ernumumax){
        temp = dsigmadErF(ZNuc,NNuc,MNuc,Er,Enumu,Rprms,Rnrms,s);
    }
    else{
        temp = 0;
    }
    return temp;
}
Double_t dNnumubardErF(Double_t ZNuc,Double_t NNuc,Double_t MNuc,Double_t Er,Double_t Rprms,Double_t Rnrms,Double_t s)
{
    Double_t sum = 0;
    int step = 10;
    Double_t Enumubarmin = NERofEnumubarminF(MNuc,Er);
    Double_t Ernumubarmax = RERofErnumubarmaxF(MNuc);
    /*Integrate over Enumubar*/
    if(Er < Ernumubarmax){
        Double_t h = (Enumubarmax-Enumubarmin)/step;
        for(int ix = 0;ix < step;ix++){
            Double_t x = Enumubarmin + ix*h;
            sum = sum + pion_decay_NEDofFnumubar(x + h/2.0)*dsigmadErF(ZNuc,NNuc,MNuc,Er,x + h/2.0,Rprms,Rnrms,s)*h;
        }
    }
    return sum;
}
Double_t dNnuedErF(Double_t ZNuc,Double_t NNuc,Double_t MNuc,Double_t Er,Double_t Rprms,Double_t Rnrms,Double_t s)
{
    Double_t sum = 0;
    int step = 10;
    Double_t Enuemin = NERofEnueminF(MNuc,Er);
    Double_t Ernuemax = RERofErnuemaxF(MNuc);
    /*Integrate over Enuebar*/
    if(Er < Ernuemax){
        Double_t h = (Enuemax-Enuemin)/step;
        for(int ix = 0;ix < step;ix++){
            Double_t x = Enuemin + ix*h;
            sum = sum + pion_decay_NEDofFnue(x + h/2.0)*dsigmadErF(ZNuc,NNuc,MNuc,Er,x + h/2.0,Rprms,Rnrms,s)*h;
        }
    }
    return sum;
}
Double_t dNdErMF(Double_t ErkeV)
/*Er MeV*/
{
    Double_t sum = 0;
    Double_t ErMeV = ErkeV/1000;
    Double_t NTtotal = mdet*1000/Mave*Na;
    Double_t Nnu = (1.76e-15)*0.08/(4*PI*pow(L,2));
    struct nucleusM e1;
    Double_t Cs = e1.Cs[2]*(dNnuedErF(e1.Cs[0],e1.Cs[1],(e1.Cs[0]+e1.Cs[1])*Mamu,ErMeV,e1.Cs[3],e1.Cs[4],s)
    + dNnumudErF(e1.Cs[0],e1.Cs[1],(e1.Cs[0]+e1.Cs[1])*Mamu,ErMeV,e1.Cs[3],e1.Cs[4],s)+
    dNnumubardErF(e1.Cs[0],e1.Cs[1],(e1.Cs[0]+e1.Cs[1])*Mamu,ErMeV,e1.Cs[3],e1.Cs[4],s));
    Double_t I = e1.I[2]*(dNnuedErF(e1.I[0],e1.I[1],(e1.I[0]+e1.I[1])*Mamu,ErMeV,e1.I[3],e1.I[4],s)
    + dNnumudErF(e1.I[0],e1.I[1],(e1.I[0]+e1.I[1])*Mamu,ErMeV,e1.I[3],e1.I[4],s)+
    dNnumubardErF(e1.I[0],e1.I[1],(e1.I[0]+e1.I[1])*Mamu,ErMeV,e1.I[3],e1.I[4],s));
    sum = (Cs + I)*Nnu*NTtotal/1000;
    return sum;
}
Double_t dNdPEMF(Double_t PE)
{
    Double_t dNdPEMF = dNdErMF(PE/1.17)/1.17*accF(PE);
    return dNdPEMF;
}

