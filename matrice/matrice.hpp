#include <iostream>
#include <vector>

using std::vector;
using std::ostream;

typedef int type;

typedef vector<vector<type>> v2d;

class Matrice{
  
  public:
     Matrice(int=2,int=2, type=0);
     Matrice(v2d);
     Matrice& operator+=(const Matrice& M);
     Matrice& operator*=(const Matrice& M);
     const type operator() (int, int j) const;
     type& operator()(int i, int j);
     Matrice& operator!();
  
  private:
    int rows;
    int cols;
    v2d tab;
    friend ostream& operator<<(ostream&, const Matrice&);
};

