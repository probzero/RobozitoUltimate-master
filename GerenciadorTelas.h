#pragma once
#include <stack>	
#include "Telas.h"
class GerenciadorTelas 
{
private:
	stack<Telas*> *selectTelas;

public:
	GerenciadorTelas();
	void desenha();
	void exibirTela(Telas *);
	~GerenciadorTelas(void);
};

