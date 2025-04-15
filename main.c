#include <stdio.h>
#include "errors/availability_error.h"
#include "errors/validation_error.h"
#include "utils/render_table.h"

void main() {
    char title[101];
    int type, raiting, genre, provider;
    // [TYPE]       => (1 filme, 2 série, 3 documentário)
    // [RAITING]    => (0 livre, 10 10+, 18 18+)
    // [GENRE]      => (1 ação, 2 comédia, 3 drama, 4 suspense)
    // [PROVIDER]  => (1 Netflix, 2 Amazon Prime, 3 Disney+, 4 HBO Max)

    renderMoviesTable();

    type = renderType();
    raiting = renderRating();
    genre = renderGenre();
    provider = renderProvider();

    
    if(type == 1) {
        if (genre == 1) {
            if (provider == 1) {
                if (raiting == 18) {
                    // "Vingadores: Ultimato", "1", "18", "1", "1 (Netflix)"
                } else {
                    availabilityError();
                }
            } else if (provider == 3) {
                // "O Rei Leão", "1", "0", "1", "3 (Disney+)"
            } else {
                availabilityError();
            }
        } else if (genre == 3) {
            if (provider == 2) {
                if (raiting == 10 || raiting == 18) {
                    // "Titanic", "1", "10", "3", "2 (Amazon Prime)"
                } else {
                    availabilityError();
                }
            } else if (provider == 3) {
                // "O Menino que Descobriu o Vento", "1", "0", "3", "3 (Disney+)"
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
                    // "La Casa de Papel", "2", "18", "1", "1 (Netflix)"
                    // "Dark", "2", "18", "1", "1 (Netflix)"
                } else if (raiting == 10) {
                    // "Stranger Things", "2", "10", "1", "1 (Netflix)"
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
                } else {
                    availabilityError();
                }
            } else if (provider == 2) {
                if (raiting == 10 || raiting == 18) {
                    // "Friends", "2", "10", "2", "2 (Amazon Prime)"
                } else {
                    availabilityError();
                }
            }
        } else if (genre == 4) {
            if(provider == 4 && raiting == 18) {
                // "Chernobyl", "2", "18", "4", "4 (HBO Max)"
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
