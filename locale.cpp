#include "locale.h"
#include "StringUtilities.h"
#include <unicode/unistr.h>
#include <iostream>
#include <QDebug>

LanguageDatabase::LanguageDatabase() : m_displayName("en")
{

}




LanguageDatabase::LanguageDatabase(QString &displayName) : m_displayName(displayName)
{

}

void LanguageDatabase::createDatabase()
{
    icu::Locale loc(charFromQString(m_displayName));
    int count;
    auto _allLocales = icu::Locale::getAvailableLocales(count);

    for(int i = 0; i < count ; i++) {
        icu::Locale tmp = _allLocales[i];
        icu::UnicodeString _ln;
        QString result = getQStringFromUnicode(tmp.getDisplayName(_ln));
        qDebug() << result;

    }








}
