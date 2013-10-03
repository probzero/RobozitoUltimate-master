#include "Base.h"


Base::Base()
{
	
}


Base::~Base(void)
{
}

void Base::load()
{
	base.carregar(".//misc/base.png",0,0,120,60);
}
void Base::desenha(int x, int y)
{
	base.desenha(x,y);
}