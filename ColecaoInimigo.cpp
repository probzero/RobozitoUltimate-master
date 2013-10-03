#include "ColecaoInimigo.h"
#include <fstream>


ColecaoInimigo::ColecaoInimigo(void)
{
	pos = 0;
	tam = 10;
	vetor = new Inimigo*[tam];

}


ColecaoInimigo::~ColecaoInimigo(void)
{
}

void ColecaoInimigo::adicionarInimigo(Inimigo *i)
{
	vetor[pos] = i;
	pos++;
	if(pos==tam)
		{
			tam+=10;
			vetor = (Inimigo**)realloc(vetor,tam*sizeof(Inimigo*)); 
		}

}

void ColecaoInimigo::ler(const char* arquivo)
{

//Abre o arquivo
	ifstream in(arquivo);
// Cria as variaveis para ir armazenando do arquivo enquanto esta lendo
	string *nome; 
	int level;
	Inimigo *i;
	//enquanto nao chegar no fim do arquivo
	while(in && !in.eof()){
		nome = new string;
		//Lê os dados
		//in >> level;
		string str;
		getline(in,str);				

		//se nao ocorreu falha adiciona
		//um novo inimigo na colecao
		if(!in.fail()){
			char *dup = strdup(str.c_str()); //duplica a string
			char *pch = strtok(dup,";"); //quebra em tokens
			level = atoi(pch);
			pch = strtok(NULL,";"); 
		
			nome = new string(pch);

			//Aloca um  novo Inimigo
			i = new Inimigo(nome,level);
			//Adiciona na colecao
			this->adicionarInimigo(i);
		}
	}
                   
    //Fecha o arquivo  
    in.close();
}

void ColecaoInimigo::escrever(const char* arquivo)
{
		//Cria o arquivo
	ofstream out(arquivo);
    
	//enquanto nao chegar no fim da colecao
	for(int i=0; i<pos; i++){		
		//Escreve no arquivo
		out << vetor[i]->getLevel() << ";" << *(vetor[i]->getNome())  << endl;
	}	
    //Fecha o arquivo
    out.close();
}