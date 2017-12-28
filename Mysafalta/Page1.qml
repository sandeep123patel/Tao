import QtQuick 2.7

Page1Form {
    mouseArea.onClicked: {
        var component = Qt.createComponent("Ins.qml")
        var ins = component.createObject(root)
        ins.show()
}

}
