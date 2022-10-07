#ifndef PRODUTO_H
#define PRODUTO_H

class produto {
    
    
    
    
public:
    produto();
    produto(const produto& orig);
    virtual ~produto();
    
    void lerDados();
    float quantProduto(int codigo, int qnt);
    
private:

};

#endif /* PRODUTO_H */
