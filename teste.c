#include <stdio.h>
#include <stdlib.h> // contém o NULL, calloc, malloc e free
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    // alocação de um vetor estático -> uso da memória Stack
    int vs[5] = {0, 10, 20, 30, 40};

    puts("VETOR ESTATICO");
    printf("&vs = %p, vs = %p\n", &vs, vs);

    for (int i = 0; i < 5; i++){
        printf("&vs[%d] = %p, vs[%d] = %d\n", i, (vs+ i), i, *(vs + i));
    }

    puts("");

    puts("VETOR DINAMICO COM MALLOC");

    int *vhm = (int *) malloc(5 * sizeof(int)); // Todos os elementos possuem lixos 
    printf("&vhm = %p, vhm = %d\n", &vhm, vhm);

    for (int m = 0; m < 5; m++){
        printf("&vhm[%d] = %p, vhm[%d] = %d\n", m, (vhm + m), m, *(vhm + m));
    }

    puts("");

    puts("VETOR DINAMICO COM CALLOC");

    float *vhc = (float *) calloc(5, sizeof(float));
    printf("&vhc = %p, vhc = %p\n", &vhc, vhc);

    for (int b = 0; b < 5; b++){
        printf("&vhc[%d] = %p, vhc[%d] = %d\n", b, (vhc + b), b, vhc[b]);
    }

    return 0;
}