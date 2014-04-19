/*
 * tLista.h
 *
 *  Created on: 12/04/2014
 *      Author: leonardo
 */

#include LISTAS.cpp
#ifndef LISTAS_H_
#define LISTAS_H_
#define MAXLISTAS 10
#define ERROLISTACHEIA -1
#define ERROLISTAVAZIA -2
#define ERROPOSIÇÃO -3
template <class tipo>

class tLista {

protected:
 	tLista<tipo>* firstNode;
    tLista<tipo>* lastNode;
    int tamanho;
public:
	tLista();
	virtual ~tLista();
	//Operações: adicionar e retirar dados da lista
	int Adiciona(tipo dado);
	AdicionaNoInício(tipo dado);
	AdicionaNaPosição(tipo dado,int posicao);
	AdicionaEmOrdem(tipo dado);
	int Retira();
	RetiraDoInício();
	RetiraDaPosição(int posiao);
	RetiraEspecífico(tipo dado);
	//Operações: testar a lista
	bool ListaCheia();
	bool ListaVazia();
	tLista<tipo>* Posição(tipo dado);
	bool Contém(tipo dado);
	bool Igual(tipo dado1, tipo dado2);
	bool Maior(tipo dado1, tipo dado2);
	bool Menor(tipo dado1, tipo dado2);
};

#endif /* LISTAS_H_ */
