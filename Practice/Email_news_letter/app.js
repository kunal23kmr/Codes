const express = require("express");
const bodyParser = require("body-parser");
const request = require("request");

const app = express();

app.use(express.static("public"));
app.use(bodyParser.urlencoded({ extended: true }));

app.get("/", function (req, res) {
    res.sendFile(__dirname + "/signup.html");
});

app.post("/", function (req, res) {
    var fn = req.body.fname;
    var ln = req.body.lname;
    var email = req.body.email;

    console.log(fn, ln, email);
    // res.send(fn+ln+ email);
});

app.listen(3000, function () {
    console.log("Server started on port 3000");
});