#include <stdio.h>
#include "err.h"

void validationError(const char *expectedValues) {
    printf("[VALIDATION ERROR]\nOps! Valor inválido\n[VALID VALUES] <%s>\n", expectedValues);
}
