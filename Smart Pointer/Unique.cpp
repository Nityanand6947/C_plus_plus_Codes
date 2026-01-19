#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Entity
{
public:
    Entity()
    {
        cout << "Created Entity" << endl;
    }

    ~Entity()
    {
        cout << "Destroyed Entity" << endl;
    }
    void print()
    {
        cout << "I'm from entity" << endl;
    }
};

int main()
{
    {
        // We use unique pointer for exception safety
        // You can't copy this nor shared this value or reference
        unique_ptr<Entity> entity = make_unique<Entity>(); // you can't use = to initialize unique pointer
        //    unique_ptr<Entity> entity1 = entity;
        entity->print();
        // entity.get();
        // entity.reset(new int(30));
    }
}
