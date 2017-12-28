import QtQuick 2.4
import QtQuick.Controls 2.0
Test2Form {
    radioButton.onClicked: {
        var component = Qt.createComponent("Resultmy.qml")
        var r = component.createObject(root)
        r.show()

}
    button.onClicked: {
        messageClass.doMessageChange();
}


}
