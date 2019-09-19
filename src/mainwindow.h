#pragma once

#include <DMainWindow>
#include "dwidgetstype.h"

class DeviceListWidget;
class DeviceInfoWidgetBase;

class MainWindow : public Dtk::Widget::DMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void addDeviceWidget(DeviceInfoWidgetBase* w);
private:
    DeviceListWidget* leftDeviceList_ = nullptr;
    Dtk::Widget::DStackedWidget* rightDeviceInfoWidget_ = nullptr;

    QMap<QString, QWidget*> deviceInfoWidgetMap_;//widgetname　- widget
};
