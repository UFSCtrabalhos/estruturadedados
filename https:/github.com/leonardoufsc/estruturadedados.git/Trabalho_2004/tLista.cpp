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
int ultimo = -1 ;

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
void tLista<tipo>::destroiLista() {
	if(listaVazia()){
		delete(firstNode);
	}
	delete(firstNode);
}

template<class tipo>
int Adiciona(tipo dado) {
	if listaCheia()
		return ERROLISTACHEIA;
	else
		ultimo = ultimo + 1;
		template<class tipo>
		tLista<tipo>lista[ultimo] == dado;
		return ultimo;
}

template<class tipo>
tLista<tipo>::AdicionaNoInício(tipo dado) {
	variáveis
			inteiro posição; //Variável auxiliar para “caminhar”
		início
			SE (listaCheia) ENTÃO
				RETORNE(ERROLISTACHEIA)
			SENÃO
				último <- último + 1;
				posição <- último;
				ENQUANTO (posição > 0) FAÇA
					//Empurrar tudo para trás
					dados[posição] <- 						 dados[posição - 1];
					posição <- posição - 1;
				FIM ENQUANTO
				dados[0] <- dado;
				RETORNE(0);
			FIM SE
		fim;

}

template<class tipo>
tLista<tipo>::AdicionaNaPosição(tipo dado,int posicao) {
	variáveis
			inteiro posição;
		início
			SE (listaCheia) ENTÃO
				RETORNE(ERROLISTACHEIA)
			SENÃO
				SE (destino > último + 1 OU destino < 0) ENTÃO
					RETORNE(ERROPOSIÇÃO);
				FIM SE
				último <- último + 1;
				posição <- último;
				ENQUANTO (posição > destino) FAÇA
					//Empurrar tudo para trás
					dados[posição] <-
						dados[posição - 1];
					posição <- posição - 1;
				FIM ENQUANTO
				dados[destino] <- dado;
				RETORNE(aonde);
			FIM SE
		fim;

}

template<class tipo>
tLista<tipo>::AdicionaEmOrdem(tipo dado) {
	Procedimento:
	necessitamos de uma função para comparar os dados (maior);
	testamos se há espaço;
	procuramos pela posição onde inserir comparando dados;
	chamamos adicionaNaPosição.
	Parâmetros:
	o dado a ser inserido;
	variáveis
			inteiro posição; //Variável auxiliar para “caminhar”
		início
			SE (listaCheia) ENTÃO
				RETORNE(ERROLISTACHEIA)
			SENÃO
				posição <- 0;
				ENQUANTO (posição <= último E
					maior(dado, dados[posição])) FAÇA
					//Encontrar posição para inserir
					posição <- posição + 1;
				FIM ENQUANTO
				RETORNE(adicionaNaPosição(dado, posição));
			FIM SE
		fim;

}

template<class tipo>
int Retira() {
	if listaVazia()
		return ERROLISTAVAZIA
	else
		ultimo = ultimo – 1;
		return(ultimaPosicao[ultimo + 1]);


}

template<class tipo>
tLista<tipo>::RetiraDoInício() {
	variáveis
			inteiro posição, valor;
		início
			SE (listaVazia) ENTÃO
				RETORNE(ERROLISTAVAZIA)
			SENÃO
				último <- último - 1;
				valor <- dados[0];
				posição <- 0;
				ENQUANTO (posição <= último) FAÇA
					//Empurrar tudo para a frente
					dados[posição] <- 						 dados[posição + 1];
					posição <- posição + 1;
				FIM ENQUANTO
				RETORNE(valor);
			FIM SE
		fim;

}

template<class tipo>
tLista<tipo>::RetiraDaPosição(int posiao) {
	variáveis
			inteiro posição, valor;
		início
			SE (fonte > último OU fonte < 0) ENTÃO
				RETORNE(ERROPOSIÇÃO)
			SENÃO
				SE (listaVazia) ENTÃO
					RETORNE(ERROLISTAVAZIA)
				SENÃO
					último <- último - 1;
					valor <- dados[fonte];
					posição <- fonte;
					ENQUANTO (posição <= último) FAÇA
						//Empurrar tudo para frente
						dados[posição] <-
							dados[posição + 1];
						posição <- posição + 1;
					FIM ENQUANTO
					RETORNE(valor);
	 			FIM SE
			FIM SE
		fim;

}

template<class tipo>
tLista<tipo>::RetiraEspecífico(tipo dado) {

		variáveis
			inteiro posição;
	  início
			SE (listaVazia) ENTÃO
				RETORNE(ERROLISTAVAZIA)
			SENÃO
				posição <- posição(dado);
				SE (posição < 0) ENTÃO
					RETORNE(ERROPOSIÇÃO)
				SENÃO
					RETORNE(retiraDaPosição(posição));
				FIM SE
			FIM SE
		fim;

}


//Operações: testar a lista
bool ListaCheia() {
	if ( ultimo == MAXLISTAS -1 )
		return true;
	else
		return false;
}

bool ListaVazia() {
	if ( ultimo == -1 )
			return true;
	return false;
}

template<class tipo>
tLista<tipo>::Posição(tipo dado) {
	variáveis
			inteiro posição;
		início
			posição <- 0;
		  	ENQUANTO (posição <= último E
			   NÃO(IGUAL(dado, dados[posição]))) FAÇA
				posição <- posição + 1;
			FIM ENQUANTO
			SE (posição > último) ENTÃO
			  RETORNE(ERROPOSIÇÃO)
			SENÃO
			  RETORNE(posição);
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
	início
			SE (dado1 > dado2) ENTÃO
				RETORNE(Verdadeiro)
			SENÃO
				RETORNE(Falso);
			FIM SE
		fim;

		Observação: quando o dado a ser armazenado em uma lista for algo mais complexo do que um inteiro, a comparação de precedência não será mais tão simples (ex.: Empregado1 > Empregado2) e será resultado de um conjunto mais complexo de operações.
	Para deixar os algoritmos de operações sobre lista independentes do tipo de dado específico armazenado na lista, usamos uma função deste tipo.

}

template<class tipo>
tLista<tipo>::Menor(tipo dado1, tipo dado2) {

}
