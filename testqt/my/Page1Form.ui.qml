import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Item {
    id: item1
    property alias textField1: textField1
    property alias button1: button1
    property alias textArea: textArea


    property real topwidth: 300
    TextArea {
        id: textArea
        text: qsTr("- डॉ॰ अनुराग सीठा द्वारा विकसित हिन्दी का प्रथम ओपन सोर्स यूनिकोड वर्तनी परीक्षक तथा शोधक ; दो लाख से अधिक हिन्दी शब्द की डिक्शनरी के साथ स्टैण्डअलोन यूनिकोड शब्द संसाधक तथा फॉयरफॉक्स एक्सटेन्शन के रुप में।")
        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
        anchors.left: parent.left
        anchors.leftMargin: 110
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 168
        anchors.right: parent.right
        anchors.rightMargin: 110
        anchors.top: parent.top
        anchors.topMargin: 101
        textFormat: Qt.RichText
        readOnly: true
        persistentSelection: true
        horizontalAlignment: topwidth



    }

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
