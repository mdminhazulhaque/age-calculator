/*****************************************************************************
age-calculator, an age calculator app for Android
Copyright (C) 2012 MD: Minhazul Haque;
mdminhazulhaque@gmail.com.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/


#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTime>
#include <QTimer>
#include <QDate>

namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Window(QWidget *parent = 0);
    ~Window();
    
private slots:
    void on_calculate_clicked();

private:
    Ui::Window *ui;
    QTimer timer;
};

#endif // WINDOW_H
