#ifndef CCALCULO_H
#define CCALCULO_H

class cCalculo {
public:
    cCalculo();
    cCalculo(const cCalculo& orig);
    virtual ~cCalculo();
    
    int d;
    
    void insert();
    int mes();
    int anos();
    
private:

};

#endif /* CCALCULO_H */

