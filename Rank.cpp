#include "Rank.h"


Rank::Rank(void)
{
	listaRank.carregar(".png");
	rank.carregar(".mp3");
	rank.ajustar(100);
}


Rank::~Rank(void)
{
}


Telas* Rank::desenha()
{
	listaRank.desenha(0,0);

	if(key[SDLK_BACKSPACE])
	{
		voltar = true;
	}

	return NULL;
}


