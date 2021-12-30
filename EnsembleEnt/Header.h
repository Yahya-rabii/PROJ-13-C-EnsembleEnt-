#pragma once

class EnsembleEnt
{

private:
	int* m_tab;
	int m_pos;
	int m_size;

public:

	EnsembleEnt();
	EnsembleEnt(int size);
	EnsembleEnt(const EnsembleEnt& E);
	~EnsembleEnt();


	void afficher()const;
	bool Existe(const int e)const;
	void ajouter_element(const int A);
	int iemeElement(const int indice)const;
	int dernier()const;
	bool identiques(const EnsembleEnt& E)const;
	EnsembleEnt Union(const EnsembleEnt& E)const;


	bool operator == (const EnsembleEnt& E)const;

};
