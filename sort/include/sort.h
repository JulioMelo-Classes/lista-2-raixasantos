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
 * @tparam ForwardIt Iterator para o range.
 * @tparam Comparison Tipo de uma função bool cmp( const Type &a, const Type &b).
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param cmp Função para comparar dois valores.
 * @param it1 Ponteiro para percorrer o range.
 * @param it2 Ponteiro para percorrer o range.
 * 
 * @return void
 */
 /*
 ok
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    for(ForwardIt it1 = first; it1 != last; it1++)
    {
        for(ForwardIt it2 = it1; it2 != last; it2++)
        {
            if(cmp(*it2,*it1))
                std::swap(*it1,*it2);
        }
    }
}

}
#endif
