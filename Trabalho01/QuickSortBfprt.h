//
// Created by fbeze on 02/04/2019.
//

#ifndef TRABALHO01_QUICKSORTBFPRT_H
#define TRABALHO01_QUICKSORTBFPRT_H
#include "QuickSortPointer.h"
#include<tuple>

using namespace std;
class QuickSortBfprt : public QuickSortPointer {
public:
    QuickSortBfprt();
    void QuickSort_(int *init, int *fin) override;
    tuple<int*, int*> LomutoTriplePartitioning_ (int *init, int *fin, int *&pivot);
    void HoareSelection(int *init, int *fin, int *iPivot);
};


#endif //TRABALHO01_QUICKSORTBFPRT_H