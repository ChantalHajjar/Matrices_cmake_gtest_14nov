#include <iostream>
#include <vector>
#include "matrice.hpp"

using namespace std;

Matrice::Matrice(v2d v)
: rows(v.size()), cols(v[0].size())
{
   for (size_t i = 0; i < rows; i++)
   {
    vector<type> v1d;
    for (size_t j = 0; j < cols; j++)
    {
        v1d.push_back(v[i][j]);
    }
    tab.push_back(v1d);
    
   }
   
}
Matrice::Matrice(int rows, int cols, type val)
: rows(rows), cols(cols)
{
   vector<type> v(cols,val);
   v2d v2(rows,v);
   tab = v2;   
   
}
const type Matrice::operator() (int i, int j) const{
    return tab[i][j];
}
type& Matrice::operator()(int i, int j){
    return tab[i][j];
}

ostream& operator<<(ostream& os, const Matrice& M){
    for (size_t i = 0; i < M.rows; i++)
    {
        for (size_t j = 0; j < M.cols; j++){
        
            os << M(i,j) << " ";
        }
        os << endl;

        
    }
    return os;
    
}

