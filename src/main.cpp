#include <memory>
#include "IWorkable.h"
#include "IFeedable.h"
#include "Human.cpp"
#include "Robot.cpp"

void manageWork(std::shared_ptr<IWorkable> worker) {
    worker->work();
}

void lunchBreak(std::shared_ptr<IFeedable> person) {
    person->eat();
}

int main() {
    auto human = std::make_shared<Human>();
    auto robot = std::make_shared<Robot>();

    manageWork(human);
    manageWork(robot);

    lunchBreak(human);
    // lunchBreak(robot); // помилка компіляції — Robot не реалізує IFeedable
    return 0;
}
