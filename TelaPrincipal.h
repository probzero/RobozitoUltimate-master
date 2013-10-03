#pragma once
#include "telas.h"
#include "Jogador.h"

class TelaPrincipal :
	public Telas
{

private:
	imagem bg;
	Jogador player; //Não rola ponteiro por causa das imagens, por algum motivo elas não gostão de ponteiros
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

