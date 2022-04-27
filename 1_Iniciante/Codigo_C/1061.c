#include <stdio.h>

int main() {

    int diaIni, hhIni, mmIni, ssIni = 0;
    int diaFim, hhFim, mmFim, ssFim = 0;
    int dia, hh, mm, ss = 0;

    scanf("Dia %d", &diaIni);
    scanf("%d : %d : %d\n", &hhIni, &mmIni, &ssIni);
    scanf("Dia %d", &diaFim);
    scanf("%d : %d : %d", &hhFim, &mmFim, &ssFim);

    dia = diaFim - diaIni;
    hh = hhFim - hhIni;
    mm = mmFim - mmIni;
    ss = ssFim - ssIni;

    if(ss < 0){
        ss = ss + 60;
        mm--;
    }
    if(mm < 0){
        mm = mm + 60;
        hh--;
    }
    if(hh < 0){
        hh = hh + 24;
        dia--;
    }

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hh);
    printf("%d minuto(s)\n", mm);
    printf("%d segundo(s)\n", ss);

    return 0;
}