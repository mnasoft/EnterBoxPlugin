#include "EnterBoxPlugin.h"
#include "mnasoft.h"

mnasoft::mnasoft(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new EnterBoxPlugin(this));
}

QList<QDesignerCustomWidgetInterface*> mnasoft::customWidgets() const
{
    return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(mnasoftplugin, mnasoft)
#endif // QT_VERSION < 0x050000
