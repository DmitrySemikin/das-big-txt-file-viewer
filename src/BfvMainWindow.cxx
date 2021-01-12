#include <memory>

#include <QMainWindow>

#include "ui_BfvMainWindow.h"
#include "BfvMainWindow.hxx"

using std::make_unique;

BfvMainWindow::BfvMainWindow()
: ui(nullptr)
{
    ui = make_unique<Ui_BfvMainWindow>();
    ui->setupUi(this);

    connect(this->ui->actionExit, SIGNAL(triggered()), this, SLOT(exit()));
}

BfvMainWindow::~BfvMainWindow() noexcept {
    // Nothing to do here
}

void BfvMainWindow::exit() {
    qApp->exit();
}
