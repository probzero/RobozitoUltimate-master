#include "TelaPrincipal.h"
#include "MenuPrincipal.h"
#include "Jogador.h"
#include "ColecaoInimigo.h"

TelaPrincipal::TelaPrincipal(void)
{
	bg.carregar(".//telas/telaPrincipal.png",0,0,1024,768);
	carrega();
	
	// altura do HP Y 115
	// x do HP 45 x MP 280

}


TelaPrincipal::~TelaPrincipal(void)
{
}

Telas* TelaPrincipal::desenha()
{
	bg.desenha(0,0);
	player.desenha(Chiyo,705,250);
	egl_texto(player.getNome(),200,70);
	egl_texto(hp,45,115);
	egl_texto(atk,90,355);
	egl_texto(def,100,378);
	egl_texto(dmg,60,445);
	


	if(key[SDLK_BACKSPACE] )
	{
		return new MenuPrincipal();
	}
	return NULL;
}

void TelaPrincipal::carrega() // carrega informações do Jogador || Batalhas || Listas de inimigos etc
{
	player.inicializar();
	player.setNome("Jogador 1");
	itoa(player.getHP(),hp,10); // convert INT para STRING daí da para desenhar com o egl
	itoa(player.getDef(),def,10);
	itoa(player.getAtk(),atk,10);
	itoa(player.getDano(),dmg,10); // Está mostrando um valor alto por que está com sujeira

	Inimigo *vektor = new Inimigo(new string("Vektor"),5);
	ColecaoInimigo *colecao = new ColecaoInimigo;

	colecao->adicionarInimigo(vektor);

	// colecao->escrever("Teste.txt"); FUNCIONANDO ISTO GRAVA O QUE ESTIVER NO VETOR DOS INIMIGOS

}

void TelaPrincipal::listaInimigos()
{

}