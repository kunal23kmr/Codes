// const express = require("express");
// const mysql = require('mysql');

// const cors = require('cors');

// const app = express();
// app.use(cors);
// app.use(express.json());


// const db = mysql.createConnection({
//     host: "localhost",
//     user: "root",
//     password: "12345",
//     database: "foodiestudio"
// })


// app.post('/signup', (req, res) => {
//     const sql = "INSERT INTO users (`first_name`, `last_name`, `mobile_number`, `city`, `state`, `country`, `pincode`, `password`) VALUES(?) ";
//     const values = [
//         req.body.first_name,
//         req.body.last_name,
//         req.body.mobile_number,
//         req.body.city,
//         req.body.state,
//         req.body.country,
//         req.body.pincode,
//         req.body.password
//     ];
//     db.query(sql, [values], (err, data) => {
//         if (err) {
//             return res.json("Error");
//         }
//         return res.json(data);
//     })
// })

// app.listen(3001, () => {
//     console.log("listening");
// })

const express = require("express");
const mysql = require('mysql2');

const cors = require('cors');

const app = express();
app.use(cors());
app.use(express.json());

const db = mysql.createConnection({
    host: "localhost",
    user: "root",
    password: "12345",
    database: "foodiestudio"
});

//checking the conection
// Add a database ping operation
db.connect((err) => {
    if (err) {
        console.error('Database connection failed:', err);
        return;
    }
    console.log('Database is connected');
});

app.listen(3001, () => {
    console.log("Server is listening on port 3001");
});



app.post('/signup', (req, res) => {
    const mobileNumber = req.body.mobile_number;

    // Check if the mobile number already exists in the database
    db.query('SELECT * FROM users WHERE mobile_number = ?', [mobileNumber], (err, results) => {
        if (err) {
            console.error('Error:', err);
            return res.status(500).json({ message: 'Error' });
        }

        // If results.length is greater than 0, the mobile number already exists
        if (results.length > 0) {
            return res.status(400).json({ message: 'Mobile number already exists' });
        }

        // If the mobile number is not found, proceed to insert the new user
        const sql = "INSERT INTO users (`first_name`, `last_name`, `mobile_number`, `city`, `state`, `country`, `pincode`, `password`) VALUES(?)";
        const values = [
            req.body.first_name,
            req.body.last_name,
            mobileNumber, // Use the variable here
            req.body.city,
            req.body.state,
            req.body.country,
            req.body.pincode,
            req.body.password
        ];

        db.query(sql, [values], (err, data) => {
            if (err) {
                console.error('Error:', err);
                return res.status(500).json({ message: 'Error' });
            }
            return res.status(200).json(data);
        });
    }
    );
});


app.post('/login', (req, res) => {
    const mobileNumber = req.body.mobile_number;
    const password = req.body.password;

    console.log(mobileNumber);
    console.log(password);
    db.query('SELECT * FROM users WHERE mobile_number = ? and password = ?', [mobileNumber, password], (err, results) => {
        // Query execution and callback
        if (err) {
            console.error('Error:', err);
            return res.status(500).json({ message: 'Error' });
        }
        if (results.length > 0) {
            console.log('mil gya');
            return res.status(200).json(results);
        }
        console.log("baigan");
        return res.status(400).json({ message: 'Wrong phone number or, password.' });

    });
});