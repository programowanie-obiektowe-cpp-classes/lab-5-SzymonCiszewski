#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::vector< char > fo;
    for (auto it = people.rbegin(); it != people.rend();++it) {
        it->birthday();
        if (it->isMonster())
            fo.push_back('n');
        else
            fo.push_back('y');
    }
    return {fo};
}
