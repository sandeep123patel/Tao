import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import "componentCreation.js" as MyScript

ApplicationWindow {
    id: root
    visible: true
    width: 400
    height: 600
    title: qsTr("Hello World")

    Connections {
        target: messageClass
        onMessageChange: textId.text = value;
        onAoptChange: textId1.text = value1
    }

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1 {

        }

        Page {
            Label {
                id : textId
                text: qsTr("Second page")
                anchors.centerIn: parent
            }
            Label {
                id: textId1
                text: qsTr("Lanel s")
                x:200
                y:200
            }

        Button {
            text: "chang me"
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
