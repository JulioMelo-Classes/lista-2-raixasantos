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
 * @tparam Equal Tipo de uma função bool eq( const Type &a, const Type &b).
 * @tparam const T& Tipo do valor a ser comparado na função Equal.
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param it Ponteiro para percorrer o range.
 * @param value Valor a ser comparado na função Equal.
 * @param firstTrue Ponteiro para a posição do elemento do range, que possivelmente testou verdadeiro.
 * 
 * @return Um firstTrue apontando para a posição do elemento do range, que possivelmente o predicado testou verdadeiro. 
 */
 /*
 ok
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    InputIt firstTrue = last;

    for(InputIt it = first; it != last; it++)
    {
        if(eq(*it, value))
        {   
            firstTrue = it;
            return firstTrue;
        }
    }

    return firstTrue;
}

}
#endif
