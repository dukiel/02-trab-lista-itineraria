#include <iostream>
#include "lista.h"

int main() {
    Lista l;
    inicializar(&l);

    inserirInicio(&l, "A");
    inserirFim(&l, "B");
    inserirFim(&l, "C");

    listar(&l); // esperado: A -> B -> C

    removerInicio(&l);
    listar(&l); // esperado: B -> C

    return 0;
}