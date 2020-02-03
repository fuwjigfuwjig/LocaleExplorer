#ifndef STRINGUTILITIES_H
#define STRINGUTILITIES_H

#include <QString>
#include <unicode/unistr.h>
const char* charFromQString(QString& str) {
    QByteArray ba = str.toLocal8Bit();
    return ba.data();
}

QString getQStringFromUnicode(icu::UnicodeString& ustr) {
    int length = ustr.length();
    QString result;
    for (int i = 0; i < length; i++) {
        QChar m(ustr[i]);
        result += m;
    }
    return result;
}


#endif // STRINGUTILITIES_H
