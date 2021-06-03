#include <stdio.h>
#include "arvore.h"

int main(){
	int valor;
	
	Arv* Ab = criarArv('A',
			 criarArv('B', criarVaziaArv(), 
			 	criarArv('D', criarVaziaArv(), criarVaziaArv()
			 	)
			 ),
			 criarArv('C',
			 	criarArv('E', criarVaziaArv(), criarVaziaArv()
				 ),
			 criarArv('F', criarVaziaArv(), criarVaziaArv()
			 )
		)
	);
	
	imprimeArv(Ab);
	
	printf("Digite um valor para buscar: ");
	scanf("%c", &valor);
	
	Ab = pertenceArv(Ab, valor);
	if(Ab == 0){
		printf("valor não encontrado !");
	}else{
		printf("valor encontrado %c ", valor);
	}
	
	
	liberaArv(Ab);
	
	return 0;
	
}

