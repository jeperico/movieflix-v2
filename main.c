#include <stdio.h>
#include <stdbool.h>
#include "errors/availability_error.h"
#include "utils/render_table.h"
#include "utils/render_response.h"
#include "utils/render_loading.h"

void main() {
    int type, raiting, genre, provider;
    // [TYPE]       => (1 filme, 2 série, 3 documentário)
    // [RAITING]    => (0 livre, 10 10+, 18 18+)
    // [GENRE]      => (1 ação, 2 comédia, 3 drama, 4 suspense)
    // [PROVIDER]   => (1 Netflix, 2 Amazon Prime, 3 Disney+, 4 HBO Max)

    renderMoviesTable();

    printf(" ## Bem-vindo a escolha de Filmes e Séries!\n\n");

    type = renderType(false);
    raiting = renderRating(false);
    genre = renderGenre(false);
    provider = renderProvider(false);

    renderLoading();

    renderResponse(type, raiting, genre, provider);
}
