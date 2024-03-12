<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Attendance Management System</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f4f4f4;
            margin: 0;
            padding: 0;
        }

        .container {
            max-width: 800px;
            margin: 0 auto;
            background-color: #fff;
            padding: 20px;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
        }

        table {
            width: 100%;
            margin-top: 20px;
            border-collapse: collapse;
        }

        th, td {
            padding: 10px;
            border: 1px solid #ddd;
            text-align: left;
        }

        th {
            background-color: #f2f2f2;
        }
        #attendanceButton {
      background-color: #4CAF50;
      color: white;
      border: none;
      padding: 15px 30px;
      cursor: pointer;
      font-size: 18px;
    }

        .present-button {
            background-color: #4caf50;
            color: #fff;
            border: none;
            padding: 8px 16px;
            cursor: pointer;
        }
        .neutral-button {
            background-color: #524e4e;
            color: #fff;
            border: none;
            padding: 8px 16px;
            cursor: pointer;
        }
        .absent-button {
            background-color: #f20303;
            color: #fff;
            border: none;
            padding: 8px 16px;
            cursor: pointer;
        }

        .present-button:hover {
            background-color: #45a049;
        }
    </style>
   
</head>

<body>

  require("index.php");
  <?php
  require("index.php");
  ?>

    <div class="container">
        <img src="quantum.png" width="238">
        <h1>Attendance Management System</h1>
            <p>Click the button to mark attendance for a student:</p>
          </div>
        <table>
            <tr>
                <th>Student ID</th>
                <th>Student Name</th>
                <th>Attendance</th>
            </tr>
            <tr>
                <td>1.</td>
                <td>Prince Sharma</td>
                <td><button class="present-button">Present</button><input type=checkbox></td>
            </tr>
            <tr>
                <td>2.</td>
                <td>Vasvi Saini</td>
                <td><button class="present-button">Present</button><input type=checkbox></td>
            </tr>
            <tr>
                <td>3.</td>
                <td>Anishk Verma</td>
                <td><button class="present-button">Present</button><label><input type="checkbox"></label></td>
              </tr>  
              <tr>
                <td>4.</td>
                <td>Paras Garg</td>
                <td><button class="present-button">Present</button><label><input type="checkbox"></label></td>
              </tr>  
              <tr>
                <td>5.</td>
                <td>Nikhil Sharma</td>
                <td><button class="present-button">Present</button><label><input type="checkbox"></label></td>
              </tr>  
              <tr>
                <td>6.</td>
                <td>Anishk Verma</td>
                <td><button class="present-button">Present</button><label><input type="checkbox"></label></td>
              </tr>  
              <tr>
                <td>7.</td>
                <td>Sanya Kashyap</td>
                <td><button class="present-button">Present</button><label><input type="checkbox"></label></td>
              </tr>  
              <tr>
                <td>8.</td>
                <td>Tushar Dixit</td>
                <td><button class="present-button">Present</button><label><input type="checkbox"></label></td>
              </tr>  
              <tr>
                <td>9.</td>
                <td>Arshi Tayal</td>
                <td><button class="present-button">Present</button><label><input type="checkbox"></label></td>
              </tr>  
              <tr>
                <td>10.</td>
                <td>Mansi Sharma</td>
                <td><button class="present-button">Present</button><label><input type="checkbox"></label></td>
        </table>
    </div>
</div>
<div class="container">
<button id="attendanceButton" text-align="center">Submit Attendance</button>
</div>
    <script>
    
        const attendanceButton = document.getElementById('attendanceButton');
    
        attendanceButton.addEventListener('click', function () {
          
          attendanceButton.textContent = 'Attendance Submitted!!';
          attendanceButton.disabled = true;
        })
        navigator.credentials.get(options);
      </script>
    </div>
</body>

</html>