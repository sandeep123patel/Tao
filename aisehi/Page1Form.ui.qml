import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2
import QtGraphicalEffects.private 1.0
import QtQuick.Controls.Universal 2.0
import QtQuick.Extras 1.4
import QtWebEngine.UIDelegates 1.0
import QtTest 1.1
import QtQuick.Controls.Material 2.0
import QtQuick.Controls.Styles.Desktop 1.0
import Qt.labs.calendar 1.0
import QtQuick.Templates 2.0

Item {
    property alias textField1: textField1
    property alias button1: button1
    property alias textAreaHorizontalAlignment: textArea.horizontalAlignment
    property alias textAreaText: textArea.text

    RowLayout {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 20
        anchors.top: parent.top

        TextField {
            id: textField1
            placeholderText: qsTr("Text Field")
        }

        Button {
            id: button1
            text: qsTr("Press Me")
        }
    }
}
