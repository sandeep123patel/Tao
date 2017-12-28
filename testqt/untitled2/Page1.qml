import QtQuick 2.7
import QtQuick.Controls 2.0

Page1Form {


    textArea.readOnly {

       text : "dfffffffffffffffffffffffffffffffffffffffffffffffffffffffff"+
              "fdddddddddddddddddddddddddddddddddddddddddddddddddddddddd"+
              "fdddddddddddddddddddddddddddddddddddddddddddddddddddddddd";

    }



    button1.onClicked: {
        console.log("Button Pressed. Entered text: " + textField1.text);
    }
}
