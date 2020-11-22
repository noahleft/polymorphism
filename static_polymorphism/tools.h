#ifndef TOOLS_H
#define TOOLS_H 1
#include <cstdio>

template<typename T>
class Tool
{
public:
    void Plot() {
        static_cast<T*>(this)->PlotImpl();
    }
    void PlotImpl() { printf("default plot impl\n");}
};

class Pen: public Tool<Pen>
{
public:
    void PlotImpl() { printf("pen plot impl\n");}
};

class Pencil : public Tool<Pencil>
{
public:
};

#endif