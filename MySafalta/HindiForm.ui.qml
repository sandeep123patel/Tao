import QtQuick 2.4
import QtQuick.Controls 2.0

Item {


    Rectangle {
        id: rectangle
        color: "#ffffff"
        anchors.fill: parent

        TextArea {
            id: textArea
            x: 109
            y: 108
            width: 349
            height: 258
            text: qsTr("gfbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb")
            anchors.verticalCenterOffset: -51
            anchors.horizontalCenterOffset: 1
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            wrapMode: Text.WrapAtWordBoundaryOrAnywhere
            readOnly: true
        }

        Button {
            id: button
            x: 158
            y: 313
            text: qsTr("Button")
            clip: true
            anchors.verticalCenterOffset: 146
            anchors.horizontalCenterOffset: 0
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
        }
    }
}
