#include "charnode.h"
#include <iostream>
#include <sstream>
#include <string>


int CharNode::s_antall;

CharNode::CharNode(char tegn, CharNode* neste) : m_tegn(tegn), m_neste(neste)
{
    s_antall++;
}

std::string CharNode::toString() const
{
    std::ostringstream oss;
    oss << m_tegn;

    return oss.str();
}

CharNode* CharNode::hentNeste() const
{
    return m_neste;
}

void CharNode::skrivBaklengs() const
{
    if (m_neste)
        m_neste->skrivBaklengs();
    std::cout << m_tegn;
}

int CharNode::hentAntall()
{
    return s_antall;
}
// size()

char CharNode::hentData() const
{
    return m_tegn;
}
//top()

CharNode::~CharNode()
{
    s_antall--;
}