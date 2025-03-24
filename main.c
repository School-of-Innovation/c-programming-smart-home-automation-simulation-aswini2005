/*
 * 🚨 WARNING: CHALLENGE MODE ACTIVATED 🚨
 * 
 * 1️⃣ Sit back, take a deep breath, and **THINK**.
 * 2️⃣ For the next **10 minutes**, avoid using **Gen AI, ChatGPT, or any shortcuts**.
 * 3️⃣ Trust your **brain**—you’re smarter than you think!
 * 4️⃣ Consider yourself a **LOSER** if you cheat. Seriously, promise yourself you won't. 😤
 * 5️⃣ If you solve it on your own, **you WIN** and level up as a true programmer and come and meet me ! 
 * 
 * 
 * 💡 Remember: The best coders aren’t the ones who copy-paste. They are the ones who **struggle, think, fail, and then succeed.** 
 *    
 * Now, write your code! You got this! 💪🔥
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 // Define constants for the number of devices (these can be adjusted as per requirements)
 #define NUM_LIGHTS 5
 #define NUM_SENSORS 3
 #define NUM_DOORS 2
 
 // Function declarations
 void controlLights(int lights[], int numLights);
 void monitorTemperatureSensor(int tempSensors[], int numSensors);
 void controlMotionSensors(int motionSensors[], int numSensors);
 void controlSecurityLocks(int locks[], int numLocks);
 
 int main() {
     // Initialize devices (0 = OFF, 1 = ON for Lights, Motion Sensors, and Locks)
     int lights[NUM_LIGHTS] = {0, 0, 0, 0, 0}; // All lights are initially OFF
     int tempSensors[NUM_SENSORS] = {22, 23, 24}; // Initial temperature for each sensor
     int motionSensors[NUM_SENSORS] = {0, 0, 0}; // No motion detected
     int securityLocks[NUM_DOORS] = {0, 0}; // All locks are initially unlocked
 
     int choice;
     
     do {
         // Display menu
         printf("\nSmart Home Automation System\n");
         printf("1. Control Lights\n");
         printf("2. Monitor Temperature Sensors\n");
         printf("3. Control Motion Sensors\n");
         printf("4. Control Security Locks\n");
         printf("5. Exit\n");
         printf("Enter your choice: ");
         scanf("%d", &choice);
 
         switch(choice) {
             case 1:
                 controlLights(lights, NUM_LIGHTS);
                 break;
             case 2:
                 monitorTemperatureSensor(tempSensors, NUM_SENSORS);
                 break;
             case 3:
                 controlMotionSensors(motionSensors, NUM_SENSORS);
                 break;
             case 4:
                 controlSecurityLocks(securityLocks, NUM_DOORS);
                 break;
             case 5:
                 printf("Exiting the system.\n");
                 break;
             default:
                 printf("Invalid choice. Please try again.\n");
         }
     } while (choice != 5);
     
     return 0;
 }
 
 // Function to control lights (toggle ON/OFF)
 void controlLights(int lights[], int numLights) {
     int lightNum;
     printf("\nEnter the light number to toggle (1-%d): ", numLights);
     scanf("%d", &lightNum);
     
     if (lightNum >= 1 && lightNum <= numLights) {
         lightNum--; // Adjust for 0-indexed array
         lights[lightNum] = !lights[lightNum]; // Toggle the light (ON/OFF)
         printf("Light %d is now %s.\n", lightNum + 1, lights[lightNum] ? "ON" : "OFF");
     } else {
         printf("Invalid light number.\n");
     }
 }
 
 // Function to monitor temperature sensors
 void monitorTemperatureSensor(int tempSensors[], int numSensors) {
     printf("\nTemperature readings from sensors:\n");
     for (int i = 0; i < numSensors; i++) {
         printf("Sensor %d: %d°C\n", i + 1, tempSensors[i]);
     }
 }
 
 // Function to control motion sensors (detect motion ON/OFF)
 void controlMotionSensors(int motionSensors[], int numSensors) {
     int sensorNum;
     printf("\nEnter the sensor number to toggle motion detection (1-%d): ", numSensors);
     scanf("%d", &sensorNum);
     
     if (sensorNum >= 1 && sensorNum <= numSensors) {
         sensorNum--; // Adjust for 0-indexed array
         motionSensors[sensorNum] = !motionSensors[sensorNum]; // Toggle motion detection (ON/OFF)
         printf("Motion sensor %d is now %s.\n", sensorNum + 1, motionSensors[sensorNum] ? "ACTIVE" : "INACTIVE");
     } else {
         printf("Invalid sensor number.\n");
     }
 }
 
 // Function to control security locks (Lock/Unlock)
 void controlSecurityLocks(int locks[], int numLocks) {
     int doorNum;
     printf("\nEnter the door number to toggle lock status (1-%d): ", numLocks);
     scanf("%d", &doorNum);
     
     if (doorNum >= 1 && doorNum <= numLocks) {
         doorNum--; // Adjust for 0-indexed array
         locks[doorNum] = !locks[doorNum]; // Toggle lock (Lock/Unlock)
         printf("Door %d is now %s.\n", doorNum + 1, locks[doorNum] ? "LOCKED" : "UNLOCKED");
     } else {
         printf("Invalid door number.\n");
     }
 }
 