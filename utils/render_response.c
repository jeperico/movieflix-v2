#include <stdio.h>
#include "../errors/availability_error.h"

void renderResponseTable(char *type, int raiting, char *genre, char *provider, char *title) {
    printf(" +-----------------------------------------------------------------------+\n");
    printf("<| Título: %-61s |>\n", title);
    printf("<| Tipo: %-64s |>\n", type);
    printf("<| Classificação: %-54d |>\n", raiting);
    printf("<| Gênero: %-63s |>\n", genre);
    printf("<| Fornecedor: %-57s |>\n", provider);
    printf(" +-----------------------------------------------------------------------+\n\n\n");
}

void renderResponse(int type, int raiting, int genre, int provider) {
    if(type == 1) {
        if (genre == 1) {
            if (provider == 1) {
                if (raiting == 18) {
                  // "Vingadores: Ultimato", "1", "18", "1", "1 (Netflix)"
                    renderResponseTable("Filme", 18, "Ação", "Netflix", "Vingadores: Ultimato");
                } else {
                    availabilityError();
                }
            } else if (provider == 3) {
                // "O Rei Leão", "1", "0", "1", "3 (Disney+)"
                renderResponseTable("Filme", 0, "Ação", "Disney+", "O Rei Leão");
            } else {
                availabilityError();
            }
        } else if (genre == 3) {
            if (provider == 2) {
                if (raiting == 10 || raiting == 18) {
                    // "Titanic", "1", "10", "3", "2 (Amazon Prime)"
                    renderResponseTable("Filme", 10, "Drama", "Amazon Prime", "Titanic");
                } else {
                    availabilityError();
                }
            } else if (provider == 3) {
                // "O Menino que Descobriu o Vento", "1", "0", "3", "3 (Disney+)"
                renderResponseTable("Filme", 0, "Drama", "Disney+", "O Menino que Descobriu o Vento");
            } else {
                availabilityError();
            }
        } else {
            availabilityError();
        }
    } else if (type == 2) {
        if (genre == 1) {
            if (provider == 1) {
                if (raiting == 18) {
                    // "Stranger Things", "2", "10", "1", "1 (Netflix)"
                    renderResponseTable("Série", 10, "Ação", "Netflix", "Stranger Things");
                    // "La Casa de Papel", "2", "18", "1", "1 (Netflix)"
                    renderResponseTable("Série", 18, "Ação", "Netflix", "La Casa de Papel");
                    // "Dark", "2", "18", "1", "1 (Netflix)"
                    renderResponseTable("Série", 18, "Ação", "Netflix", "Dark");
                } else if (raiting == 10) {
                    // "Stranger Things", "2", "10", "1", "1 (Netflix)"
                    renderResponseTable("Série", 10, "Ação", "Netflix", "Stranger Things");
                } else {
                    availabilityError();
                }
            } else {
                availabilityError();
            }
        } else if (genre == 2) {
            if (provider == 1) {
                if (raiting == 18) {
                    // "Breaking Bad", "2", "18", "2", "1 (Netflix)"
                    renderResponseTable("Série", 18, "Comédia", "Netflix", "Breaking Bad");
                } else {
                    availabilityError();
                }
            } else if (provider == 2) {
                if (raiting == 10 || raiting == 18) {
                    // "Friends", "2", "10", "2", "2 (Amazon Prime)"
                    renderResponseTable("Série", 10, "Comédia", "Amazon Prime", "Friends");
                } else {
                    availabilityError();
                }
            }
        } else if (genre == 4) {
            if(provider == 4 && raiting == 18) {
                // "Chernobyl", "2", "18", "4", "4 (HBO Max)"
                renderResponseTable("Série", 18, "Suspense", "HBO Max", "Chernobyl");
            } else {
                availabilityError();
            }
        } else {
            availabilityError();
        }
    } else {
        availabilityError();
    }
}
