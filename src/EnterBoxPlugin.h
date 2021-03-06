#ifndef ENTERBOXPLUGIN_H
#define ENTERBOXPLUGIN_H

#include "enterbox_lib_global.h"

//#include <QDesignerCustomWidgetInterface>
#include <QtUiPlugin/QDesignerCustomWidgetInterface>

class ENTERBOX_EXPORT EnterBoxPlugin : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)


public:
    EnterBoxPlugin(QObject *parent = 0);

    bool isContainer() const;
    bool isInitialized() const;
    QIcon icon() const;
    QString domXml() const;
    QString group() const;
    QString includeFile() const;
    QString name() const;
    QString toolTip() const;
    QString whatsThis() const;
    QWidget *createWidget(QWidget *parent);
    void initialize(QDesignerFormEditorInterface *core);

private:
    bool initialized;
};

#endif //ENTERBOXPLUGIN_H
