#include <iostream>
#include <stdlib.h>

int main (){
	std: :cout << "Seja bem-vindo\n";
	system ("pause")
	return 0;
}

class EquipamentoServices
{
public:
	static std::vector<Equipamento*> Buscar();
	static void adicionar(Equipamento *eqp);
	 static Equipamento *BuscarUmPorId(int idequipamento);

	 static void Alterar(Equipamento *eqp, int codigo);
	 static Equipamento *BuscarUm(const std::string &nomeAluno);

};


#include "snippet.h"

std::vector<Equipamento*> EquipamentoServices::Buscar()
{
	return Equipamento::carrega();
}

void EquipamentoServices::adicionar(Equipamento *eqp)
{
	EquipamentoDAO::adiciona(eqp);
}

Equipamento *EquipamentoServices::BuscarUmPorId(int idequipamento)
{
   return Equipamento::carregaId(idequipamento);
}

void EquipamentoServices::Alterar(Equipamento *eqp, int codigo)
{
   Equipamento::update(eqp, codigo);
}

Equipamento *EquipamentoServices::BuscarUm(const std::wstring &nomeAluno)
{
   return Equipamento::RetrieveOneNome(nomeAluno);
}

