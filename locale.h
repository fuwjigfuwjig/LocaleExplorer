#ifndef LOCALE_H
#define LOCALE_H

#include <unicode/locid.h>
#include <QVector>


struct Language {
    QString name;
    QVector<QString> m_variants;
};



class LanguageDatabase : public QVector<Language>
{
    QString m_displayName;
public:
    LanguageDatabase();
    LanguageDatabase(QString& displayName);

    void createDatabase();

    void addVariant(Language& locale) {
        this->push_back(locale);
    }


};

#endif // LOCALE_H
