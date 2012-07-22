#include "EnterBoxPlugin.h"
#include "EnterBox.h"

#include <QtPlugin>

#include  "EnterBoxPlugin.moc" //new

EnterBoxPlugin::EnterBoxPlugin(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void EnterBoxPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (initialized)
        return;

    initialized = true;
}

bool EnterBoxPlugin::isInitialized() const
{
    return initialized;
}

QWidget *EnterBoxPlugin::createWidget(QWidget *parent)
{
    return new EnterBox(parent);
}

QString EnterBoxPlugin::name() const
{
    return "EnterBox";
}

QString EnterBoxPlugin::group() const
{
    return "MNAsoft";
}

QIcon EnterBoxPlugin::icon() const
{
    return QIcon();
}

QString EnterBoxPlugin::toolTip() const
{
    return "";
}

QString EnterBoxPlugin::whatsThis() const
{
    return "";
}

bool EnterBoxPlugin::isContainer() const
{
    return false;
}

QString EnterBoxPlugin::domXml() const
{
    return "<widget class=\"EnterBox\" name=\"enterBox\">\n"
           " <property name=\"geometry\">\n"
           "  <rect>\n"
           "   <x>0</x>\n"
           "   <y>0</y>\n"
           "   <width>500</width>\n"
           "   <height>16</height>\n"
           "  </rect>\n"
           " </property>\n"
           " <property name=\"toolTip\" >\n"
           "  <string>The current time</string>\n"
           " </property>\n"
           " <property name=\"whatsThis\" >\n"
           "  <string>The analog clock widget displays "
           "the current time.</string>\n"
           " </property>\n"
           "</widget>\n";
}

QString EnterBoxPlugin::includeFile() const
{
    return "EnterBox.h";
}

Q_EXPORT_PLUGIN2(customwidgetplugin, EnterBoxPlugin)
