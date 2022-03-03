//Si no escribimos nada, automáticamente se convierte en una clase abstracta porque depende
//de ser vivo.

#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include "SerVivo.h"
using namespace std;

class Animal : public SerVivo{

};

#endif