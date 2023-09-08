#ifndef PRODUCT_H
#define PRODUCT_H
#include <QApplication>

class product
{
    static int ID;
    int unicID;
    QString name;
    QString category;
    int price;
public:
    product();
    const QString &getName() const;
    void setName(const QString &newName);
    const QString &getCategory() const;
    void setCategory(const QString &newCategory);
};

#endif // PRODUCT_H
