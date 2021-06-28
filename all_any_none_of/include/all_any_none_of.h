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
 * @param p Função para testar um valor no range.
 * @param it Ponteiro para percorrer o range.
 * @param count Armazenar a quantidade de elementos que testaram falso para p.
 * 
 * @return Verdadeiro se todos os elementos do range satisfazem p, falso caso contrário.
    

 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    int count = 0;

    if((last-first) == 0)
        return false;

    for(InputIt it = first; it != last; it++)
    {
        if(!p(*it))
            count++;
    }

    if(count > 0)
        return false;
    else
        return true;
}

/*! 
 * @tparam InputIt Iterator para o range.
 * @tparam UnaryPredicate Tipo de uma função bool p(const string &b)
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param p Função para testar um valor no range.
 * @param it Ponteiro para percorrer o range.
 * @param count Armazenar a quantidade de elementos que testaram verdadeiro para p.
 *  
 * @return Verdadeiro se ao menos um elemento do range satisfaz p, falso caso contrário.
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{   
    int count = 0;

    for(InputIt it = first; it != last; it++)
    {
        if(p(*it))
            count++;
    }

    if(count >= 1)
        return true;
    else
        return false;
}

/*! 
 * @tparam InputIt Iterator para o range.
 * @tparam UnaryPredicate Tipo de uma função bool p(const string &b)
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param p Função para testar um valor no range.
 * @param it Ponteiro para percorrer o range.
 * @param count Armazenar a quantidade de elementos que testaram verdadeiro para p.
 *  
 * @return Verdadeiro se todos os elementos do range não satisfazem p, falso caso contrário.
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{   
    int count = 0;

    for(InputIt it = first; it != last; it++)
    {
        if(p(*it))
            count++;
    }

   if(count > 0)
        return false;
    else
        return true;
}

}
#endif
