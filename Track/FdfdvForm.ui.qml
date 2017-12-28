import QtQuick 2.4

Item {
    width: 400
    height: 400

    Image {
        id: image
        x: 61
        y: 73
        width: 100
        height: 100
        source: "qrc:/qtquickplugin/images/template_image.png"
    }

    Rectangle {
        id: rectangle
        x: 192
        y: 87
        width: 140
        height: 200
        color: "#ffffff"
    }
}
