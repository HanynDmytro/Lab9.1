#include <cmath>
#include "sum.h"
#include "dod.h"
#include "var.h"
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 0;
    a = x;
    s = a;
    do {
        n++;
        dod();
        s += a;
    } while (fabs(a) > eps);
}
