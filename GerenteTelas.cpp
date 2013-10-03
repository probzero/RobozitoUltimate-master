#include "GerenteTelas.h"

GerenteTelas::GerenteTelas()
{
	pilhaTelas = new stack<Telas*>;
}


GerenteTelas::~GerenteTelas(void)
{
}


void GerenteTelas::adicionarTela(Telas *t)
{
	pilhaTelas->push(t);
}


void GerenteTelas::desenha()
{
	Telas *nova = pilhaTelas->top()->desenha();

	if(nova != NULL)
	{
		this->adicionarTela(nova);
	}
	else{
			if(pilhaTelas->top()->possoVoltar())
			{
				pilhaTelas->pop();
			}
	}
}