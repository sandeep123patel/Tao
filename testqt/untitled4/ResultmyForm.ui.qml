import QtQuick 2.4
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Item {
    id : res
    width: 400
    height: 400
    property alias button1: button1
    property alias button: button
    property alias label: label

    Connections {
        target: messageClass
        onEoptChange: label.text = value5;
        onFoptChange: textArea.text = value6;

    }

    Rectangle {
        id: rectangle
        color: "#ffffff"
        anchors.fill: parent

        TextArea {
            id: textArea
            x: 36
            y: 58
            width: 329
            height: 183
            text: qsTr("Text Area")
        }

        Label {
            id: label
            x: 108
            y: 261
            width: 171
            height: 60
            text: qsTr("Label")
        }

        Button {
            id: button
            x: 73
            y: 336
            text: qsTr("Button")
        }

        Button {
            id: button1
            x: 235
            y: 336
            text: qsTr("Button")

        }
    }
}
