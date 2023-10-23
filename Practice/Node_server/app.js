const express = require("express");
const app = express();

const https = require("https");



app.get("/", function (req, res) {
    const url = "https://api.openweathermap.org/data/2.5/weather?q=Begusarai&appid=4db3ab88bf4d1710b649dc975a37d2d8&units=metric";
    https.get(url, response => {
        console.log(response);

        response.on("data", function (data) {
            // console.log(data);
            const wdata = JSON.parse(data);
            console.log(wdata);
            res.send(wdata);
        });
    })


});










app.listen(3000, function () {
    console.log("Server suru ho gya hai. 3000 pr");
});
