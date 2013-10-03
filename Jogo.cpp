#include "Jogo.h"



Jogo::Jogo(void)
{


}

Jogo::~Jogo(void)
{

}

void Jogo::executar()
{
	egl_inicializar(1024,768,true);
	egl_limite_framerate(60);

	GerenteTelas *g = new GerenteTelas;
	MenuPrincipal *mp = new MenuPrincipal;


	g->adicionarTela(mp);

	while(!key[SDLK_ESCAPE])
	{
		
		g->desenha();

	

		egl_desenha_frame();
	}

	egl_finalizar();
}

