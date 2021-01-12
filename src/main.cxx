#include <QApplication>

#include "BfvMainWindow.hxx"

int main(int argc, char ** argv) {
    QApplication qApplication(argc, argv);
    BfvMainWindow mainWindow;
    mainWindow.show();
    return qApplication.exec();
}
