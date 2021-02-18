#include <string>
#include <ctime>
using namespace std;

struct cardDef {
    string suit; 
	string face;
    int value;
} Card[53];

void Shuffle() 
{
    srand(time(0)); 
    for (int i=0; i<(52-1); i++)
    {
        int r = i + (rand() % (52-i));
        cardDef temp = Card[i];
        Card[i] = Card[r];
        Card[r] = temp;
    }
}

void GenerateDeck()
{
    string faces[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
    string suits[4] = { "\u2666", "\u2663", "\u2665", "\u2660" }; //Diamonds, clubs, hearts, spades
    int Value[13] = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
    int counter = 0;
    for (int i = 0; i < 13; i++) //face
    {
        for (int x = 0; x < 4; x++) //suit
        {
            Card[counter].suit = suits[x];
            Card[counter].face = faces[i];
            Card[counter].value = Value[i];
            counter++;
        }
    }
}