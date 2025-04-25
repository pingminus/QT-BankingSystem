#ifndef GLOWLINEEDIT_H
#define GLOWLINEEDIT_H

#include <QLineEdit>
#include <QGraphicsDropShadowEffect>

class GlowLineEdit : public QLineEdit {
    Q_OBJECT

public:
    explicit GlowLineEdit(QWidget* parent = nullptr);

protected:
    void focusInEvent(QFocusEvent* event) override;
    void focusOutEvent(QFocusEvent* event) override;
};

#endif // GLOWLINEEDIT_H
