import QtQuick 2.7

Page1Form {



    textArea.readOnly:  {
        width:240
        text:
        "dsffffffffffffffffffffffffffffffffffffffffffff,"+
        "ppppppppppppppppppppppppppppppppppppppppppppppp";
}
    textArea.horizontalAlignment: {
               Text.enabled
    }

    button1.onClicked: {
        console.log("Button Pressed. Entered text: " + textField1.text);
    }


}
