SELECT unique_id, name
FROM EmployeeUNI
RIGHT JOIN Employees
on EmployeeUNI.id = Employees.id