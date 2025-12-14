#include "IWorkable.h"
#include "IFeedable.h"

class Human : public IWorkable, public IFeedable {
public:
    void work() override { std::cout << "Human working\n"; }
    void eat() override  { std::cout << "Human eating\n"; }
};
