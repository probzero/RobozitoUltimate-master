#pragma once
#include "Inimigo.h"
class ColecaoInimigo
{
private:
	int tam, pos;
	Inimigo **vetor;

public:
	ColecaoInimigo(void);
	~ColecaoInimigo(void);
	void adicionarInimigo(Inimigo *);
	void ler(const char*);
	void escrever(const char*);

};

