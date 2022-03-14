#include <stdio.h>
    /*
    READ THE PARAMETER reference TS 38.211v160400
    */
    int re_kl_pu;//Resource element with frequency-domain index k and time-domain index l for antenna port p and subcarrier spacing configuration u
    int valueofre_kl_pu; //Value of resource element (k,l) for antenna port p and subcarrier spacing configuration u
    double beta; //Amplitude scaling for a physical channel/signal
    const int n_pn = 128;//number of PN sequence
    int c[n_pn];//PN sequence    
    int detaf; //subcarrier spacing
    int detaf_RA; //Subcarrier spacing for random-access preambles
    double mathcal_k;//The ratio between Ts and Tc
    int k;//Subcarrier index relative to a reference
    int l;//OFDM symbol index relative to a reference
    
int main(){
    extern int detaf;

    

    return 0;
}
