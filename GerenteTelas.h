#ifndef GERENTETELAS_H
#define GERENTETELAS_H

#include <stack>
#include "Telas.h"

class GerenteTelas
{

private:

	stack<Telas*> *pilhaTelas;

public:

	GerenteTelas();
	~GerenteTelas(void);

	void desenha();
	void adicionarTela(Telas *);

};

#endif