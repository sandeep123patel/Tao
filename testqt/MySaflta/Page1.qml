import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
Page1Form {
    mouseArea1.onClicked: {
}

    mouseArea.onClicked: {
        var component = Qt.createComponent("TextForm2.qml")
        var s = component.createObject(root)
        s.show()
}


}

