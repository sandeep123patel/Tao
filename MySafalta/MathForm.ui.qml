import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtQuick.Window 2.0
Item {
    width: Screen.width
    height: Screen.height
    GridLayout {

        id : layo
        width: parent.width
        height: parent.height
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
                x: 57
                y: 15
                text: qsTr("Text Area")
                clip: false
                readOnly: true
                Layout.fillHeight: true
                Layout.fillWidth: true

            }

            ColumnLayout {
                x: 57
                y: 15
                width: 323
                height: 237
                spacing: 10

                RowLayout {
                    spacing: 15

                    RadioButton {
                        id: radioButton
                        text: qsTr("A")
                        Layout.preferredHeight: 50
                        Layout.preferredWidth: 50

                        Layout.fillHeight: true
                        Layout.fillWidth: true
                    }

                    Label {
                        id: label
                        text: qsTr("Label")
                        Layout.preferredHeight: 50
                        Layout.preferredWidth: 300
                        Layout.fillHeight: true
                        Layout.fillWidth: true
                    }
                }

                RowLayout {
                    spacing: 15

                    RadioButton {
                        id: radioButton1
                        text: qsTr("B")
                        Layout.preferredHeight: 50
                        Layout.preferredWidth: 50
                        Layout.fillHeight: true
                        Layout.fillWidth: true
                    }

                    Label {
                        id: label1
                        text: qsTr("Label")
                        Layout.preferredHeight: 50
                        Layout.preferredWidth: 300
                        Layout.fillHeight: true
                        Layout.fillWidth: true
                    }
                }

                RowLayout {
                    spacing: 15

                    RadioButton {
                        id: radioButton2
                        text: qsTr("C")
                        Layout.preferredHeight: 50
                        Layout.preferredWidth: 50
                        Layout.fillHeight: true
                        Layout.fillWidth: true
                    }

                    Label {
                        id: label2
                        text: qsTr("Label")
                        Layout.preferredHeight: 50
                        Layout.preferredWidth: 300
                        Layout.fillHeight: true
                        Layout.fillWidth: true
                    }
                }

                RowLayout {
                    spacing: 15

                    RadioButton {
                        id: radioButton3
                        text: qsTr("D")
                        Layout.preferredHeight: 50
                        Layout.preferredWidth: 50
                        Layout.fillHeight: true
                        Layout.fillWidth: true
                    }

                    Label {
                        id: label3
                        text: qsTr("Label")
                        Layout.preferredHeight: 57
                        Layout.preferredWidth: 300
                        Layout.fillHeight: true
                        Layout.fillWidth: true
                    }
                }
            }

            Button {
                id: button
                x: 57
                y: 15
                text: qsTr("Button")
            }
        }

    }
}
