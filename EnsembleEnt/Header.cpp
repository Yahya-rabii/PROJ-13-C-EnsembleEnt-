#include "Header.h"
#include <iostream>


using namespace std;

EnsembleEnt::EnsembleEnt()
{

	this->m_tab = nullptr;
	this->m_size = 0;
	this->m_pos = -1;

}

EnsembleEnt::EnsembleEnt(int size)
{

	this->m_tab = new int[size];
	this->m_size = size;
	this->m_pos = -1;

}

EnsembleEnt::EnsembleEnt(const EnsembleEnt& E)
{
	this->m_size = E.m_size;

	this->m_tab = new int[E.m_size];

	for (int i = 0; i < this->m_size; i++)
	{

		this->ajouter_element(E.m_tab[i]);

	}

}

EnsembleEnt::~EnsembleEnt()
{

	delete[] this->m_tab;
	this->m_tab = nullptr;
	cout << "the object was deleted" << endl;

}

void EnsembleEnt::afficher() const
{

	for (int i = 0; i < this->m_size; i++)
	{

		cout << "tab [" << i + 1 << "] ->" << this->m_tab[i] << endl;


	}

	cout << "taille tab -> " << this->m_size << endl;
	cout << "position du dernier element -> " << this->m_pos << endl;
}

bool EnsembleEnt::Existe(const int e) const
{

	int t = 0;


	for (int i = 0; i < this->m_size; i++)
	{

		if (this->m_tab[i] == e)
		{

			return true;

		}

		t++;
	}

	if (t == this->m_size) {


		return false;

	}


}

void EnsembleEnt::ajouter_element(const int A)
{

	if (this->m_size - 1 != this->m_pos && !this->Existe(A))
	{

		this->m_pos++;
		this->m_tab[this->m_pos] = A;


	}

	else
	{

		cout << "YOU  CANNOT ADD ANOTHER ELEMENT " << endl;

	}



}

int EnsembleEnt::iemeElement(const int indice) const
{



	return this->m_tab[indice - 1];


}

int EnsembleEnt::dernier() const
{

	return this->m_tab[this->m_pos];

}

bool EnsembleEnt::identiques(const EnsembleEnt& E) const
{

	int t = 0;

	if (this->m_size != E.m_size || this->m_pos != E.m_pos) {

		return false;
	}

	else {

		for (int i = 0; i < this->m_size; i++)
		{

			for (int j = 0; j < E.m_size; j++)
			{

				if (this->m_tab[i] == E.m_tab[j]) {

					t++;

				}

			}


		}


		if (t == this->m_size)
		{

			return true;

		}

	}
}

EnsembleEnt EnsembleEnt::Union(const EnsembleEnt& E) const
{

	int taille = this->m_pos + 1;


	for (int i = 0; i <= this->m_pos; i++)
	{


		if (!this->Existe(E.m_tab[i])) {

			taille++;

		}




	}



	EnsembleEnt Ne(taille);

	for (int i = 0; i <= this->m_pos; i++)
	{

		Ne.m_tab[i] = this->m_tab[i];

	}


	for (int i = 0; i <= E.m_size; i++)
	{

		if (!this->Existe(E.m_tab[i]))
		{

			Ne.ajouter_element(E.m_tab[i]);

		}

	}

	return Ne;

}

bool EnsembleEnt::operator==(const EnsembleEnt& E) const
{
	int t = 0;

	if (this->m_size != E.m_size || this->m_pos != E.m_pos) {

		return false;
	}

	else {

		for (int i = 0; i < this->m_size; i++)
		{

			for (int j = 0; j < E.m_size; j++)
			{

				if (this->m_tab[i] == E.m_tab[j]) {

					t++;

				}

			}


		}


		if (t == this->m_size)
		{

			return true;

		}

	}

 
}
