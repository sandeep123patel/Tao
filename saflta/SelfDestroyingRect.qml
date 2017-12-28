import QtQuick 2.4
import QtQuick.Controls 2.0
SelfDestroyingRectForm {
    Rectangle {
        id: rect
        width: 80; height: 80
        color: "red"

        NumberAnimation on opacity {
            to: 0
            duration: 100000


        }
    }
}
