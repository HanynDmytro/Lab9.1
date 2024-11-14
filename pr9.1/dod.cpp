#include "dod.h"
#include "var.h"
#include <math.h>
using namespace nsVar;

void nsDod::dod() {
    double R = -((x * n) / (n + 1));
    a *= R;
}