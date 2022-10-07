#ifndef CNOTAS_H
#define CNOTAS_H

class cNotas {
public:

    float n1, n2, n3;

    cNotas();
    cNotas(const cNotas& orig);
    virtual ~cNotas();

    void front();
    float medias(char opc, float n1, float n2, float n3);


private:

};

#endif /* CNOTAS_H */

