#include <iostream>
#include "cards.hpp"

int main()
{
    GenerateDeck();
    Shuffle();
    for(int i=0; i<52;++i)
    {
        cout << Card[i].face << Card[i].suit << '\t' << Card[i].value << '\n';
    }
}