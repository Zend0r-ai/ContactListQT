#include <QGuiApplication>
#include <qqmlengine.h>
#include <qqmlcontext.h>
#include <qqml.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>
#include "dataobject.h"

int main(int argc, char ** argv)
{
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QList<QObject *> dataList = {
        new ContactListProvider("AAAAA"),
        new ContactListProvider("BBBBB"),
        new ContactListProvider("CCCCC"),
        new ContactListProvider("DDDDD"),
        new ContactListProvider("CCCCC"),
        new ContactListProvider("DDDDD"),
        new ContactListProvider("EEEEE"),
        new ContactListProvider("FFFFF"),
        new ContactListProvider("AAAAA"),
        new ContactListProvider("BBBBB"),
        new ContactListProvider("CCCCC"),
        new ContactListProvider("DDDDD"),
        new ContactListProvider("CCCCC"),
        new ContactListProvider("DDDDD"),
        new ContactListProvider("EEEEE"),
        new ContactListProvider("FFFFF")
    };

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setInitialProperties({{ "model", QVariant::fromValue(dataList) }});

    view.setSource(QUrl("qrc:view.qml"));
    view.show();

    return app.exec();
}

