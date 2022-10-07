#ifndef CRAIO_H
#define CRAIO_H


class cRaio {
public:
    cRaio();
    cRaio(const cRaio& orig);
    virtual ~cRaio();
    
    void front();
    float volume(int r);
    
private:

};

#endif /* CRAIO_H */

