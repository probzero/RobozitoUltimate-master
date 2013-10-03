#pragma once

#include "Telas.h"


class Rank : public Telas
{

private:

	imagem listaRank;
	musica rank;

public:

	Rank(void);
	~Rank(void);

	Telas* desenha();

};
