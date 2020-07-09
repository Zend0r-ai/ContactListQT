#include <QDebug>
#include "dataobject.h"

ContactListProvider::ContactListProvider(QObject *parent)
    : QObject(parent)
{
}

ContactListProvider::ContactListProvider(const QString &name, QObject *parent)
    : QObject(parent), m_name(name)
{
}

QString ContactListProvider::name() const
{
    return m_name;
}

void ContactListProvider::setName(const QString &name)
{
    if (name != m_name) {
        m_name = name;
        emit nameChanged();
    }
}
