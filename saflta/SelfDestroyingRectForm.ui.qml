import QtQuick 2.4
import QtQuick.Controls.Material 2.0
import QtQuick.Controls.Styles.Desktop 1.0
import QtQuick.Controls 2.0
import QtQuick.Controls.Universal 2.0

Item {
    width: 400
    height: 400

    Rectangle {
        id: rectangle
        color: "#ffffff"
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent

        TextArea {
            id: textArea
            x: 47
            width: 319
            height: 123
            text: qsTr("fnvfvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv")
            wrapMode: Text.WrapAtWordBoundaryOrAnywhere
            anchors.top: parent.top
            anchors.topMargin: 35
            readOnly: true
        }

        RadioButton {
            id: radioButton
            x: 74
            y: 185
            width: 136
            height: 90
            text: qsTr("Radio Button")
        }

        RadioButton {
            id: radioButton1
            x: 241
            y: 193
            width: 136
            height: 82
            text: qsTr("Radio Button")
        }
    }
}
