#include "Creditos.h"

Creditos::Creditos(void)
{
	creditos.carregar(".png");
	m.carregar(".mp4");
	m.ajustar(100);
	isTocando = false;
}


Creditos::~Creditos(void)
{
}


Telas* Creditos::desenha()
{
	creditos.desenha(0,0);

		if(!isTocando)
		{
			m.tocar();
			isTocando = true;
		}

	if(key[SDLK_BACKSPACE])
	{
		voltar = true;
	}

	return NULL;
}


void Creditos::tocarMusica()
{

}