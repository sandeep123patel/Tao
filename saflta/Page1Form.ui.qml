import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import "componentCreation.js" as MyScript

Item {
    id: item1
    width: 400
    height: 600
    property alias name2: name2
    property alias mouseArea1: mouseArea1
    property alias mouseArea: mouseArea
    property alias rectangle3: rectangle3


    ColumnLayout {
        anchors.fill: parent

        Rectangle {
            id: rectangle
            color: "#f4a2a2"
            Layout.preferredHeight: 226
            Layout.preferredWidth: 400

            Image {
                id: image5
                x: 138
                width: 104
                height: 90
                anchors.top: parent.top
                anchors.topMargin: 8
                source: "gra.png"
            }

            Text {
                id: name1
                x: 68
                width: 245
                height: 61
                text: qsTr("Free Test")
                anchors.top: parent.top
                anchors.topMargin: 121
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                font.pointSize: 20
                font.bold: true
            }

        }

        Rectangle {
            id: rectangle3
            color: "#ffffff"
            Layout.preferredHeight: 75
            Layout.preferredWidth: 400

            MouseArea {
                id: mouseArea
                anchors.fill:parent
                onClicked: rectangle3.color="cyan"
            }

            Image {
                id: image2
                width: 75
                sourceSize.width: 0
                anchors.left: parent.left
                anchors.leftMargin: 0
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 0
                anchors.top: parent.top
                anchors.topMargin: 0
                source: "pen.png"
            }

            Text {
                id: name
                x: 141
                width: 151
                height: 45
                text: qsTr("START G.K")
                anchors.top: parent.top
                anchors.topMargin: 22
                font.pointSize: 14
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                font.bold: false
            }
        }

        Rectangle {
            id: rectangle1
            color: "#ffffff"
            Layout.preferredHeight: 75
            Layout.preferredWidth: 400

            MouseArea {
                id: mouseArea1
                anchors.fill: parent
                onClicked: rectangle1.color="teal"

            }

            Image {
                id: image
                width: 75
                height: 75
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 2
                anchors.top: parent.top
                anchors.topMargin: 2
                anchors.left: parent.left
                anchors.leftMargin: 0
                source: "pen.png"
            }

            Text {
                id: name2
                x: 133
                width: 151
                height: 45
                text: qsTr("START English")
                anchors.topMargin: 22
                anchors.top: parent.top
                horizontalAlignment: Text.AlignHCenter
                font.bold: false
                font.pointSize: 14
                verticalAlignment: Text.AlignVCenter
            }
        }

        Rectangle {
            id: rectangle2
            color: "#ffffff"
            Layout.preferredHeight: 75
            Layout.preferredWidth: 400



            Image {
                id: image1
                width: 75
                height: 75
                anchors.left: parent.left
                anchors.leftMargin: 0
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 0
                anchors.top: parent.top
                anchors.topMargin: 4
                source: "pen.png"
            }

            Text {
                id: name3
                x: 141
                width: 151
                height: 45
                text: qsTr("START Math")
                anchors.topMargin: 22
                anchors.top: parent.top
                horizontalAlignment: Text.AlignHCenter
                font.bold: false
                font.pointSize: 14
                verticalAlignment: Text.AlignVCenter
            }
        }

        Rectangle {
            id: rectangle4
            color: "#ffffff"
            Layout.preferredHeight: 75
            Layout.preferredWidth: 400

            Image {
                id: image3
                width: 75
                height: 75
                anchors.left: parent.left
                anchors.leftMargin: 0
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 0
                anchors.top: parent.top
                anchors.topMargin: 6
                source: "pen.png"
            }

            Text {
                id: name4
                x: 141
                width: 151
                height: 45
                text: qsTr("START Hindi")
                anchors.topMargin: 22
                anchors.top: parent.top
                horizontalAlignment: Text.AlignHCenter
                font.bold: false
                font.pointSize: 14
                verticalAlignment: Text.AlignVCenter
            }
        }

        Rectangle {
            id: rectangle5
            color: "#ffffff"
            Layout.preferredHeight: 75
            Layout.preferredWidth: 400

            Image {
                id: image4
                width: 75
                anchors.left: parent.left
                anchors.leftMargin: 0
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 5
                anchors.top: parent.top
                anchors.topMargin: 5
                source: "pen.png"
            }

            Text {
                id: name5
                x: 141
                width: 151
                height: 45
                text: qsTr("START Computer")
                anchors.topMargin: 22
                anchors.top: parent.top
                horizontalAlignment: Text.AlignHCenter
                font.bold: false
                font.pointSize: 14
                verticalAlignment: Text.AlignVCenter
            }
        }
    }
}
