#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * @tparam InputIt Iterator para o range.
 * @tparam UnaryPredicate Tipo de uma função bool p(const string &b)
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param firstTrue Ponteiro para a posição do elemento do range, que possivelmente testou verdadeiro.
 * 
 * @return Um firstTrue apontando para a posição do elemento do range, que possivelmente o predicado testou verdadeiro. 
 */
 /*
 blz
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    InputIt firstTrue = last;

    for(InputIt it = first; it != last; it++)
    {
        if(p(*it))
        {
            firstTrue = it;
            return firstTrue;
        }
    }

    return firstTrue;
}

}
#endif
