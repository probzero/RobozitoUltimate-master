#include "Mapa.h"


Mapa::Mapa(void)
{

	fase1.carregar(".//maps/fase1.png", 0, 0, 1024, 768);
	faseMusica.carregar(".//musica/fase1Musica.ogg");
	isTocando = false;
	mapa1.inicializaJSON(".//maps/mapa2.json", "fundo");



}


Mapa::~Mapa(void)
{

}

Telas* Mapa::desenha()
{
	fase1.desenha(0,0);
	mapa1.desenha();

	
	if(!isTocando)
		{
			faseMusica.tocar(); 
			isTocando = true;			
		}
			
	if(key[SDLK_BACKSPACE])
		{
		
			voltar = true;
		}

	return NULL;
}


