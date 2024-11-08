#include <iostream>
#include "Interpreter.h"

int main()
{
    Interpreter* interpreter = Interpreter::Instance();
    interpreter->run();

}
