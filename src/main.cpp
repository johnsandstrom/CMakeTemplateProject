// Includes from other directories
#include "../OtherStuff/OtherClass.h"

// src includes
#include "SomeClass.h"
#include "AnotherClass.h"

int main(int argc, char** argv)
{
    SomeClass* A        = new SomeClass();
    AnotherClass* B     = new AnotherClass();
    OtherClass* C       = new OtherClass();

    return 0;
}