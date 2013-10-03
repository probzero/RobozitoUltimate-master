#include "MenuPrincipal.h"
#include "Rank.h"
#include "Mapa.h"
#include "TelaPrincipal.h"
MenuPrincipal::MenuPrincipal(void)
{
	menuPrincipal.carregar(".//telas/menuPrincipal.png");
	menuMusica.carregar(".//musica/menu.ogg");
	ui.adicionaComponente(new Botao(Start,450,250,".//botoes/normal.png",".//botoes/clique.png",".//botoes/hover.png")); // Novo Jogo
	ui.adicionaComponente(new Botao(102,450,315,".//botoes/normal.png",".//botoes/clique.png",".//botoes/hover.png")); // Continue
	ui.adicionaComponente(new Botao(103,450,380,".//botoes/normal.png",".//botoes/clique.png",".//botoes/hover.png")); // Ranking
	ui.adicionaComponente(new Botao(104,450,445,".//botoes/normal.png",".//botoes/clique.png",".//botoes/hover.png")); // Creditos


	troca = 1;
	isTocando = false;
}


MenuPrincipal::~MenuPrincipal(void)
{
}
Telas* MenuPrincipal::desenha()
{

	menuPrincipal.desenha(0,0);

	egl_retangulo_arredondado(316,192,708,576,0,0,0,200);

	ui.desenha();
	// Checar o estado dos botoes
	botaoPressionado = ui.verificaEventos(EGL_CLIQUE_ESQ);
	troca = botaoPressionado;
	if(botaoPressionado == 0) troca *= (-1);

		if(!isTocando)
		{
			menuMusica.tocar(); 
			isTocando = true;
		}

	
	if(key[SDLK_1] ||botaoPressionado == Start)
	{
		menuMusica.parar();
		isTocando = false;
		return new TelaPrincipal();
	}

	return NULL;
}
