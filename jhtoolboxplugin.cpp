#include "jhtoolbox.h"
#include "jhtoolboxplugin.h"

#include <QtPlugin>
#include <QTextCodec>


JhToolBoxPlugin::JhToolBoxPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;

    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8")) ;
}

void JhToolBoxPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool JhToolBoxPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *JhToolBoxPlugin::createWidget(QWidget *parent)
{
    return new JhToolBox(parent);
}

QString JhToolBoxPlugin::name() const
{
    return QLatin1String("JhToolBox");
}

QString JhToolBoxPlugin::group() const
{
    return QLatin1String("");
}

QIcon JhToolBoxPlugin::icon() const
{
    return QIcon();
}

QString JhToolBoxPlugin::toolTip() const
{
    return QLatin1String("");
}

QString JhToolBoxPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool JhToolBoxPlugin::isContainer() const
{
    return false;
}

QString JhToolBoxPlugin::domXml() const
{
    return QLatin1String("<widget class=\"JhToolBox\" name=\"jhToolBox\">\n</widget>\n");
}

QString JhToolBoxPlugin::includeFile() const
{
    return QLatin1String("jhtoolbox.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(jhtoolboxplugin, JhToolBoxPlugin)
#endif // QT_VERSION < 0x050000
