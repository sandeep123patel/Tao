import QtQuick 2.4
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Item {
    Connections {
        target: messageClass
        onMessageChange: textArea.text = value;
        onAoptChange: label.text = value1;
        onBoptChange:label1.text = value2;
        onCoptChange:label2.text = value3;
        onDoptChange: label3.text = value4;

    }

    ColumnLayout {
        anchors.rightMargin: 20
        anchors.bottomMargin: 20
        anchors.topMargin: 20
        anchors.leftMargin: 20
        anchors.fill: parent
        spacing: 15
        TextArea {
            id: textArea
            text: qsTr("Text Area")
            Layout.fillHeight: true
             Layout.fillWidth: true
             Layout.preferredHeight: 120
             Layout.preferredWidth: 400
             Layout.minimumHeight: 150
             Layout.maximumHeight: parent.height/2
             Layout.minimumWidth: 70
             Layout.maximumWidth: 500
        }

        Row {

            Column {

                RadioButton {
                    id: radioButton
                    text: qsTr("A")
                }

                RadioButton {
                    id: radioButton1
                    text: qsTr("B")
                }

                RadioButton {
                    id: radioButton2
                    text: qsTr("C")
                }

                RadioButton {
                    id: radioButton3
                    text: qsTr("D")
                }
            }

            Column {

                Label {
                    id: label3
                    width: 238
                    height: 50
                    text: qsTr("Label")
                }

                Label {
                    id: label
                    width: 238
                    height: 50
                    text: qsTr("Label")
                }

                Label {
                    id: label1
                    width: 238
                    height: 50
                    text: qsTr("Label")

                }

                Label {
                    id: label2
                    width: 238
                    height: 50
                    text: qsTr("Label")
                }
            }

            Layout.fillHeight: true
             Layout.fillWidth: true
             Layout.preferredHeight: 300
             Layout.preferredWidth: 350
             Layout.minimumHeight: 350
             Layout.maximumHeight: parent.height/2
             Layout.minimumWidth: 70
             Layout.maximumWidth: 500
        }

        Row {

            Rectangle {
                id: rectangle
                width: 200
                height: 36
                color: "#ffffff"
            }

            Button {
                id: button
                text: qsTr("Button")
                Layout.fillHeight: true
                Layout.fillWidth: true
                Layout.preferredHeight: 50
                Layout.preferredWidth: 70
                Layout.minimumHeight: 20
                Layout.maximumHeight: 150
                Layout.minimumWidth: 70
                Layout.maximumWidth:  150
            }
        }
    }

}

