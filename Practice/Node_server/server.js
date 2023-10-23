//jshint esversion:6

const express = require("express");
const bp = require("body-parser");

const app = express();
app.use(bp.urlencoded({ extended: true }));

app.get("/", function (req, res) {
    res.send("hello kunal");
});

app.post("/", function (req, res) {
    var n1 = Number(req.body.n1);
    var n2 = Number(req.body.n2);
    var result = n1+n2;
    res.send("Thenks! The result is "+ result);
});

app.get("/2", function (req, res) {
    res.send("2");
});

app.get("/contact", (req, res) => {
    res.send("I am kunal...etc ptcadfadfdfadz zc ");
});


app.get("/calculate", (req, res) => {
    res.sendFile(__dirname + "/calculator.html");
});

app.listen(300, function () {
    console.log("Hello kunal");
});
