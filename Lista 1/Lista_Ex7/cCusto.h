#ifndef CCUSTO_H
#define CCUSTO_H

class cCusto {
public:
    cCusto();
    cCusto(const cCusto& orig);
    virtual ~cCusto();
    
    float porcentagemDistribuidor = 28.0, PercentualImpostos = 45.0;
    float cFabric, Destribuidor, ValorImpostos;
    
    void front ();
    float imposto();
    
    
private:

};

#endif /* CCUSTO_H */

