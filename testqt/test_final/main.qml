import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.0

import io.qt.examples.backend 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")



    BackEnd {
        id : backend
    }
 Button {
     onClicked: backend.connectToDatabase ("robodia.c0tkhnmn8qhw.ap-south-1.rds.amazonaws.com", "interviewfight_tao_data2", "robodia", "robodia123" )

    }

 Label{
     text: backend.connected
 }
}

