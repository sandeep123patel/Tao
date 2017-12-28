import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
Page1Form {

        ApplicationWindow {
          width: 800
          height: 600


          Rectangle {
            height: parent.height*0.2
            width: parent.width
            color: "blue"
          }

          Rectangle {
            anchors.bottom: parent.bottom
            height: parent.height*0.3
            width: parent.width
            color: "lightgrey"

            Image {
              source: "../assets/qt-partner-logo.png"
              height: parent.height * 0.8
              anchors.centerIn: parent
              fillMode: Image.PreserveAspectFit
            }
          }

          Text {
            anchors.right: parent.right
            anchors.rightMargin: parent.width*0.05
            text: "Scaled Text"
            font.pixelSize: parent.height*0.1
          }

        }


//   button.onClicked: {
//        var component = Qt.createComponent("Test2.qml")
//        var w = component.createObject(root)
//        w.show()

//}

}
