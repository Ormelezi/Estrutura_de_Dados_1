#ifndef CMENOR_H
#define CMENOR_H

class cMenor {
public:
    cMenor();
    cMenor(const cMenor& orig);
    virtual ~cMenor();
    
    void lerDados();
    int verificar(int n1, int n2);
    
private:

};

#endif /* CMENOR_H */

