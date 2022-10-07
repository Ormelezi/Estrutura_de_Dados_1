#ifndef CPLANO_H
#define CPLANO_H

class cPlano {
public:
    cPlano();
    cPlano(const cPlano& orig);
    virtual ~cPlano();
    
    int x1, x2, y1, y2;
    
    void insert();
    float calcDist();
    
private:
};
#endif /* CPLANO_H */

