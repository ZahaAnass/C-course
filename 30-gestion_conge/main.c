#include <stdio.h>
#include <string.h>
#include "./include/employee.h"
#include "include/leave_request.h"
#include "include/leave_management.h"
#include "include/manager.h"

void display_menu();

int main(){

    LeaveManagement lm;
    lm.num_requests = 0;
    lm.num_managers = 0;

    Employee employees[50];
    int nb_employees = 0;

    Manager manager[10];
    // int nb_managers = 0;

    int nb_demandes = 0;

    int choix;
    do{
        display_menu();
        scanf("%d", &choix);
        getchar();
        switch (choix)
        {
        case 1:
            printf("\n--- Add Employee ---\n");
            printf("First name: ");
            char first_name[50], last_name[50];
            scanf("%49s", first_name);
            printf("Last name: ");
            scanf("%49s", last_name);
            Employee employee;
            employee.id = nb_employees + 1;
            strcpy(employee.first_name, first_name);
            strcpy(employee.last_name, last_name);
            employee.leave_balance = 30; // Default leave balance
            employees[nb_employees++] = employee;
            printf("Employee added successfully!\n");
            break;
        case 2:
            if(nb_employees == 0){
                printf("Please add an employee first.\n");
                break;
            }

            printf("\n--- Create Leave Request ---\n");
            printf("Employee ID: ");
            int id_emp = 0;
            scanf("%d", &id_emp);

            Employee* emp = NULL;
            for (int i = 0; i < nb_employees; i++) {
                if (employees[i].id == id_emp) {
                    emp = &employees[i];
                    break;
                }
            }

            if(emp){
                char debut[20], fin[20];
                printf("Start Date: ");
                scanf("%19s", debut);

                printf("End Date: ");
                scanf("%19s", fin);

                int duration = 0;
                printf("Duration: ");
                scanf("%d", &duration);

                printf("Reason: ");
                char reason[100];
                scanf("%99s", reason);

                LeaveRequest leaveRequest;
                leaveRequest.id = nb_demandes + 1;
                leaveRequest.employee = *emp;
                strcpy(leaveRequest.start_date, debut);
                strcpy(leaveRequest.end_date, fin);
                leaveRequest.duration = duration;
                strcpy(leaveRequest.reason, reason);
                strcpy(leaveRequest.status, "Pending");
                addLeaveRequest(&lm, &leaveRequest);
                nb_demandes++;
            }else{
                printf("Employee not found.\n");
                break;
            }
            break;
        case 3:
            if(nb_demandes == 0){
                printf("Please add a leave request first.\n");
                break;
            }

            // Approve/Reject Request
            printf("\n--- Manage Requests ---\n");
            
            if (lm.num_requests > 0) {
                printf("\nRequest ID to process: ");
                int id_demande;
                scanf("%d", &id_demande);
                
                printf("1. Approve\n2. Reject\nChoice: ");
                int decision;
                scanf("%d", &decision);
                
                LeaveRequest* current_demande = findRequestById(&lm, id_demande);
                if (current_demande == NULL) {
                    printf("Request not found.\n");
                    break;
                }
                if (decision == 1) {
                    processLeaveRequest(current_demande, "Approved");
                    printf("Request approved successfully!\n");
                } else if (decision == 2) {
                    processLeaveRequest(current_demande, "Rejected");
                    printf("Request rejected.\n");
                }
            }
            break;
        case 4:
            printf("\n--- Pending Requests ---\n");
            // In main.c, around line 130
            int pending_count = 0;
            LeaveRequest **pending = listPendingRequests(&lm, &pending_count);
            if (pending) {
                for (int i = 0; i < pending_count; i++) {
                    printLeaveRequest(pending[i]);
                }
            }
            break;
        case 5:
            printf("\n--- Leave Balance ---\n");

            if(nb_employees == 0){
                printf("Please add an employee first.\n");
                break;
            }

            printf("Employee ID: ");
            int emp_id;
            scanf("%d", &emp_id);

            Employee* employe = NULL;
            for (int i = 0; i < nb_employees; i++) {
                if (employees[i].id == emp_id) {
                    employe = &employees[i];
                    break;
                }
            }
            
            if(employe){
                printf("Leave Balance: %d\n", employe->leave_balance);
            }else{
                printf("Employee not found.\n");
            }
            break;
        case 6:
            printf("\n--- Sort Employees by Name ---\n");
            sortEmployees(&manager[0]);
            printf("Operation successful\n");
            break;
        case 7:
            printf("Goodbye !\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    }while(choix != 7);
    return 0;
}

void display_menu() {
    printf("\n=== Leave Management System ===\n");
    printf("1. Add Employee\n");
    printf("2. Create Leave Request\n");
    printf("3. Approve/Reject Request\n");
    printf("4. Show Pending Requests\n");
    printf("5. Show Leave Balance\n");
    printf("6. Sort Employees by Name\n");
    printf("7. Exit\n");
    printf("Enter Your Choice: ");
}