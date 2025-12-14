#include "IWorkable.h"

class Robot : public IWorkable {
public:
    void work() override { std::cout << "Robot working\n"; }
};
