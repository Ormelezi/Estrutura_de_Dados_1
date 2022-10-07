#ifndef CNOTAS_H
#define CNOTAS_H

class cNotas {
public:
    cNotas();
    cNotas(const cNotas& orig);
    virtual ~cNotas();
    
    void front();
    float media(int nota);
    
    float n1,n2,n3;
    
    
private:

};

#endif /* CNOTAS_H */

