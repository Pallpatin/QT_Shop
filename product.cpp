#include "product.h"

const QString &product::getName() const
{
    return name;
}

void product::setName(const QString &newName)
{
    name = newName;
}

const QString &product::getCategory() const
{
    return category;
}

void product::setCategory(const QString &newCategory)
{
    category = newCategory;
}

product::product()
{
    ID++;
    unicID=ID;

}
int product::ID=1;
