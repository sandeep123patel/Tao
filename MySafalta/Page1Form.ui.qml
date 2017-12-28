import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Item {
    width: layoutId.implicitWidth
    height: layoutId.implicitHeight
    property alias mouseArea4: mouseArea4
    property alias mouseArea1: mouseArea1
    property alias mouseArea: mouseArea
    Rectangle {
        id: rectangle
        color: "#ffffff"
        anchors.fill: parent
        width: parent.width
        height: parent.height

        ColumnLayout {
            id : layoutId
            x: 0
            y: 0
            width: parent.width
            height: parent.height
            Rectangle {
                id: rectangle1
                height: 169
                color: "#e36e6e"
                clip: false
                border.color: "#ffffff"
                border.width: 0
                Layout.fillHeight: true
                Layout.fillWidth: true
                Layout.preferredHeight: 160
                Layout.preferredWidth: 640

                Image {
                    id: image
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: 42
                    anchors.top: parent.top
                    anchors.topMargin: 20
                    anchors.right: parent.right
                    anchors.rightMargin: 298
                    anchors.left: parent.left
                    anchors.leftMargin: 271
                    source: "test.png"
                }
            }

            Rectangle {
                id: rectangle2
                color: "#ffffff"
                border.width: 0
                border.color: "#ffffff"

                Layout.fillHeight: true
                Layout.fillWidth: true
                Layout.preferredHeight: 67
                Layout.preferredWidth: 640

                Image {
                    id: image1
                    width: 50
                    height: 35
                    anchors.left: parent.left
                    anchors.leftMargin: 1
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: 10
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    source: "GK.png"
                }

                Text {
                    id: text2
                    x: 261
                    width: 110
                    height: 40
                    text: qsTr("सामान्य ज्ञान")
                    anchors.verticalCenter: parent.verticalCenter
                    anchors.top: parent.top
                    anchors.topMargin: 19
                    anchors.horizontalCenterOffset: 11
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.bold: true
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignLeft
                    font.pixelSize: 20

                }

                MouseArea {
                    id: mouseArea
                    anchors.fill: parent
                    onClicked:rectangle2.color = "#f9cbc2"
                }
            }

            Rectangle {
                id: rectangle4
                color: "#ffffff"
                border.color: "#ffffff"
                Layout.fillHeight: true
                Layout.fillWidth: true
                Layout.preferredHeight: 65
                Layout.preferredWidth: 640

                Image {
                    id: image3
                    width: 50
                    height: 35
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: 10
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.left: parent.left
                    anchors.leftMargin: 0
                    source: "English.png"
                }

                Text {
                    id: text3
                    x: 276
                    width: 180
                    height: 32
                    text: qsTr("सामान्य तर्क (रीजनिंग)")
                    anchors.top: parent.top
                    anchors.topMargin: 19
                    anchors.verticalCenterOffset: 0
                    anchors.horizontalCenterOffset: 36
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenter: parent.verticalCenter
                    font.bold: true
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                    font.pixelSize: 20
                }

                MouseArea {
                    id: mouseArea1
                    anchors.fill: parent
                    onClicked: rectangle4.color = "#f9cbc2"
                }
            }

            Rectangle {
                id: rectangle5
                color: "#ffffff"
                border.color: "#ffffff"
                Layout.fillHeight: true
                Layout.fillWidth: true
                Layout.preferredHeight: 65
                Layout.preferredWidth: 640

                Image {
                    id: image4
                    width: 50
                    height: 35
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: 10
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.left: parent.left
                    anchors.leftMargin: 0
                    source: "Hindi.png"
                }

                Text {
                    id: text1
                    x: 264
                    width: 88
                    height: 39
                    text: qsTr("सामान्य हिंदी")
                    anchors.top: parent.top
                    anchors.topMargin: 13
                    anchors.verticalCenterOffset: 0
                    anchors.horizontalCenterOffset: -7
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenter: parent.verticalCenter
                    font.bold: true
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignLeft
                    font.pixelSize: 18
                }

                MouseArea {
                    id: mouseArea2
                    anchors.fill: parent
                    onClicked: rectangle5.color = "#f9cbc2"
                }
            }

            Rectangle {
                id: rectangle6
                color: "#ffffff"
                border.color: "#ffffff"
                Layout.fillHeight: true
                Layout.fillWidth: true
                Layout.preferredHeight: 65
                Layout.preferredWidth: 640

                Image {
                    id: image2
                    width: 50
                    height: 35
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: 10
                    anchors.top: parent.top
                    anchors.topMargin: 2
                    anchors.left: parent.left
                    anchors.leftMargin: 0
                    source: "Reasoning.png"
                }

                Text {
                    id: text4
                    x: 253
                    y: 17
                    width: 129
                    height: 32
                    text: qsTr("कंप्यूटर विज्ञान")
                    anchors.verticalCenterOffset: 0
                    font.bold: true
                    anchors.horizontalCenterOffset: 18
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenter: parent.verticalCenter
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignLeft
                    font.pixelSize: 20
                }

                MouseArea {
                    id: mouseArea3
                    anchors.fill: parent
                    onClicked: rectangle6.color = "#f9cbc2"
                }
            }

            Rectangle {
                id: rectangle7
                color: "#ffffff"
                border.color: "#ffffff"
                Layout.fillHeight: true
                Layout.fillWidth: true
                Layout.preferredHeight: 65
                Layout.preferredWidth: 640

                Image {
                    id: image5
                    width: 50
                    height: 35
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: 10
                    anchors.top: parent.top
                    anchors.topMargin: 10
                    anchors.left: parent.left
                    anchors.leftMargin: 0
                    source: "Maths.png"
                }

                Text {
                    id: text5
                    x: 265
                    y: 17
                    width: 61
                    height: 32
                    text: qsTr("गणित")
                    anchors.verticalCenterOffset: 0
                    anchors.horizontalCenterOffset: -13
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenter: parent.verticalCenter
                    font.bold: true
                    verticalAlignment: Text.AlignVCenter
                    font.pixelSize: 20
                }

                MouseArea {
                    id: mouseArea4
                    anchors.fill: parent
                    onClicked: rectangle7.color = "#f9cbc2"
                }
            }






        }
    }
}
