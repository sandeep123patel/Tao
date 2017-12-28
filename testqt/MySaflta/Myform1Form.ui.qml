import QtQuick 2.4
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
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

        ColumnLayout {
            id : layoutid
            anchors.rightMargin: 15
            anchors.leftMargin: 13
            anchors.bottomMargin: 100
            anchors.topMargin: 15
            anchors.fill: parent
            spacing: 20

            TextArea {
                id: textArea
                text: qsTr("Text Area")
                wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                opacity: 1
                Layout.rowSpan: 1
                Layout.fillWidth: true
                Layout.preferredHeight: 151
                Layout.preferredWidth: 338
                readOnly: true
            }

            ColumnLayout {
                spacing: 15

                Row {
                    spacing: 15

                    RadioButton {
                        id: radioButton
                        text: qsTr("A")
                    }

                    Label {
                        id: label
                        width: 200
                        height: 40
                        text: qsTr("a")
                    }
                }

                Row {
                    spacing: 15

                    RadioButton {
                        id: radioButton1
                        text: qsTr("B")
                    }

                    Label {
                        id: label1
                        width: 200
                        height: 40
                        text: qsTr("Label")
                    }
                }

                Row {
                    spacing: 15

                    RadioButton {
                        id: radioButton2
                        text: qsTr("C")
                    }

                    Label {
                        id: label2
                        width: 200
                        height: 40
                        text: qsTr("Label")
                    }
                }

                Row {
                    spacing: 15

                    RadioButton {
                        id: radioButton3
                        text: qsTr("D")
                    }

                    Label {
                        id: label3
                        width: 200
                        height: 40
                        text: qsTr("Label")
                    }
                }
            }
        }

        Button {
            id: button
            x: 141
            y: 529
            text: qsTr("Button")
        }
    }
}
