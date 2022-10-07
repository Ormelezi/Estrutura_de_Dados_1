#ifndef CCANDIDATOS_H
#define CCANDIDATOS_H
#include <string>

using namespace std;

struct candidatos {
    int votos;
};

class cCandidatos {
public:
    
    cCandidatos();
    cCandidatos(const cCandidatos& orig);
    virtual ~cCandidatos();

    void lerDados();

private:

};

#endif /* CCANDIDATOS_H */

