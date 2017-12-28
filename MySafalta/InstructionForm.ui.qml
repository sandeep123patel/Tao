import QtQuick 2.4
import QtQuick.Window 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
Item {
width: Screen.width
height: Screen.width


        TextArea {
            id: textArea
            width: 370
            height: 137
            text: qsTr("Text Area")
            anchors.verticalCenterOffset: -39
            anchors.horizontalCenterOffset: 20
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            readOnly: true
            Layout.fillWidth: true
            Layout.fillHeight: true
            Layout.preferredHeight: 150
            Layout.preferredWidth: 250


        }

        Button {
            id: button
            x: 300
            y: 285
            text: qsTr("Button")
            anchors.verticalCenterOffset: 129
            anchors.horizontalCenterOffset: 13
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
        }

}
