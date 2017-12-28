import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import "componentCreation.js" as MyScript


Page1Form {
    id : container
    mouseArea1.onClicked: {
        var component = Qt.createComponent("Sprite.qml");
        win = component.createObject(root);
        win.show();
}

    mouseArea.onClicked: {
        var component = Qt.createComponent("Sprite.qml")
        var sa = component.createObject(root)
        sa.show()
}


}
