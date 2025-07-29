import QtQuick
import QtQuick.Controls.Material
import com.franco.movie

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Instantiable Object")

    Movie {
        id: movieId
        title: "Titanic"
        mainCharacter: "Leonardo D"
    }

    Button {
        text: "Invoke created object"

        onClicked: {
            movieId.title = "Fast and Furious"
            movieId.mainCharacter = "Vin Diesel"

            console.log("New: " + movieId.title + ", " + movieId.mainCharacter)
        }
    }

}
