#pragma once
#include "Telas.h"

#define Start 101

class MenuPrincipal : public Telas
{
private:
	imagem menuPrincipal;
	musica menuMusica;
	Interface ui;
	int botaoPressionado, troca;
	bool isTocando;
	
public:
	MenuPrincipal(void);
	~MenuPrincipal(void);

	Telas* desenha();
};

