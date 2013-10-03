#pragma once
#include "telas.h"
#include "Jogador.h"

class TelaPrincipal :
	public Telas
{

private:
	imagem bg;
	Jogador player; //N�o rola ponteiro por causa das imagens, por algum motivo elas n�o gost�o de ponteiros
	char hp[10];
	char atk[10];
	char def[10];
	char dmg[10];

public:
	TelaPrincipal(void);
	~TelaPrincipal(void);
	Telas* desenha();
	void carrega();
	void listaInimigos();
};

