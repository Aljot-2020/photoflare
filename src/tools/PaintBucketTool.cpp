#include "PaintBucketTool.h"
#include "../mainwindow.h"
#include "../PaintWidget.h"

PaintBucketTool::PaintBucketTool(QObject *parent)
    : Tool(parent)
{
}

PaintBucketTool::~PaintBucketTool()
{
}

void PaintBucketTool::onMousePress(const QPoint &pos, Qt::MouseButton button)
{
    switch(button)
    {
        case Qt::LeftButton:
            emit floodFillPrimaryColor(pos);
            break;
        case Qt::RightButton:
            emit floodFillSecondaryColor(pos);
            break;
        default:
            break;
    }
}
