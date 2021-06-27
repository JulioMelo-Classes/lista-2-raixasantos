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
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b).
 *
 * @param first Ponteiro para o primeiro elemento do range.
 * @param last Ponteiro para a posição logo após o último elemento do range.
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo.
 * @param min Iterator que armazena a primeira ocorrência do elemento de menor valor.
 * @param max Iterator que armazena a última ocorrência do elemento de maior valores.
 * @param count Inteiro para guardar o número de ocorrências de elementos dentro do intervalo.
 * @param countMin Inteiro para guardar o menor número de ocorrências.
 * @param countMax Inteiro para guardar o maior número de ocorrências.
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem.
 *
 */
template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp )
{
    Itr min = first,
        max = first;

    int countMin, countMax = 0,
        count = 0; 

    for(Itr it1 = first; it1 != last; it1++)
    {
        for(Itr it2 = first; it2 != last; it2++)
        {  
            if(it1 != it2)
            {
                if(cmp(*it2 , *it1))
                {
                    count++;
                }
            } 
            
            if(it1 == first)
                countMin = count;                
        }

        if(cmp(count,countMin))
        {
            countMin = count;
            min = it1;
        }

        if(!cmp(count,countMax))
        {
            countMax = count;
            max = it1;
        }

        count = 0;
    } 
    
    return std::make_pair( min, max );
}

}
#endif
