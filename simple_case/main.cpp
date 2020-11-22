#include <cstdlib>
#include "tools.h"

int main() {

    Tool default_tool;
    default_tool.PlotImpl();

    Pen pen;
    pen.PlotImpl();

    Pencil pencil;
    pencil.PlotImpl();

    return 0;
}