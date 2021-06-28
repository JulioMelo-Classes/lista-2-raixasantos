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
 * @tparam BidirIt Iterator para o range.
 *
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param it1 Ponteiro para auxiliar na troca de elementos no range.
 * @param it2 Ponteiro para auxiliar na troca de elementos no range.
 * @param half Armazenar o tamanho do range dividido por dois.
 *
 * @return void
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    BidirIt it1 = first,
            it2 = last - 1;
    
    int half = (last-first)/2;

    for(int i = 0; i < half; i++)
    { 
        std::iter_swap(it1, it2);
        it1++;
        it2--;
    }
}

}
#endif
