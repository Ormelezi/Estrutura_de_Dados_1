#ifndef CEXPRESSAO_H
#define CEXPRESSAO_H


class cExpressao {
public:
cExpressao();
    cExpressao(const cExpressao& orig);
    virtual ~cExpressao();
    
    int a,b,c;
    
    void insert ();
    int calculo ();
    
private:

};

#endif /* CEXPRESSAO_H */

