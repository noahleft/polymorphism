#include <cstdlib>
#include "tools.h"

int main() {

    printf("base type Tool:\n");
    {
        Tool default_tool;
        printf("Tool.PlotImpl:    ");
        default_tool.PlotImpl();
        Tool* ptr = &default_tool;
        printf("Tool->PlotImpl:   ");
        ptr->PlotImpl();
        // casting to derived type
        Pen *cast = (Pen*)&default_tool;
        printf("Pen->PlotImpl:    ");
        cast->PlotImpl();
    }

    printf("================\n");
    printf("base type Pen:\n");
    {
        Pen pen;
        printf("Pen.PlotImpl:    ");
        pen.PlotImpl();
        Tool* ptr = &pen;
        printf("Tool->PlotImpl:  ");
        ptr->PlotImpl();
        // casting to other type
        Pencil* cast = (Pencil*)&pen;
        printf("Pencil->PlotImpl:");
        cast->PlotImpl();
    }

    printf("================\n");
    printf("base type Pencil:\n");
    {
        Pencil pencil;
        printf("Pencil.PlotImpl: ");
        pencil.PlotImpl();
        Tool* ptr = &pencil;
        printf("Tool->PlotImpl:  ");
        ptr->PlotImpl();
        // casting to other type
        Pen* cast = (Pen*)&pencil;
        printf("Pen->PlotImpl:   ");
        cast->PlotImpl();
    }
    return 0;
}