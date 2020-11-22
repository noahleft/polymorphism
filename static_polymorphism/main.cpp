#include <cstdlib>
#include "tools.h"

int main() {

    {
        Pen pen;
        pen.Plot();
    }

    {
        Pencil pencil;
        pencil.Plot();
    }
    return 0;
}