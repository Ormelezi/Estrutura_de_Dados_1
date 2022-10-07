#ifndef CEVENTO_H
#define CEVENTO_H

class cEvento {
public:
    cEvento();
    cEvento(const cEvento& orig);
    virtual ~cEvento();
    
    int duracaoEvent;
    
    void front();
    float tempo();
    
private:

};

#endif /* CEVENTO_H */

