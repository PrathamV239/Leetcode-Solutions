SELECT unique_id, name
FROM Employees
LEFT JOIN EmployeeUNI
on EmployeeUNI.id = Employees.id