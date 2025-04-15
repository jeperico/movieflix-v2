#include <stdio.h>
#include "validation_error.h"

void validationError(const char *expectedValues) {
    printf("[VALIDATION ERROR]\nOps! Valor inválido\n[VALID VALUES] <%s>\n", expectedValues);
}