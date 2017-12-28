import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Item {
    width: layout.implicitWidth
    height: layout.implicitHeight
    property alias layout: layout
    property alias mouseArea: mouseArea
    property alias rectangle3: rectangle3
    property alias rectangle4: rectangle4
    property alias rectangle2: rectangle2
    property alias rectangle1: rectangle1
    property alias rectangle: rectangle

    ColumnLayout {
        id : layout
        width: parent.width
        height: parent.height


        Rectangle {
            id: rectangle4
            color: "#c17d11"
            Layout.preferredHeight: 120
            Layout.preferredWidth: 640
            Layout.fillHeight: true
            Layout.fillWidth: true
        }

        Rectangle {
            id: rectangle
            color: "#75507b"
            Layout.preferredHeight: 89
            Layout.preferredWidth: 640
            Layout.fillHeight: true
            Layout.fillWidth: true
        }

        Rectangle {
            id: rectangle1
            color: "#73d216"
            Layout.preferredHeight: 90
            Layout.preferredWidth: 640
            Layout.fillHeight: true
            Layout.fillWidth: true

            MouseArea {
                id: mouseArea
                anchors.fill: parent

            }
        }

        Rectangle {
            id: rectangle2
            color: "#fce94f"
            Layout.preferredHeight: 111
            Layout.preferredWidth: 645
            Layout.fillHeight: true
            Layout.fillWidth: true
        }

        Rectangle {
            id: rectangle3
            color: "#ce5c00"
            Layout.preferredHeight: 58
            Layout.preferredWidth: 637
            Layout.fillHeight: true
            Layout.fillWidth: true
        }
    }
}
