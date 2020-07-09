import QtQuick 2.0
import QtQuick.Window 2.1

ListView {
    width: 500; height: 500

    required model
    delegate: Rectangle {
        required property string name
        width: 500
        height: 50
        color: "#008080"
        border.color: "#C0C0C0"
        border.width: 1
        radius: 10
        anchors.left: parent.left
        MouseArea {
                anchors.fill: parent
                acceptedButtons: Qt.LeftButton | Qt.RightButton
                onClicked: {
                    if (mouse.button == Qt.RightButton)
                        parent.color = '#008080';
                    else
                        parent.color = 'green';
                }
            }
        Text {
           text: parent.name
           font.pixelSize: 19
           font.family: "AvantGarde-Medium"
           anchors.verticalCenter: parent.verticalCenter
           anchors.horizontalCenter: parent.horizontalCenter
           smooth: true
        }
    }
}
