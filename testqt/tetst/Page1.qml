import QtQuick 2.7

Page1Form {
    button.onClicked: {
        Qt.openUrlExternally("http://interviewfight.org/interviewfight/tao/Main/login")
}
    button1.onClicked: {
        console.log("Button Pressed. Entered text: " + textField1.text);
    }
}
