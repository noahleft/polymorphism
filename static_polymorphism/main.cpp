#include <cstdlib>
#include "tools.h"

int main() {

    {
        Pen pen;
        pen.Plot();
        // casting the object to other type
        // the CRTP does not use virtual function
        // so the behavior is like the simple case
        // the Plot function will bind to the type
        Pencil* pencil=(Pencil*)&pen;
        pencil->Plot();
    }

    {
        Pencil pencil;
        pencil.Plot();
        Pen* pen=(Pen*)&pencil;
        pen->Plot();
    }
    return 0;
}