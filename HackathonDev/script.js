const express = require('express');
const mongoose = require('mongoose');
const app = express();

mongoose.connect('mongodb://localhost/employee_db', { useNewUrlParser: true, useUnifiedTopology: true });

const employeeSchema = new mongoose.Schema({
  name: String,
  salary: Number,
  address: String,
  mobile: Number
});


const Employee = mongoose.model('Employee', employeeSchema);

app.post('/add_employee', (req, res) => {
  const employee = new Employee({
    name: req.body.name,
    salary: req.body.salary,
    address: req.body.address,
    mobile: req.body.mobile
  });
  employee.save((err) => {
    if (err) {
      res.send('Error adding employee.');
    } else {
      res.send('Employee added.');
    }
  });
});

app.get('/add_employee', (req, res) => {
  res.render('add_employee');
});

app.listen(3000, () => {
  console.log('Server started on port 3000.');
});