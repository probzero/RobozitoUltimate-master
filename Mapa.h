#pragma once

#include "Telas.h"
#include "MenuPrincipal.h"

class Mapa : public Telas
{

private:
	imagem fase1;
	musica faseMusica;
	bool isTocando;
	int xm, ym; //x y do mouse para colisão e possivel funcao de "Over" em um personagem
	TileMap mapa1;
	
	
	
public:
	Mapa(void);
	~Mapa(void);
	Telas* desenha();

	


};

