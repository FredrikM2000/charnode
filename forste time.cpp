#include <iostream>
#include <stack>
#include <memory>

#include "charnode.h"
//using namespace std;



int main()
{
    std::stack<char> liste;
    liste.push('e');
    liste.pop();


    //CharNode* nokka;



   /* CharNode* liste = new CharNode('a');
    liste = new CharNode('b', liste);
    liste = new CharNode('c', liste);
    liste = new CharNode('d', liste);

    for (CharNode* p = liste; p != nullptr; p = p->hentNeste())
        std::cout << p->hentData();
    std::cout << std::endl << "static_antall:_" << liste->hentAntall();
    std::cout << std::endl;

    std::cout << "Skriver_baklengs;_";
    liste->skrivBaklengs();

    CharNode* ut = liste;
    liste = liste->hentNeste();
    delete ut;

    std::cout << std::endl << "static_antall:_" << liste->hentAntall() << std::endl;*/

    CharNode* test = new CharNode('C'); //Lager et member av klassen elns
    test = new CharNode('f', test);
    test = new CharNode('g', test);
    test = new CharNode('e', test);


    

    //test->skrivBaklengs();

    return 0;
}




