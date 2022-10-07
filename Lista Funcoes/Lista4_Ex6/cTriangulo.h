#ifndef CTRIANGULO_H
#define CTRIANGULO_H
#include <string>

using namespace std;

class cTriangulo {
public:
    cTriangulo();
    cTriangulo(const cTriangulo& orig);
    virtual ~cTriangulo();
    
    void front();
    string tipo(int x, int y, int z);
    
private:

};

#endif /* CTRIANGULO_H */

