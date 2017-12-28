import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtQuick.Window 2.0
Item {
    width: Screen.width
    height: Screen.height

    Connections {
        target: messageClass
        onMessageChange: textArea.text = value;
        onAoptChange: label.text = value1;
        onBoptChange:label1.text = value2;
        onCoptChange:label2.text = value3;
        onDoptChange: label3.text = value4;
        onEoptChange: label4.text = value5;
        onFoptChange: label5.text = value6;

    }

    Rectangle {
        id: rectangle
        height: 600
        color: "#ffffff"
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent

        TextArea {
            id: textArea
            x: 676
            y: 118
            width: 1036
            height: 226
            text: qsTr("Text Area")
            anchors.verticalCenterOffset: -354
            anchors.horizontalCenterOffset: -10
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            Layout.fillWidth: true
        }

        RowLayout {
            x: 698
            y: 408
            width: 504
            height: 246
            anchors.verticalCenterOffset: -36
            anchors.horizontalCenterOffset: 0
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            Layout.fillHeight: true
            Layout.fillWidth: true

            Column {

                RadioButton {
                    id: radioButton
                    text: qsTr("Radio Button")
                }

                RadioButton {
                    id: radioButton1
                    text: qsTr("Radio Button")
                }

                RadioButton {
                    id: radioButton2
                    text: qsTr("Radio Button")
                }

                RadioButton {
                    id: radioButton3
                    text: qsTr("Radio Button")
                }
            }

            Column {

                Label {
                    id: label
                    width: 250
                    height: 50
                    text: qsTr("Label")
                }

                Label {
                    id: label1
                    width: 250
                    height: 50
                    text: qsTr("Label")
                }

                Label {
                    id: label2
                    width: 250
                    height: 50
                    text: qsTr("Label")
                }

                Label {
                    id: label3
                    width: 250
                    height: 50
                    text: qsTr("Label")
                }
            }
        }

        Button {
            id: button
            x: 862
            y: 744
            width: 140
            height: 48
            text: qsTr("Button")
            anchors.verticalCenterOffset: 198
            anchors.horizontalCenterOffset: -22
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
        }

    }
}
