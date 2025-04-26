#include <stdio.h>
#include <stdbool.h>
#include "errors/err.h"
#include "utils/rndr.h"

void main() {
    int type, rating, genre, provider;
    // [TYPE]       => (1 filme, 2 série, 3 documentário)
    // [RATING]     => (0 livre, 10 10+, 18 18+)
    // [GENRE]      => (1 ação, 2 comédia, 3 drama, 4 suspense)
    // [PROVIDER]   => (1 Netflix, 2 Amazon Prime, 3 Disney+, 4 HBO Max)

    renderMoviesTable();

    printf(" ## Bem-vindo a escolha de Filmes e Séries!\n\n");

    type = renderType(false);
    rating = renderRating(false);
    genre = renderGenre(false);
    provider = renderProvider(false);

    renderLoading();

    renderResponse(type, rating, genre, provider);
}
