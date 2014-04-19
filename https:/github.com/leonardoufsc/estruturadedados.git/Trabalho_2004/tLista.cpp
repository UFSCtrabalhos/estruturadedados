/*
 * tLista.cpp
 *
 *  Created on: 12/04/2014
 *      Author: leonardo
 */

#include <iostream>
#include <string.h>
#include "tLista.h"
using namespace std;
template<class tipo>
tLista<tipo>::lista;
int ultimo = -1;

template<class tipo>
void tLista() {
	template<class tipo>
	lista[MAXLISTAS];
	template<class tipo>
	this-> PrimeroElemento=0;
	template<class tipo>
	this-> UltimoElemento=0;
	int ultimo = -1;

}

template<class tipo>
void ~tLista() {

}

template<class tipo>
void destroiLista() {

}

template<class tipo>
int Adiciona(tipo dado) {
	if ListaCheia()
	return ERROLISTACHEIA;
	else
	ultimo = ultimo + 1;
	template<class tipo>
	lista[ultimo] = dado;
	return ultimo;
}

template<class tipo>
int AdicionaNoInício(tipo dado) {
	int posicao = 0; //Variável auxiliar para “caminhar”
	if (ListaCheia())
		return ERROLISTACHEIA;
	else {
		ultimo = ultimo + 1;
		posicao = ultimo;
	}
	while (posicao > 0) {
		//Empurrar tudo para trás
		template<class tipo>
		lista[posicao] = lista[posicao - 1];
		posicao = posicao - 1;
	}
	template<class tipo>
	lista[0] = dado;
	return 0;

}

template<class tipo>
int AdicionaNaPosicaeo(tipo dado, int destino) {
	int posicao = 0;
	if (ListaCheia())
		return ERROLISTACHEIA;
	else {
		if (destino > ultimo + 1 || destino < 0)
			return ERROPOSICAO;
		ultimo = ultimo + 1;
		posicao = ultimo;
		while (posicao > destino) {
			//Empurrar tudo para trás
			template<class tipo>
			lista[posicao] = lista[posicao - 1];
			posicao = posicao - 1;
		}
		template<class tipo>
		lista[destino] = dado;
		return destino;
	}

}

template<class tipo>
int AdicionaEmOrdem(tipo dado) {

	variáveis inteiro
	posicao; //Variável auxiliar para “caminhar”
	início SE(ListaCheia)
	ENTÃO RETORNE(ERROLISTACHEIA)
	SENÃO posicao
	<- 0;
	ENQUANTO (posicao <= ultimo E
			maior(dado, dados[posicao])) FAÇA
	//Encontrar posicao para inserir
	posicao <- posicao + 1;
	FIM ENQUANTO
	RETORNE(adicionaNaPosicao(dado, posicao));
	FIM SE
	fim;

}

template<class tipo>
int Retira() {
	if listaVazia()
	return ERROLISTAVAZIA
	else
	ultimo = ultimo – 1;
	return (ultimaPosicao[ultimo + 1]);

}

template<class tipo>
tLista<tipo>::RetiraDoInício() {
	variáveis inteiro
	posicao, valor;
	início SE(listaVazia)
	ENTÃO RETORNE(ERROLISTAVAZIA)
	SENÃO ultimo
	<- ultimo - 1;
	valor < -dados[0];
	posicao < -0;
	ENQUANTO(posicao <= ultimo)
	FAÇA
	//Empurrar tudo para a frente
	dados[posicao]
	<- dados[posicao + 1];
	posicao < -posicao + 1;
	FIM ENQUANTO
	RETORNE(valor);
	FIM SE
	fim;

}

template<class tipo>
tLista<tipo>::RetiraDaPosicao(int posiao) {
	variáveis inteiro
	posicao, valor;
	início
	SE (fonte > ultimo OU fonte < 0) ENTÃO
	RETORNE(ERROPOSIcaO)
	SENÃO
	SE (listaVazia) ENTÃO
	RETORNE(ERROLISTAVAZIA)
	SENÃO
	ultimo <- ultimo - 1;
	valor < -dados[fonte];
	posicao < -fonte;
	ENQUANTO(posicao <= ultimo)
	FAÇA
	//Empurrar tudo para frente
	dados[posicao]
	<-
	dados[posicao + 1];
	posicao < -posicao + 1;
	FIM ENQUANTO
	RETORNE (valor);
	FIM SE
	FIM SE
	fim;

}

template<class tipo>
tLista<tipo>::RetiraEspecífico(tipo dado) {

	variáveis inteiro
	posicao;
	início SE(listaVazia)
	ENTÃO RETORNE(ERROLISTAVAZIA)
	SENÃO posicao
	<- posicao(dado);
	SE(posicao < 0)
	ENTÃO RETORNE(ERROPOSIcaO)
	SENÃO
	RETORNE(retiraDaPosicao (posicao));
	FIM SE
	FIM SE
	fim;

}

//Operações: testar a lista
bool ListaCheia() {
	if (ultimo == MAXLISTAS - 1)
		return true;
	else
		return false;
}

bool ListaVazia() {
	if (ultimo == -1)
		return true;
	return false;
}

template<class tipo>
tLista<tipo>::Posicao(tipo dado) {
	variáveis inteiro
	posicao;
	início posicao
	<- 0;
	ENQUANTO (posicao <= ultimo E
			NÃO(IGUAL(dado, dados[posicao]))) FAÇA
	posicao <- posicao + 1;
	FIM ENQUANTO
	SE(posicao > ultimo)
	ENTÃO RETORNE(ERROPOSIcaO)
	SENÃO RETORNE(posicao);
	FIM SE
	fim;

}

template<class tipo>
tLista<tipo>::Contém(tipo dado) {

}

template<class tipo>
tLista<tipo>::Igual(tipo dado1, tipo dado2) {

}

template<class tipo>
tLista<tipo>::Maior(tipo dado1, tipo dado2) {
	início SE(dado1 > dado2)
	ENTÃO RETORNE(Verdadeiro)
	SENÃO
	RETORNE(Falso);
	FIM SE
	fim;

	Observacao: quando o
	dado a
	ser armazenado
	em uma
	lista
for algo mais complexo do que um inteiro, a comparacao de precedência não será mais tão simples (ex.: Empregado1 > Empregado2) e será resultado de um conjunto mais complexo de operações.
Para deixar os algoritmos de operações sobre lista independentes do tipo de dado específico armazenado na lista, usamos uma funcao deste tipo.

}

template<class tipo>
tLista<tipo>::Menor(tipo dado1, tipo dado2) {

}
