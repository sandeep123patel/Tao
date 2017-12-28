import QtQuick 2.4

SpriteForm {
    radioButton.onClicked: {
        var component = Qt.createComponent("Frm.qml");
        win = component.createObject(root);
        win.show();
    }
        radioButton1.onClicked: {
            var component = Qt.createComponent("Show_result.qml");
            win2 = component.createObject(root);
        win2.show();

}

    button.onClicked: {
        messageClass.doMessageChange();
}
}
