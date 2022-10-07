#ifndef CDELTA_H
#define CDELTA_H

class cDelta {
public:
    cDelta();
    cDelta(const cDelta& orig);
    virtual ~cDelta();

    void front();
    float formula(int a, int b, int c);

private:

};

#endif /* CDELTA_H */

