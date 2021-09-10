#pragma once
#include <string>

#ifndef CHARNODE_H
#define CHARNODE_H

class CharNode {
public:
    CharNode(char tegn = '0', CharNode* neste = nullptr);
    std::string toString() const;
    CharNode* hentNeste() const;
    void skrivBaklengs() const;
    static int hentAntall();
    char hentData()const;
    ~CharNode();

private:
    char m_tegn;
    static int s_antall;
    CharNode* m_neste;
};
#endif // CHARNODE_H
