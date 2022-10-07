
#ifndef CCALCULO_H
#define CCALCULO_H

class cCalculo {
public:
    cCalculo();
    cCalculo(const cCalculo& orig);
    virtual ~cCalculo();
    
    int d,m,a;
    
    void insert();
    int calculo();
    
    
private:

};

#endif /* CCALCULO_H */

