#ifndef DISPLAYOPTIONDOCKWIDGET_H
#define DISPLAYOPTIONDOCKWIDGET_H

#include <QDockWidget>

namespace Ui
{
    class DisplayOption;
}
class Editor;
class QToolButton;


class DisplayOptionWidget : public QDockWidget
{
    Q_OBJECT
public:
    DisplayOptionWidget(QWidget *parent = 0);
    void makeConnectionToEditor(Editor* editor);

private:
    Ui::DisplayOption* ui = nullptr;
};

#endif // DISPLAYOPTIONDOCKWIDGET_H