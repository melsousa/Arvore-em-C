#include <stdlib.h>

typedef struct arv Arv;
typedef Arv* PArv;

int vaziaArv(Arv* no);

Arv* criarArv(char c, Arv* sae, Arv* sad);

void imprimeArv(Arv* no);

int pertenceArv(Arv* no, char c);

Arv* liberaArv(Arv* no);

Arv* criarVaziaArv(void);


#ifndef arvore_c
	#define arvore_c
	#include "arvore.c"
#endif
