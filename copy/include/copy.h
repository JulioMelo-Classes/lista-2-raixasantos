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
 * 
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param d_first Ponteiro para o primeiro elemento do range cópia.
 * @param d_last Ponteiro para a posição logo após o último elemento do range cópia.
 * 
 * @return Um d_last apontando para a posição logo após o último elemento do range cópia.
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
    InputIt d_last = d_first;

    for(InputIt it = first; it != last; it++)
    {
        *d_last = *it;
        d_last++;
    }

    return d_last;
}

}
#endif
