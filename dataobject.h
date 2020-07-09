#ifndef DATAOBJECT_H
#define DATAOBJECT_H

#include <QObject>

//![0]
class ContactListProvider : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
//![0]

public:
    ContactListProvider(QObject *parent=0);
    ContactListProvider(const QString &name, QObject *parent=0);

    QString name() const;
    void setName(const QString &name);

signals:
    void nameChanged();

private:
    QString m_name;
//![1]
};

#endif
