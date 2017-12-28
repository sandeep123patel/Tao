import QtQuick 2.4

TextForm2Form {
    button.onClicked: {
        var component = Qt.createComponent("Myform1.qml")
        var my = component.createObject(root)
        my.show()
}
}
