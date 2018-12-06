#include <iostream>
#include <fstream>
#include <cstring>
#include "profesor.h"

bool existeFichero(char* nfichero){
	bool aux;
	ifstream f1(nfichero);
	aux= f1.good();
	f1.close();
	return aux;
	
}


bool Profesor::RestaurarCopia(string ncopia, Agenda &a){

	if(getCoordinador()==false) return false;

	int n;
	bool lider;
	char c[50];
	int opcion=0;
	char aux[50];

	strcpy(aux,ncopia.c_str());

	Alumno b(0,0,0,"0","0","0","0","0","0","0","0");

	if(!existeFichero(aux)){

		return false;
	}
	

	
	
	ifstream f;
	f.open(ncopia.c_str(), ios::in| ios::binary);
		
	a.VaciaLista();
	
	
	while(!f.eof()){
		if(f.eof()) break;

		f.read(reinterpret_cast<char*>(&n), sizeof(int));
		b.setEquipo(n);
		f.read(reinterpret_cast<char*>(&lider),sizeof(bool));
		b.setLider(lider);
		f.read(reinterpret_cast<char*>(&n),sizeof(int));
		b.setCursoMasAlto(n);
	
		f.read(reinterpret_cast<char*>(&c),50);
		string dni(c);
		b.setDNI(dni);
		f.read(reinterpret_cast<char*>(&c),50);
		string email(c);
		b.setEmail(email);
		f.read(reinterpret_cast<char*>(&c),50);
		string nombre(c);
		b.setNombre(nombre);
		f.read(reinterpret_cast<char*>(&c),50);
		string apellido1(c);
		b.setApellido1(apellido1);
		f.read(reinterpret_cast<char*>(&c),50);	
		string apellido2(c);
		b.setApellido2(apellido2);
		f.read(reinterpret_cast<char*>(&c),50);
		string telefono(c);
		b.setTelefono(telefono);
		f.read(reinterpret_cast<char*>(&c),50);
		string direccion(c);
		b.setDireccionPostal(direccion);
		f.read(reinterpret_cast<char*>(&c),50);
		string nacimiento(c);
		b.setFechaNacimiento(nacimiento);

		a.InsertarAlumno(b);
	}
	
	f.close();
	return true;
	


}