#ifndef _pion_decay_at_rest_h
#define _pion_decay_at_rest_h
long double Mpi = 139.57018;/*MeV*/
long double Mmu = 105.6583715;/*MeV*/
/*Energy range invariable*/
long double Enumu = (pow(Mpi,2)-pow(Mmu,2))/(2*Mpi);
long double Enumubarmax = Mmu/2;
long double Enuemax = Mmu/2;
long double Ernumumin = 0.0;
long double Ernumubarmin = 0.0;
long double Ernuemin = 0.0;
#endif
