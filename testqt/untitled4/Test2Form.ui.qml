import QtQuick 2.4
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtQuick.Window 2.0

Item {
    width: Screen.width
    height: Screen.height
    property alias label3: label3
    property alias label4: label4
    property alias textArea: textArea
    property alias radioButton: radioButton
    property alias button: button



    Connections {
        target: messageClass
        onMessageChange: textArea.text = value;
        onAoptChange: label.text = value1;
        onBoptChange:label1.text = value2;
        onCoptChange:label2.text = value3;
        onDoptChange: label3.text = value4;
        onEoptChange: label4.text = value5;


    }


    Page {
        id: page
        anchors.fill: parent

        Frame {
            id: frame
            anchors.fill: parent

            ColumnLayout {
                anchors.rightMargin: 20
                anchors.bottomMargin: 20
                anchors.topMargin: 20
                anchors.leftMargin: 20
                anchors.fill: parent
                spacing: 15
                TextArea {
                    id: textArea
                    text: qsTr("hgggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggsa")
                    scale: 1
                    padding: 7
                    font.bold: true
                    font.pointSize: 17
                    verticalAlignment: Text.AlignTop
                    wrapMode: Text.WrapAtWordBoundaryOrAnywhere
                    readOnly: true
                    Layout.fillHeight: true
                     Layout.fillWidth: true
                     Layout.preferredHeight: 100
                     Layout.preferredWidth: 200
                     Layout.minimumHeight: 50
                     Layout.maximumHeight: 250
                     Layout.minimumWidth: 70
                     Layout.maximumWidth: parent.width
                }

                Row {

                    Column {

                        RadioButton {
                            id: radioButton
                            width: 50
                            height: 35
                            text: qsTr("A")



                        }

                        RadioButton {
                            id: radioButton1
                            width: 50
                            height: 35
                            text: qsTr("B")
                        }

                        RadioButton {
                            id: radioButton2
                            width: 50
                            height: 35
                            text: qsTr("C")
                            autoExclusive: true
                            checked: false
                        }

                        RadioButton {
                            id: radioButton3
                            width: 50
                            height: 35
                            text: qsTr("D")
                        }
                    }

                    Column {

                        Label {
                            id: label3
                            text: qsTr("")
                            width: 250
                            height: 35


                        }

                        Label {
                            id: label
                            text: qsTr("B")
                            width: 250
                            height: 35

                        }

                        Label {
                            id: label1

                            text: qsTr("c")
                            verticalAlignment: Text.AlignVCenter
                            width: 250
                            height: 35


                        }

                        Label {
                            id: label2

                            text: qsTr("D")
                            width: 250
                            height: 35

                    }
                    }
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    Layout.preferredHeight: 200
                    Layout.preferredWidth: 300
                    Layout.minimumHeight: 150
                    Layout.maximumHeight: 300
                    Layout.minimumWidth: 250
                    Layout.maximumWidth:  parent.width
                }

                Row {

                    Rectangle {
                        id: rectangle
                        width: 150
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

            Label {
                id: label4
                x: 30
                y: 704
                width: 115
                height: 65
                text: qsTr("Label")
            }



        }
    }
}
