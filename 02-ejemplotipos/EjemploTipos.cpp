/*
 Ejemplo Tipos de operaciones
 Flores Encinas David
 02/05/2019
*/

#include<iostream>
#include<cassert>
#include<string>
const double pi = 3.141592654; // 
int main (){
	//char     tanto en los char,int,unsigned se usan las mismas operaciones
	char uno{ '#' };
	assert(uno == 35);

	uno = uno + 29;
	assert(uno == '@');

	uno = uno - 28;
	assert(uno == '$');

	uno = uno * 2;
	assert(uno == 'H');

	uno = uno / 2;
	assert(uno == '$');
	
	//bool
    bool comparar{ false };
    comparar = comparar and true;
    assert(comparar == false);

    comparar = comparar or true;
    assert(comparar == true);

    comparar = not comparar;
    assert(comparar == false);
    
    //string
    std::string palabra { "hola mundo" };
    assert(palabra.length() == 10);

    palabra = palabra +" feliz";
    assert(palabra.length() == 16);

     //double
    double valor { 3.141592654 };
    assert(valor == pi);

    valor = valor * pi;
    assert(valor <= 10.0);

    valor = valor - pi;
    assert(valor >= 6.7 );

    valor = pi * 4;
    valor = valor / 2;
    assert(valor == 2*pi);

    valor = valor + 4.0;
    assert(valor >= 10);
    
    //int
    int a { 10 };
    int b { 2 };
    a = a - b;
    assert(a == 8);

    a = a + 12;
    assert(a == 20);

    a = a * b;
    assert(a == 40);

    a = a / 10;
    assert(a == 4);

    assert(a >= 4);
    assert(b < 2); // lo dejo como ejemplo de que funca el assert
}