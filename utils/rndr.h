#ifndef RNDR_H
#define RNDR_H

void renderResponseTable(const char *type, int raiting, const char *genre, const char *provider, const char *title);
void renderResponse(int type, int raiting, int genre, int provider);
void renderMoviesTable(void);
int renderType(bool again);
int renderRating(bool again);
int renderGenre(bool again);
int renderProvider(bool again);
void renderLoading(void);

#endif
