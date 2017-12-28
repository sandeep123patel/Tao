import QtQuick 2.7

Page1Form {
    mouseArea4.onClicked: {
        var component = Qt.createComponent("Math.qml")
        var math = component.createObject(root)
        math.show()
}
    mouseArea.onClicked: {
        var component = Qt.createComponent("Instruction.qml")
        var ins = component.createObject(root)
        ins.show()
}


}
