#include "NodoCola.hpp"
#include <iostream>

NodoCola::NodoCola(int v, NodoCola* sig)
{
    valor = v;
    siguiente = sig;
}

NodoCola::~NodoCola()
{
}

