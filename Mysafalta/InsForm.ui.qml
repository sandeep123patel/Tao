import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtQuick.Window 2.0

Item {
    width: Screen.width
    height: Screen.height
    Rectangle {
        id: rectangle
        color: "#ffffff"
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent
        width: Screen.width
        height: Screen.height
        TextArea {
            id: textArea
            text: qsTr("Text dkvkadfmvbjvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv")
            anchors.rightMargin: 100
            anchors.leftMargin: 100
            anchors.topMargin: 100
            anchors.bottomMargin: 150
            anchors.fill: parent
            wrapMode: Text.WrapAtWordBoundaryOrAnywhere
        }

        Button {
            id: button
            x: 807
            y: 953
            width: 306
            height: 74
            text: qsTr("Button")
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 53
        }
    }

}
