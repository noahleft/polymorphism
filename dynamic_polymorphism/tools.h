#ifndef TOOLS_H
#define TOOLS_H 1
#include <cstdio>

class Tool
{
public:
    virtual void PlotImpl() { printf("default plot impl\n");}
};

class Pen: public Tool
{
public:
    void PlotImpl() { printf("pen plot impl\n");}
};

class Pencil : public Tool
{
public:
};

#endif