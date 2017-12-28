import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")



    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1 {

        }

        Page {
            Connections{
                target: messageClass
                onMessageChange: textId.text = value
            }
            Connections{
                target:  messageClass
                onAoptChange: textId1.text = value1
            }

            Label {
                id: textId
                text: qsTr("sandeep")
                anchors.centerIn: parent
            }

            Label {
                id: textId1
                x: 309
                y: 342

                text: "patel"

            }


            Button {
                text: "change test";
                onClicked: messageClass.doMessageChange()
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
