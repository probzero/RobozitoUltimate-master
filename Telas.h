#ifndef TELAS_H
#define TELAS_H

#include <iostream>
#include <string>
#include <sstream>
#include "engcomp_glib.h"

class Telas
{

protected:

	bool voltar;

public:

	Telas(void)
	{
		voltar = false;
	}
	~Telas(void){}

	virtual Telas* desenha() = 0;
	bool possoVoltar()
	{
		return voltar;
	}

};

#endif