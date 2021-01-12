#ifndef BfvMainWindow_hxx
#define BfvMainWindow_hxx

#include <memory>

#include <QMainWindow>

class Ui_BfvMainWindow;

class BfvMainWindow : public QMainWindow {

    Q_OBJECT

public:
    explicit BfvMainWindow();
    ~BfvMainWindow() noexcept override;

private slots:
    void exit();

private:
    std::unique_ptr<Ui_BfvMainWindow> ui;

};

#endif // BfvMainWindow_hxx
