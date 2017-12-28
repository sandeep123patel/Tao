import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

ApplicationWindow {
    id:root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Connections {
        target: messageClass
        onMessageChange:san.text = value
    }

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1 {
        }

        Page {
            Label {
                id:san
                text: qsTr("Second page")
                anchors.centerIn: parent
            }

            Button {
                text:"click"

            }
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex
        TabButton {
            text: qsTr("First")
        }
        TabButton {
            text: qsTr("Second")
        }
    }
}
