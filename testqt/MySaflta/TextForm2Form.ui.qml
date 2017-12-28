import QtQuick 2.4
import QtQuick.Controls 2.0

Item {
    width: 400
    height: 600
    property alias button: button

    Rectangle {
        id: rectangle
        color: "#ffffff"
        anchors.fill: parent

        Button {
            id: button
            x: 133
            y: 398
            text: qsTr("Button")
        }

        TextArea {
            id: textArea
            text: qsTr("Text Area")
            anchors.right: parent.right
            anchors.rightMargin: 49
            anchors.left: parent.left
            anchors.leftMargin: 46
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 322
            anchors.top: parent.top
            anchors.topMargin: 143
        }
    }
}
