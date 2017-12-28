import QtQuick 2.7
import QtQuick.Window 2.2
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Item {
        id: fist
        anchors.fill: parent

        Rectangle {
            x:100
            y : 100
            width: 100
            height: 100
            color: blue
            border.color: "#00c83b3b"
        }
    }


}
