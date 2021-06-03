struct arv{
	int info; 
	 Arv* esq;
	 Arv* dir;
};

int vaziaArv(Arv* no){
	
	return no == NULL;
}

Arv* criarVaziaArv(void){
	return NULL;
}

//exemplo de um �rvore binária
Arv* criarArv(char c, Arv* sae, Arv* sad){
	//sae sub arvore a esquerda
	//sad sub arvore a direita
	
	Arv* no = (Arv*)malloc(sizeof(Arv));
	no -> info = c;
	no -> esq = sae;
	no -> dir = sad;
	
	return no;
	
}

void imprimeArv(Arv* no){ //IMPRIMINDO DE FORMA PRE ORDEM
	if(!vaziaArv(no)){
		printf("%c \n", no -> info);
		imprimeArv(no -> esq);
		imprimeArv(no -> dir);
	}
}

int pertenceArv(Arv* no, char c){
	if(vaziaArv(no)){
		return 0;
	}else{
		return pertenceArv(no -> esq, c) || pertenceArv(no -> dir, c) || no -> info == c;
	}
}


Arv* liberaArv(Arv* no){ //LIBERANDO DE FORMA PÓS ORDEM
	if(!vaziaArv(no)){
		liberaArv(no -> esq);
		liberaArv(no -> dir);
		free(no);
	}
	
	return NULL;
}




