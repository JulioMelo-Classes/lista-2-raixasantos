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
 * @tparam InputIt1 Iterator para o range.
 * @tparam InputIt2 Iterator para o range.
 * @tparam Equal Tipo de uma função bool eq(const string &a,  const string &b)
 * 
 * @param first1 Ponteiro para o primeiro elemento do range.
 * @param last1 Ponteiro para a posição logo após o último elemento do range.
 * @param first2 Ponteiro para o primeiro elemento do range.
 * @param eq Função para comparar dois valores.
 * @param it Ponteiro para percorrer o range.
 * @param count Armazenar a quantidade de elementos que testaram falso para a função eq.
 * 
 * @return Verdadeiro se os ranges são iguais, falso caso contrário.
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
    int count = 0;

    for(InputIt1 it = first1; it != last1; ++it)
    {
        if(!eq(*it,*first2))
            count++;
        first2++;
    }

    if(count > 0)
        return false;
    else
        return true;
}

/*! 
 * @tparam InputIt1 Iterator para o range.
 * @tparam InputIt2 Iterator para o range.
 * @tparam Equal Tipo de uma função bool eq(const string &a,  const string &b)
 * 
 * @param first1 Ponteiro para o primeiro elemento do range.
 * @param last1 Ponteiro para a posição logo após o último elemento do range.
 * @param first2 Ponteiro para o primeiro elemento do range.
 * @param last2 Ponteiro para a posição logo após o último elemento do range.
 * @param eq Função para comparar dois valores.
 * @param it Ponteiro para percorrer o range.
 * @param count Armazenar a quantidade de elementos que testaram falso para a função eq.
 * 
 * @return Verdadeiro se os ranges são iguais, falso caso contrário.
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
    int count = 0;

    for(InputIt1 it = first1; it != last1; it++)
    {
        if(!eq(*it,*first2))
            count++;
        first2++;
    }

    if(count > 0)
        return false;
    else
        return true;
}

}
#endif
