#include "../headers/Polisher.h"
#include "../headers/Console.h"

int main() {
    Console console;
    Polisher<int> polisher;

    console.out(polisher.polishTheNumber(-13));
    console.out(polisher.polishTheNumber(7));
    console.out(polisher.polishTheNumber(-3));
    console.out(polisher.polishTheNumber(3));
    console.out(polisher.polishTheNumber(-7));
    console.out(polisher.polishTheNumber(13));

    return 0;
}