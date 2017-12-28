import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Item {
    property alias textField1: textField1
    property alias button1: button1
    property alias button: button

    RowLayout {
        width: 206
        height: 61
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 20
        anchors.top: parent.top

        TextField {
            id: textField1
            placeholderText: qsTr("Text Field")
        }

        Button {
            id: button1
            text: qsTr("Press Me")
        }
    }

    Button {
        id: button
        x: 89
        y: 33
        text: qsTr("Button")
    }

    Text {
        id: text1
        x: 31
        y: 173
        width: 352
        height: 101
        text: qsTr("मध्य प्रदेश के किस जिले में आप सतखंडा महल पाएंगे ?")
        font.bold: true
        font.pixelSize: 18
    }

    Column {
        x: 59
        y: 287
        width: 229
        height: 160
        spacing: 20

        Row {

            RadioButton {
                id: radioButton1
                width: 36
                height: 27
                text: qsTr("A")
            }

            Text {
                id: text2
                width: 133
                height: 32
                text: "Chattarpur /छत्तरपुर "
                style: Text.Normal
                font.pixelSize: 17
            }
        }

        Row {

            RadioButton {
                id: radioButton2
                width: 37
                height: 33
                text: qsTr("B")
            }

            Text {
                id: text3
                width: 150
                height: 38
                text: qsTr("Datia/दतिया ")
                horizontalAlignment: Text.AlignHCenter
                font.bold: false
                font.pixelSize: 18
            }
        }

        RowLayout {

            RadioButton {
                id: radioButton
                text: qsTr("C")
                Layout.preferredHeight: 29
                Layout.preferredWidth: 36
            }

            Text {
                id: text4
                text: qsTr("Morena/मोरेना ")
                Layout.preferredHeight: 33
                Layout.preferredWidth: 147
                scale: 1.1
                font.weight: Font.Light
                elide: Text.ElideLeft
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 18
            }
        }
    }
}
