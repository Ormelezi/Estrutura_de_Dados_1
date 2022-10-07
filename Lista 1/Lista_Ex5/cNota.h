#ifndef CNOTA_H
#define CNOTA_H

class cNota {
public:
    cNota();
    cNota(const cNota& orig);
    virtual ~cNota();
    
    float n1,n2,n3;
    
    void front();
    float media();
  
    
private:

};

#endif /* CNOTA_H */

