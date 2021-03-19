#include <iostream>
#include <stdlib.h>

int main (){
	std: :cout << "Seja bem-vindo\n";
	system ("pause")
	return 0;
}
#include <vector>
class ChamadosServices
{

public:
	static std::vector<Chamado*> Buscar();
	static void adicionar(Chamado *c);
	 static Chamado *BuscarUmPorId(int id);

	 static void Alterar(Chamado *c, int codigo);

std::vector<Chamado*> ChamadosServices::Buscar()
{
	return ChamadosDAO::carrega();
}

void ChamadosServices::adicionar(Chamado *c)
{
	ChamadosDAO::adiciona(c);
}

Chamado *ChamadosServices::BuscarUmPorId(int id)

