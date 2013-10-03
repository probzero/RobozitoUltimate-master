#include "Jogador.h"



Jogador::Jogador(void)
{

		// inicilizar funcoes default
	
	 // Primeira vez que o jogador está sendo criado

	// no futuro o updatestatus irá modificar o nivel cada vez que o jogador upar de nivel

}



Jogador::~Jogador(void)
{
}

void Jogador::inicializar() // Personagem zerado
{
	personagem.carregar(".//personagens/chiyo/chiyo1.png", 0, 0,120,120);
	personagem.carregar(".//personagens/chiyo/chiyo2.png", 0, 0,120,120);
	personagem.carregar(".//personagens/chiyo/chiyo3.png", 0, 0,120,120);
	personagem.carregar(".//personagens/chiyo/chiyo4.png", 0, 0,120,120);
	personagem.setar_tempo_animacao(60);

	robo.carregar(".//personagens/chiyo/robo.png",0,0,200,260);
	
	this->totalBatalhas = 0;
	this->setNivel(1);
	this->setAtk(1);
	this->setDef(1);
	this->setHP(30);
	
}

int Jogador::getTotalPartidas()
{
	return this->totalBatalhas;
}

void Jogador::desenha(int t, int x , int y)
{
	switch(t)
	{
		case Chiyo:
			personagem.desenha(x,y);
		break;
		
		case exia:
			robo.desenha(x,y);
		break;
	}
}

void Jogador::atacar()
{

}

void Jogador::andar()
{

}

void Jogador::defender()
{

}