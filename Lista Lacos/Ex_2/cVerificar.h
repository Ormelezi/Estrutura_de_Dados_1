#ifndef CVERIFICAR_H
#define CVERIFICAR_H

class cVerificar {
public:
    cVerificar();
    cVerificar(const cVerificar& orig);
    virtual ~cVerificar();
    
    void lerDados();
    int resultado(int num);
    
private:

};

#endif /* CVERIFICAR_H */

