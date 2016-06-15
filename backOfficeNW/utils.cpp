#include "utils.h"

Utils::Utils()
{
}

QString Utils::toMd5(QString text){
    return QString("%1").arg(QString(QCryptographicHash::hash(text.toUtf8(),QCryptographicHash::Md5).toHex()));
}
