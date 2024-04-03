#include "pch.h"

using namespace System;

ref class Carti
{
public:
	void SetTitle(String^ title)
	{
		Titlu = title;
	}
	String^ GetTitle()
	{
		return Titlu;
	}
	void SetAuthor(String^ autor)
	{
		Autor = autor;
	}
	String^ GetAuthor()
	{
		return Autor;
	}
private:
	String^ Titlu;
	String^ Autor;
};


int main(array<System::String ^> ^args)
{
	Carti book1, book2;
	book1.SetTitle("Amintiri Din Copilarie");
	book1.SetAuthor("Ion Creanga");
	book2.SetTitle("Poezii");
	book2.SetAuthor("Mihai Eminescu");

	Console::WriteLine("Titlul primei carti este " + book1.GetTitle() + " si autorul " + book1.GetAuthor());
	Console::WriteLine("Titlul celei de a doua carti este " + book2.GetTitle() + " si autorul " + book2.GetAuthor());
	Console::ReadKey();
    return 0;
}
