#include <iostream>
#include <string>
#include "Atividade.h"

using namespace std;

class Aula : public Atividade {

    public:
        Aula (string nome, bool sincrona) : Atividade(nome, sincrona) {}

        bool ehAvaliativa();
};