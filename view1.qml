import QtQuick 2.0
import QtQuick.Window 2.1

//![0]

//Rectangle {
//    width: 180; height: 200

//    Component {
//        id: contactDelegate
//        Item {
//            required property string name
//            width: 180; height: 40
//            Column {
//                Text { text: '<b>Name:</b> ' + name }
//                Text { text: '<b>Number:</b> ' + number }
//            }
//        }
//    }

//    ListView {
//        anchors.fill: parent
//        required model
//        delegate: contactDelegate
//        highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
//        focus: true
//    }
//}

ListView {
    width: 500; height: 500

    required model
    delegate: Rectangle {
//        required color
        required property string name
        width: 500
        height: 50
        color: "#008080"
        border.color: "#C0C0C0"
        border.width: 1
        radius: 10
        Text {
           text: "Settings"
           font.pixelSize: 19
           font.family: "AvantGarde-Medium"
           color: "#ffffff"
           smooth: true
           verticalAlignment: Text.AlignVCenter
           horizontalAlignment : Text.AlignHCenter
//            verticalAlignment : Text.AlignVCenter
//            text: parent.name
        }
    }
    focus: true
}
//![0]
