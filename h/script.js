let employees = [];
let id = 1;

function addEmployee() {
  const name = document.getElementById("name").value;
  const salary = document.getElementById("salary").value;
  const address = document.getElementById("address").value;
  const mobile = document.getElementById("mobile").value;

  if (!name || !salary || !address || !mobile) {
    alert("Please fill in all fields");
    return;
  }

  const employee = { id, name, salary, address, mobile };
  employees.push(employee);
  id++;

  displayEmployees();
  clearForm();
}

function displayEmployees() {
  const tbody = document
    .getElementById("employeeTable")
    .getElementsByTagName("tbody")[0];
  tbody.innerHTML = "";

  employees.forEach((employee) => {
    const tr = document.createElement("tr");
    tr.innerHTML = `
              <td>${employee.id}</td>
              <td>${employee.name}</td>
              <td>${employee.salary}</td>
              <td>${employee.address}</td> <td>${employee.mobile}</td> <td> <button onclick="deleteEmployee(${employee.id})">Delete</button> <button onclick="editEmployee(${employee.id})">Edit</button> </td> `;
    tbody.appendChild(tr);
  });
}
function clearForm() {
  document.getElementById("name").value = "";
  document.getElementById("salary").value = "";
  document.getElementById("address").value = "";
  document.getElementById("mobile").value = "";
}

function deleteEmployee(id) {
  employees = employees.filter((employee) => employee.id !== id);
  displayEmployees();
}

function editEmployee(id) {
  const employee = employees.find((employee) => employee.id === id);

  document.getElementById("name").value = employee.name;
  document.getElementById("salary").value = employee.salary;
  document.getElementById("address").value = employee.address;
  document.getElementById("mobile").value = employee.mobile;

  employees = employees.filter((employee) => employee.id !== id);
  displayEmployees();
}

document
  .getElementById("employeeForm")
  .addEventListener("submit", (e) => {
    e.preventDefault();
    addEmployee();
  });