/*
 *	AguilaOS - Sistema operacional para ensino de sistemas operacionais.
 *	Davi Augusto Aragão.
 *	GNU GPL.
 *
 *	Arquivo: main.c
 *	Objetivo: Acordar e levantar os principais sistema do kernel.
*/
#include <video.h>
#include <kernel.h>

void kernelMain() 
{
	clear();
	kPuts("AguilaOS", CINZA_CLARO);
	while (1);
}
