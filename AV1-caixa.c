#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
    setlocale( LC_ALL, "Portuguese");

    float comp, larg, alt, vlrlata, rend, ap, at, latast, latasp, gastop, gastot;


    printf("===================================================================================================");
    printf("\n|                                      AV2 - ALGORITMOS I                                         |");
    printf("\n===================================================================================================");
    printf("\n");
    printf("\n\tDigite um valor para comprimento em (cm): ");
    scanf("%f", &comp);
    printf("\n\tDigite um valor para altura em (cm): ");
    scanf("%f", &alt);
    printf("\n\tDigite um valor para largura em (cm): ");
    scanf("%f", &larg);
    printf("\n\tQual valor da lata de tinta?: R$ ");
    scanf("%f", &vlrlata);
    printf("\n\tQuanto rende a lata de tinta em (cm�)?: ");
    scanf("%f", &rend);
    printf("\n===================================================================================================");
    printf("\n");


    ap = (comp * alt + comp * larg + larg * alt) * 2;
    at = ap + ap;
    latasp = ceil(ap / rend);
    latast = ceil(at / rend);
    gastop = latasp * vlrlata;
    gastot = latast * vlrlata;


    if ( comp < 0 || alt < 0 || larg < 0 || vlrlata < 0 || rend < 0) {
        printf("\n\tERRO: TODOS VALORES DEVEM SER POSITIVOS!");
        printf("\n");
        printf("\n===================================================================================================");
        printf("\n");
    }
      else {
        if ( ap <= rend && ap >= rend )
            ap = (comp * alt) + (comp * larg) + (larg * alt) * 2;
            latasp = ceil(ap / rend);
            gastop = latasp * vlrlata;
                printf("\n\ta) Para pintar a parte interna da caixa, ser� preciso: %.0f", latasp);
                printf(" latas de tinta e gastar� R$ %.2f", gastop);
                printf("\n");
                printf("\n===================================================================================================");

        if ( ap <= rend && ap >= rend )
            ap = (comp * alt) + (comp * larg) + (larg * alt) * 2;
            latasp = ceil(ap / rend);
            gastop = latasp * vlrlata;
                printf("\n");
                printf("\n\tb) Para pintar a parte externa da caixa, ser� preciso: %.0f", latasp);
                printf(" latas de tinta e gastar� R$ %.2f", gastop);
                printf("\n");
                printf("\n===================================================================================================");

        if ( at <= rend && at >= rend )
            at = ap + ap;
            latast = ceil(at / rend);
            gastot = latast * vlrlata;
                printf("\n");
                printf("\n\tc) Para pintar toda caixa, ser� preciso: %.0f", latast);
                printf(" latas de tinta e gastar� R$ %.2f", gastot);
                printf("\n");
                printf("\n===================================================================================================");

      }

    return (0);
}
