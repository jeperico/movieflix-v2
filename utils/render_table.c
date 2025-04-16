#include <stdio.h>
#include <stdbool.h>
#include "render_table.h"
#include "../errors/validation_error.h"

void renderMoviesTable(void) {
    printf("\n\n +----------------------------------------------------+-------------------+---------+-----------+------------------+\n");
    printf("<| Título                                             | Tipo              | Censura | Categoria | Fornecedor       |>\n");
    printf(" +----------------------------------------------------+-------------------+---------+-----------+------------------+\n");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Vingadores: Ultimato", "1", "18", "1", "1 (Netflix)");
    printf("<| %-51s | %-17s | %-7s | %-9s | %-16s |>\n", "O Rei Leão", "1", "0", "1", "3 (Disney+)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Breaking Bad", "2", "18", "2", "1 (Netflix)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Friends", "2", "10", "2", "2 (Amazon Prime)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Stranger Things", "2", "10", "1", "1 (Netflix)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Titanic", "1", "10", "3", "2 (Amazon Prime)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Chernobyl", "2", "18", "4", "4 (HBO Max)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "La Casa de Papel", "2", "18", "1", "1 (Netflix)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "O Menino que Descobriu o Vento", "1", "0", "3", "3 (Disney+)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Dark", "2", "18", "1", "1 (Netflix)");
    printf(" +----------------------------------------------------+-------------------+---------+-----------+------------------+\n\n\n");
}

int renderType(bool again) {
    int type;

    if (again) validationError("1, 2, 3");

    printf(" +-----------------------------------------------------------------------+\n");
    printf("<| Tipo de título (1 - Filme, 2 - Série, 3 - Documentário):              |>\n");
    printf(" +-----------------------------------------------------------------------+\n");
    scanf("%d", &type);

    if (!(type == 1 || type == 2 || type == 3)) renderType(true);


    return type;
}

int renderRating(bool again) {
    printf("\033[H\033[J");
    renderMoviesTable();

    if (again) validationError("0, 10, 18");

    int raiting;

    printf("\n\n +-----------------------------------------------------------------------+\n");
    printf("<| Censura (0 - Livre, 10 - 10 anos ou mais, 18 - 18 anos ou mais):      |>\n");
    printf(" +-----------------------------------------------------------------------+\n");
    scanf("%d", &raiting);

    if (!(raiting == 0 || raiting == 10 || raiting == 18)) renderRating(true);

    return raiting;
}

int renderGenre(bool again) {
    printf("\033[H\033[J");
    renderMoviesTable();

    if (again) validationError("1, 2, 3, 4");

    int genre;

    printf("\n\n +-----------------------------------------------------------------------+\n");
    printf("<| Categoria (1 - Ação, 2 - Comédia, 3 - Drama, 4 - Suspense):           |>\n");
    printf(" +-----------------------------------------------------------------------+\n");
    scanf("%d", &genre);

    if (!(genre == 1 || genre == 2 || genre == 3 || genre == 4)) renderGenre(true);

    return genre;
}

int renderProvider(bool again) {
    printf("\033[H\033[J");
    renderMoviesTable();

    if (again) validationError("1, 2, 3, 4");

    int provider;

    printf("\n\n +-----------------------------------------------------------------------+\n");
    printf("<| Fornecedor (1 - Netflix, 2 - Amazon Prime, 3 - Disney+, 4 - HBO Max): |>\n");
    printf(" +-----------------------------------------------------------------------+\n");
    scanf("%d", &provider);

    if (!(provider == 1 || provider == 2 || provider == 3 || provider == 4)) renderProvider(true);

    return provider;
}
