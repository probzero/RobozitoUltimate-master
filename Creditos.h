#ifndef CREDITOS_H
#define CREDITOS_H

#include "Telas.h"

class Creditos :	public Telas
{

private:

	imagem creditos;
	musica m;
	bool isTocando;

public:

	Creditos(void);
	~Creditos(void);

	Telas* desenha();
	void tocarMusica();

};

#endif