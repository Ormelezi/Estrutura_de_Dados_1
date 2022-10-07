#ifndef CPRODUTOS_H
#define CPRODUTOS_H

#include <string>

using namespace std;

struct produtos {
    long int cod;
    float preço;
};

class cProdutos {
public:
    cProdutos();
    cProdutos(const cProdutos& orig);
    virtual ~cProdutos();

    void lerDados();
    float consulta(produtos vetor[], int cod, int qnt);

private:

};

#endif /* CPRODUTOS_H */

