#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget* parent = 0);
	~MainWindow();

protected:
	void resizeEvent(QResizeEvent* ev)override;
	void mousePressEvent(QMouseEvent* ev)override;
	void mouseReleaseEvent(QMouseEvent* event)override;
	void mouseMoveEvent(QMouseEvent* event)override;
	void showEvent(QShowEvent* event)override;

private:
	int countFlag(QPoint p, int row);
	void setCursorType(int flag);
	int countRow(QPoint p);

private:
	Ui::MainWindow* ui;

	int m_curPos;
	QPoint pLast;

	bool m_bPressed;
};

#endif // MAINWINDOW_H
