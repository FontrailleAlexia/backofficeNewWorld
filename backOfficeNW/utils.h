#ifndef UTILS_H
#define UTILS_H

#include <QString>
#include <QCryptographicHash>

class Utils
{
public:
    Utils();

    static QString toMd5(QString text);
};

#endif // UTILS_H
