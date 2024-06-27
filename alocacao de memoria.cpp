#include <iostream>
#include <string> 
#include <memory>

using namespace std;

int main()
{
	//Este programa reserva somente a quantidade necessária de memória para a variável
	shared_ptr<string> nome = make_shared<string>();
	getline(cin, *nome);
	cout << *nome;

	cout << "\n\n";
	system("pause");
	return 0;
}

