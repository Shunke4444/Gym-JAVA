#include <iostream>
using namespace std;
int main(void) {
    string name;
    int age, sched, location, goal, exp, wrktime, mealplan, injury, gender, heightCM, caloriesMale, caloriesFemale;
    float weight, height, bmi, bmrMale, bmrFemale;

    cout << "\n  =================================================================\n";
cout << "        _______     ___       .______        __    ______        \n" ;
cout << "       |   ____|  /    \\     |   _  \\     |  |  /  __  \\      \n" ;
cout << "       |  |__    /  ^   \\    |  |_)   |    |  | |  |  |  |      \n" ;
cout << "       |   __|  /  /_\\  \\   |       /     |  | |  |  |  |      \n" ;
cout << "       |  |    /  _____   \\  |  |\\  \\---.|  | |  `--'  '--.  \n" ;
cout << "       |__|   /__/     \\__\\ | _| `.___|   |__| \\_____\\_____\\ \n" ;

cout << " _______  __  .___________..__   __.  _______     _______.     _______.\n" ;
cout << "|   ____||  | |           ||  \\ |  | |   ____|   /       |    /       |\n" ;
cout << "|  |__   |  | `---|  |----`|   \\|  | |  |__     |   (----`   |   (----`\n" ;
cout << "|   __|  |  |     |  |     |  . `   | |   __|     \\   \\        \\   \\    \n" ;
cout << "|  |     |  |     |  |     |  |\\   | |  |____.----)   |   .----)   |   \n" ;
cout << "|__|     |__|     |__|     |__| \\__| |_______|_______/    |_______/    \n" ;
cout << "\n" ;
cout << "      (~    _ _ _  _  _| _  _  _|_ _      _     _  /~_ _ . _  _  \n" ;
cout << "      _)|_|| | (/_| |(_|(/_|    | (_)  \\/(_)|_||   \\_/(_||| |_\\    \n" ;
cout << "                                       /" ;
    cout << "\n  =================================================================\n";
    cout << "\nName: ";
    cin >> name;

    cout << "Age: ";
    cin >> age;
    while (age < 1)
    {
        //cin loop
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error, please enter a valid number above 0: ";
        cin >> age;
    }
    cout << "Weight in Kilograms: ";
    cin >> weight;
    while (weight < 1)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error, please enter a valid number above 0: ";
        cin >> weight;
    }
    cout << "Height in Meters: ";
    cin >> height;
    while (height < 1)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error, please enter a valid number above 0: ";
        cin >> height;
    }
    cout << "----------------------------------------------\n";
    cout << "Gender \n1. Male \n2. Female\nInput: ";
    cin >> gender;
    while (gender < 1 || gender > 2)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error, please choose a number between 1(Male) and 2(Female): ";
        cin >> gender;
    }
    cout << "=====================================================================================\n";
    cout << "Do you have any injuries or health conditions that affect your ability to exercise? \n1. Yes \n2. No\nInput: ";
    cin >> injury;
    while (injury < 1 || injury > 2)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error, please choose a number between 1(Yes) and 2(No): ";
        cin >> injury;
    }
    //injury issue
    if (injury == 1)
    {
        cout << "=====================================================================================\n";
        cout << "Please consult your doctor first.\n";
        cout << "=====================================================================================\n";
        return 1;
    }
    bmi = weight / (height * height);
    cout << "=====================================================================================\n";
    cout << "<<<<<<<<  - " << "Your BMI as of now is: " << bmi << " -  >>>>>>>>" << endl;
    if(bmi < 18.5)
    {
        cout << "=====================================================================================\n";
        cout << "Given you're underweight, we will tailor a routine for you that focuses on muscle mass gain\n";
        goal = 2;
    }
    else
    {
        cout << "=====================================================================================\n";
        cout << "Where do you want to workout from?  \n1. Get Shredded \n2. Gain Muscle Mass \n3. Lose Weight\nInput: ";
        cin >> goal;
    }
    // (WIP) Lose Weight /  Gain Muscle Calc
    while (goal < 1 || goal > 3)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error, please choose a number between 1(Get Shredded), 2(Gain Muscle Mass), and 3(Lose Weight): ";
        cin >> goal;
    }
    cout << "=====================================================================================\n";
    cout << "Where do you want to workout from? \n1. Gym \n2. Home\nInput: ";
    cin >> location;
    while (location < 1 || location > 2)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error, please choose a number between 1(Gym) and 2(Home): ";
        cin >> location;
    }
    cout << "=====================================================================================\n";
    cout << "How much time are you willing to spend working out? \n1. 1-2 Days Per week \n2. 3-5 Days Per Week \n3. 6-7 Days Per week\nInput: ";
    cin >> wrktime;
    while (wrktime < 1 || wrktime > 3)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error, please choose a number between 1(1-2 Days), 2(3-5 Days), and 3(6-7Days): ";
        cin >> wrktime;
    }
    cout << "=====================================================================================\n";
    cout << "What is your Fitness Level? \n1. Beginner (0-3 Months of Experience) \n2. With Some Experience (5-8 Months Of Experience) \n3. Experienced Lifter (1+ Years)\nInput: ";
    cin >> exp;
    while (exp < 1 || exp > 3)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error, please choose a number between 1(0-3 Months), 2(5-8 Months), and 3(1+ Years): ";
        cin >> exp;
    }
    cout << "=====================================================================================\n";
    cout << "Are you Capable of Following a strict Meal Plan? \n1. Yes \n2. No\nInput: ";
    cin >> mealplan;
    while (mealplan < 1 || mealplan > 2)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Error, please choose a number between 1(Yes) and 2(No): ";
        cin >> mealplan;
    }
    //BMR 
    //heightCM = height * 100;
    //bmrMale = 66.47 + (13.75 * weight) + (5.003 * heightCM) - (6.755 * age);
    //bmrFemale = 655.1 + (9.563 * weight) + (1.850 * heightCM) - (4.676 * age);

    /*
    Goal:
    1 Shredded, 2 Gain Muscle Mass, 3 Lose Weight
    Location:
    1 Gym, 2 Home
    Worktime:
    1 1-2 Days, 2 3-5 Days, 3 6-7 Days
    Experience:
    1 0-3 Months, 2 5-8 Months, 3 1+ Years
    Meal Plan:
    1 Yes, 2 No
    */
    cout << "\n=====================================================================================\n";
    switch (goal)
    {
    case 1://SHREDDED
        switch (location)
        {
        case 1://GYM
            switch (wrktime)
            {
            case 1://WORK TIME 1-2 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << " Newbie Gym Plan (0 - 3 Months Experience! 2 - 3 Sets - 8 - 12 Repititions!)\n\nUpper Body Day\n1. Incline Bench Press (Dumbbell or Barbell\n2. Flat Bench Press\n3. Pull Ups or Lat Pulldowns\n 4. Deadlifts\n5. Bicep Curls\n\nMeal plan\n\nMeal 1. Protein Shake\n\n Ingredients\nBanana, 1 Medium Oats, 60Grams Whey Protein, 30g Peanut Butter.\n\nMeal 2 Lentils\n\n Ingreadients\n100G Red Lentils, 2 Tomatoes, Chosen Spices (eg. Paprika, Salt, Pepper), 60g Green Beans.\n\nMeal 3 Chicken\n\nIngredients\n150g Chicken Breasts, Chosen Spices, 200g White Potato, 30g Broccoli, 30g Carrots\n\nMeal 4 Eggs\n\nIngreadients\n3-4 Large Eggs, 200g White Rice, 50g Cabbage, Chosen Spices";
                        break;
                    case 2:
                        cout << "Newbie Gym Plan (0 - 3 Months Experience! 2 - 3 Sets - 8 - 12 Repititions!)\n\nUpper Body Day\n1.Incline Bench Press(Dumbbell or Barbell\n2.Flat Bench Press\n3.Pull Ups or Lat Pulldowns\n 4. Deadlifts\n5.Bicep Curl\nNo Meal Plan.";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Gym Goer (5-8 Months Experience!3-4 Sets - 8-12 Repititions!)\nWorkout A.\n1. Bench Press\n2. Pull Ups or Lat PullDowns\n3. Barbell Squats\n4. Seated Leg Curls\n5. Shoulder Press\n6. Bicep Curls\nWorkout B.\n1. Incline Bench Press\n2. Seated Cable Rows\n3. Hack Squats\n4. Romanian Dead Lifts\n5. Lateral Raise\n6. Tricep Pushdowns\nMeal Plan\nMeal 1. Protein Shake\n Ingreadients\nBanana, 1 Medium Oats, 60Grams Whey Protein, 30g Peanut Butter.\nMeal 2 Lentils\n Ingreadients\n100G Red Lentils, 2 Tomatoes, Chosen Spices (eg. Paprika, Salt, Pepper), 60g Green Beans.\nMeal 3 Chicken\nIngredients\n150g Chicken Breasts, Chosen Spices, 200g White Potato, 30g Broccoli, 30g Carrots\nMeal 4 Eggs\nIngreadients\n3-4 Large Eggs, 200g White Rice, 50g Cabbage, Chosen Spices";
                        break;
                    case 2:
                        cout << "With Experience Gym Goer (5-8 Months Experience!3-4 Sets - 8-12 Repititions!)\nWorkout A.\n1. Bench Press\n2. Pull Ups or Lat PullDowns\n3. Barbell Squats\n4. Seated Leg Curls\n5. Shoulder Press\n6. Bicep Curls\nWorkout B.\n1. Incline Bench Press\n2. Seated Cable Rows\n3. Hack Squats\n4. Romanian Dead Lifts\n5. Lateral Raise\n6. Tricep Pulldowns";

                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nWorkout A\n1. Incline Bench Press\n2. Flat Bench Press\n3. Weighted Pull Ups or Lat Pulldowns\n4. T-Bar Rows or Barbell Rows\n5. Hack Squats\n6. Leg Curls\n7. Bicep Curls\nWorkout B\n1. Chest Flys\n2. Single Hand Dumbbell Rows\n3. Deadlifts\n4. Lateral Raises\n5. Tricep Pushdowns\n6.Skull Crushers\n7. Calf Raises\nMeal Plan\nMeal 1. Protein Shake\n Ingreadients\nBanana, 1 Medium Oats, 60Grams Whey Protein, 30g Peanut Butter.\nMeal 2 Lentils\n Ingreadients\n100G Red Lentils, 2 Tomatoes, Chosen Spices (eg. Paprika, Salt, Pepper), 60g Green Beans.\nMeal 3 Chicken\nIngredients\n150g Chicken Breasts, Chosen Spices, 200g White Potato, 30g Broccoli, 30g Carrots\nMeal 4 Eggs\nIngreadients\n3-4 Large Eggs, 200g White Rice, 50g Cabbage, Chosen Spices";
                        break;
                    case 2:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nWorkout A\n1. Incline Bench Press\n2. Flat Bench Press\n3. Weighted Pull Ups or Lat Pulldowns\n4. T-Bar Rows or Barbell Rows\n5. Hack Squats\n6. Leg Curls\n7. Bicep Curls\nWorkout B\n1. Chest Flys\n2. Single Hand Dumbbell Rows\n3. Deadlifts\n4. Lateral Raises\n5. Tricep Pushdowns\n6.Skull Crushers\n7. Calf Raises\nNo meal plan";
                        break;
                    }
                    break;
                }
                break;
            case 2:// WORK TIME 3-5 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1. Push Day\n1. Incline Bench Press\n2 Flat Bench Press.\n3. Overhead Press\n Day 2 Pull Day\n1. Lat Pulldown Or Pull Ups\n2. Deadlifts\n3. Barbell Rows\n4. Bicep Curls\nDay 3 Legs\n1. Squats\n2. Switching Lunges\n3. Romanian Deadlifts\n Day 4 Cardio.\nDay 5 Full Body\n1. Bench Press\n2. Pull Ups or Pull Downs\n3. Squats\n4. Bicep Curls\n5. Sit Ups\nMeal Plan\nMeal 1. Tuna Omelet\nIngreadients\n1.2 Eggs\n2. 1/4 Cup of Canned Tuna\n3. Onions\n4. Chosen Seasoning\nMeal 2. Chicken Tinola\nIngreadients\n1. 4 Cloves of Garlic\n2. 1 whole Onion\n3. 1 Small Ginger\n4. 1/2 Kilo Chicken\n5. 4 Cups of Water\n6. 2 Tablespoons of Fishsauce\n7. 1 Cup Malunggay Leaves\n8. 1 Green Papaya\n9. Salt and Pepper\nMeal 3. Beef and Brocolli Stir Fry\nIngredients\n1. 1/4 kilo beef sirloin, sliced thinly\n2. 2 tablespoons soy sauce\n3. 1 tablespoon vinegar\n4. 1 teaspoon sugar\n5. 4 cloves garlic, minced\n6. 1/4 cup of water\n6. 2 tablespoons oyster sauce\n7. 2 Cups of Brocolli\n8. Preffered Seasonings";

                        break;
                    case 2:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1. Push Day\n1. Incline Bench Press\n2 Flat Bench Press.\n3. Overhead Press\n Day 2 Pull Day\n1. Lat Pulldown Or Pull Ups\n2. Deadlifts\n3. Barbell Rows\n4. Bicep Curls\nDay 3 Legs\n1. Squats\n2. Switching Lunges\n3. Romanian Deadlifts\nNo meal plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Gym Goer (5-8 Months Experience!3-4 Sets - 8-12 Repititions!)\nDay 1. Push Day\n1. Incline Bench Press\n2. Chest Flys (Cable or Machine)\n3.Front Raises\n4. Lateral Raise\n5. Tricep PushDowns\n6. Skull Crushers.\n Day 2 Pull Day\n1. Lat Pulldown Or Pull Ups\n2. Seated Rows\n3. Lat Pull Overs\n4. Face Pulls\n5. Bicep Curls\n6. Hammer Curls\nDay 3 Legs\n1. Squats\n2. Switching Lunges\n3. Romanian Deadlifts\n4. Leg Curls\n5. Leg Extenders\n6. Calf Raises.\n Day 4. Cardio\nDay 5. Full Body \n1. Deadlifts\n2. Squats\n3. Rows\n4. Bench Press\n 5. Overhead Press\n 6. Bicep Curls\n7. Tricep Pushdowns\nMeal Plan\nMeal 1. Tuna Omelet\nIngreadients\n1.2 Eggs\n2. 1/4 Cup of Canned Tuna\n3. Onions\n4. Chosen Seasoning\nMeal 2. Chicken Tinola\nIngreadients\n1. 4 Cloves of Garlic\n2. 1 whole Onion\n3. 1 Small Ginger\n4. 1/2 Kilo Chicken\n5. 4 Cups of Water\n6. 2 Tablespoons of Fishsauce\n7. 1 Cup Malunggay Leaves\n8. 1 Green Papaya\n9. Salt and Pepper\nMeal 3. Beef and Brocolli Stir Fry\nIngredients\n1. 1/4 kilo beef sirloin, sliced thinly\n2. 2 tablespoons soy sauce\n3. 1 tablespoon vinegar\n4. 1 teaspoon sugar\n5. 4 cloves garlic, minced\n6. 1/4 cup of water\n6. 2 tablespoons oyster sauce\n7. 2 Cups of Brocolli\n8. Preffered Seasonings";
                        break;
                    case 2:
                        cout << "With Experience Gym Goer (5-8 Months Experience!3-4 Sets - 8-12 Repititions!)\nDay 1. Push Day\n1. Incline Bench Press\n2. Chest Flys (Cable or Machine)\n3.Front Raises\n4. Lateral Raise\n5. Tricep PushDowns\n6. Skull Crushers.\n Day 2 Pull Day\n1. Lat Pulldown Or Pull Ups\n2. Seated Rows\n3. Lat Pull Overs\n4. Face Pulls\n5. Bicep Curls\n6. Hammer Curls\nDay 3 Legs\n1. Squats\n2. Switching Lunges\n3. Romanian Deadlifts\n4. Leg Curls\n5. Leg Extenders\n6. Calf Raises.\n Day 4. Cardio\nDay 5. Full Body \n1. Deadlifts\n2. Squats\n3. Rows\n4. Bench Press\n 5. Overhead Press\n 6. Bicep Curls\n7. Tricep Pushdowns\nNo meal plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Gym Goer (1+ Years Experience!4-5 Sets - 8-15 Repitition)\nDay 1. Chest Day\n1. Flat Bench Press\n2. Flat Bench Dumbbell Fly\n3. Incline Dumbbell Bench Press\n4. Low to High Cable Fly\n5. Chest Dips\n6. Decline Push Ups\nDay 2 Back Day\n1. Deadlift\n2. Pull Ups\n3. Bent Over Rows\n4. Close Grip Lat Pulldowns\n5. Machine High Row\n6. Trap Raises\nDay 3. Arm Day\n1. Barbell Curls\n2. Alternating Hammer Curls\n3. Reverse Cable Curl w/Straight Bar\n4. Tricep Pushdowns\n5. Tricep Kickbacks\n6. Skull Crushers\nDay 4. Leg Day\n1. Back Squats\n2. Romanian Dead Lifts\n3. Split Squats\n4. Hip Thrust\n5. Leg Extensions\n6. Leg Curls\n7. Calf Raises\nDay 5. Shoulder Day\n1. Overhead Press\n2. Arnold Press\n3. Lateral Raise\n4. Cable Y-Raise\n5. Rear Delt Fly\n6. Face Pulls\nMeal Plan\nMeal 1. Tuna Omelet\nIngreadients\n1.2 Eggs\n2. 1/4 Cup of Canned Tuna\n3. Onions\n4. Chosen Seasoning\nMeal 2. Chicken Tinola\nIngreadients\n1. 4 Cloves of Garlic\n2. 1 whole Onion\n3. 1 Small Ginger\n4. 1/2 Kilo Chicken\n5. 4 Cups of Water\n6. 2 Tablespoons of Fishsauce\n7. 1 Cup Malunggay Leaves\n8. 1 Green Papaya\n9. Salt and Pepper\nMeal 3. Beef and Brocolli Stir Fry\nIngredients\n1. 1/4 kilo beef sirloin, sliced thinly\n2. 2 tablespoons soy sauce\n3. 1 tablespoon vinegar\n4. 1 teaspoon sugar\n5. 4 cloves garlic, minced\n6. 1/4 cup of water\n6. 2 tablespoons oyster sauce\n7. 2 Cups of Brocolli\n8. Preffered Seasonings";
                        break;
                    case 2:
                        cout << "Experienced Gym Goer (1+ Years Experience!4-5 Sets - 8-15 Repitition)\nDay 1. Chest Day\n1. Flat Bench Press\n2. Flat Bench Dumbbell Fly\n3. Incline Dumbbell Bench Press\n4. Low to High Cable Fly\n5. Chest Dips\n6. Decline Push Ups\nDay 2 Back Day\n1. Deadlift\n2. Pull Ups\n3. Bent Over Rows\n4. Close Grip Lat Pulldowns\n5. Machine High Row\n6. Trap Raises\nDay 3. Arm Day\n1. Barbell Curls\n2. Alternating Hammer Curls\n3. Reverse Cable Curl w/Straight Bar\n4. Tricep Pushdowns\n5. Tricep Kickbacks\n6. Skull Crushers\nDay 4. Leg Day\n1. Back Squats\n2. Romanian Dead Lifts\n3. Split Squats\n4. Hip Thrust\n5. Leg Extensions\n6. Leg Curls\n7. Calf Raises\nDay 5. Shoulder Day\n1. Overhead Press\n2. Arnold Press\n3. Lateral Raise\n4. Cable Y-Raise\n5. Rear Delt Fly\n6. Face Pulls";
                        break;
                    }
                    break;
                }
                break;
            case 3:// WORK TIME 6-7 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1. Push Day\n1. Bench Press\n2. Incline Bench Press\n3. Overhead Press\n3. Lateral Raise\nDay 2. Pull Day\n1. Deadlifts\n2. Lat Pull Downs\n3. Bicep Curls\nDay 3. Legs\n1. Squats\n2. Leg Curls\n3. Calf Raises\nDay 4. Cardio\n5. Rest\nDay 6 Upper Body\n1. Lat Pull Downs\n2. Bench Press\n3. Overhead Press\nDay 7. Lower Body\n1. Squats\n2. Lunges\n3. Calf Raises\nMealplan\nMeal 1. Oatmeal\nIngreadients\n1. 1 Pack of Oatmeal\n2. 1 Banana Sliced\n3. 1/2 Cup of Blue Berries\nMeal 2. Chicken Adobo\nIngredients\n1. 1lb Chicken Thighs\n2. 1/2 Cupy Soy Sauce\n3. 1/4 Cup Vinegar\n4. Cloves Garlic\n5. 2 Bay Leaves\n6. 1 Tsp Peppercorns\nMeal 3. Ginisang Munggo\nIngredients\n1. 1 Cup Mung Beans\n2. 1/2lb Pork Belly\n3. 4 Cloves Garlic\n4. 1 Onion\n5. 2 Tomatoes\n6. Salt And Pepper";
                        break;
                    case 2:
                        cout << "Newbie Gym Plan (0-3 Months Experience!3 - 4 Sets - 8 - 12 Repititions!)\nDay 1. Push Day\n1.Bench Press\n2.Incline Bench Press\n3.Overhead Press\n3.Lateral Raise\nDay 2. Pull Day\n1.Deadlifts\n2.Lat Pull Downs\n3.Bicep Curls\nDay 3. Legs\n1.Squats\n2.Leg Curls\n3.Calf Raises\nDay 4. Cardio\n5.Rest\nDay 6 Upper Body\n1.Lat Pull Downs\n2.Bench Press\n3.Overhead Press\nDay 7. Lower Body\n1.Squats\n2.Lunges\n3.Calf Raises\nNo meal plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Gym Goer (5-8 Months Experience!3-4 Sets - 8-12 Repititions!)\nDay 1. Back Day\n1. Deadlifts\n2. Bent-Over Rows\n3. Wide Grip Lat Pulldowns\n4. Straight Arm Pull Overs\n5. Dumbbell Rows\nDay 2. Chest and Biceps Day\n1. Incline Dumbbell Bench Press\n2. Bench Press\n3. Incline Dumbell Fly's\n4. Cable Fly's\n5. Barbell Curls\n3. Hamstrings and Glutes Day\n1. Lying Leg Curls\n2. Conventional Deadlifts\n3. Standing Leg Curls\n4. Reverse Hack Squat\n5. Glutes Kickbacks\nDay 4. Cardio\n5. Rest Day\nDay 6. Shoulder and Triceps\n1. Dumbbell Lateral Raises\n2. Dumbell Shoulder Press\n3. Single Arm Cables\n4. Rope Face Pulls\n5. Skull Crushers\nDay 7. Quads\n1. Leg Extensions\n2. Squats\n3. Leg Press\n4. Leg Extensions\n5. Standing Lunges\nMealplan\nMeal1. Oatmeal\nIngreadients\n1. 1 Pack of Oatmeal\n2. 1 Banana Sliced\n3. 1/2 Cup of Blue Berries\nMeal 2. Chicken Adobo\nIngredients\n1. 1lb Chicken Thighs\n2. 1/2 Cupy Soy Sauce\n3. 1/4 Cup Vinegar\n4. Cloves Garlic\n5. 2 Bay Leaves\n6. 1 Tsp Peppercorns\nMeal 3. Ginisang Munggo\nIngredients\n1. 1 Cup Mung Beans\n2. 1/2lb Pork Belly\n3. 4 Cloves Garlic\n4. 1 Onion\n5. 2 Tomatoes\n6. Salt And Pepper";
                        break;
                    case 2:
                        cout << "With Experience Gym Goer (5-8 Months Experience !3-4 Sets - 8-12 Repititions!)\nDay 1. Back Day\n1. Deadlifts\n2. Bent-Over Rows\n3. Wide Grip Lat Pulldowns\n4. Straight Arm Pull Overs\n5. Dumbbell Rows\nDay 2. Chest and Biceps Day\n1. Incline Dumbbell Bench Press\n2. Bench Press\n3. Incline Dumbell Fly's\n4. Cable Fly's\n5. Barbell Curls\n3. Hamstrings and Glutes Day\n1. Lying Leg Curls\n2. Conventional Deadlifts\n3. Standing Leg Curls\n4. Reverse Hack Squat\n5. Glutes Kickbacks\nDay 4. Cardio\n5. Rest Day\nDay 6. Shoulder and Triceps Day\n1. Dumbbell Lateral Raises\n2. Dumbell Shoulder Press\n3. Single Arm Cables\n4. Rope Face Pulls\n5. Skull Crushers\nDay 7. Quads\n1. Leg Extensions\n2. Squats\n3. Leg Press\n4. Leg Extensions\n5. Standing Lunges";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Gym Goer (1+ Years Experience!4-5 Sets - 8-15 Repitition)\nDay 1 Shoulder Day\n1. Incline Overhead Press\n2. Dumbbell Lateral Raises\n3. Machine Lateral Raises\n4. Barbell Front Raises\n5. Reverse Pec Deck Fly's\n6. Lying Rear Dealt Fly's\nDay 2. Leg Day\n1. Leg Extensions\n2. Unilateral Hip Press\n3. Leg Press\n4. Squats\n5. Hack Squats\n Day 3. Chest and Back Day\n1. Pec Deck Fly's\n2. Machine Chest Press\n3. Machine Bench Press\n4. Chest Press Machine\n5. Lat Pulldowns\n6. Chest Supported Rows\n7. Seated Rows\nDay 4 Rest\nDay 5. Cardio\nDay 6. Arm Day\n1. Prone Incline Bicep Curls\n2. Seated Incline Dumbbell Curls\n3. Preacher Curls\n4. Rope Triceps Pushdowns\n5. Tricep Dips\n6. Overhead Cable Triceps Extensions\nDay 7 Back Day\n1. Incline Dumbbell Row\n2. Bent Over Barbell Rows\n3. Seated Machine Rows\n4. Cable Seated Rows\n5. Wide Grip Lat Pulldown\n6. Chest Supported Rows\nMealplan\nMeal1. Oatmeal\nIngreadients\n1. 1 Pack of Oatmeal\n2. 1 Banana Sliced\n3. 1/2 Cup of Blue Berries\nMeal 2. Chicken Adobo\nIngredients\n1. 1lb Chicken Thighs\n2. 1/2 Cupy Soy Sauce\n3. 1/4 Cup Vinegar\n4. Cloves Garlic\n5. 2 Bay Leaves\n6. 1 Tsp Peppercorns\nMeal 3. Ginisang Munggo\nIngredients\n1. 1 Cup Mung Beans\n2. 1/2lb Pork Belly\n3. 4 Cloves Garlic\n4. 1 Onion\n5. 2 Tomatoes\n6. Salt And Pepper";
                        break;
                    case 2:
                        cout << "Experienced Gym Goer (1+ Years Experience!4-5 Sets - 8-15 Repitition)\nDay 1 Shoulder Day\n1. Incline Overhead Press\n2. Dumbbell Lateral Raises\n3. Machine Lateral Raises\n4. Barbell Front Raises\n5. Reverse Pec Deck Fly's\n6. Lying Rear Dealt Fly's\nDay 2. Leg Day\n1. Leg Extensions\n2. Unilateral Hip Press\n3. Leg Press\n4. Squats\n5. Hack Squats\n Day 3. Chest and Back Day\n1. Pec Deck Fly's\n2. Machine Chest Press\n3. Machine Bench Press\n4. Chest Press Machine\n5. Lat Pulldowns\n6. Chest Supported Rows\n7. Seated Rows\nDay 4 Rest\nDay 5. Cardio\nDay 6. Arm Day\n1. Prone Incline Bicep Curls\n2. Seated Incline Dumbbell Curls\n3. Preacher Curls\n4. Rope Triceps Pushdowns\n5. Tricep Dips\n6. Overhead Cable Triceps Extensions\nDay 7 Back Day\n1. Incline Dumbbell Row\n2. Bent Over Barbell Rows\n3. Seated Machine Rows\n4. Cable Seated Rows\n5. Wide Grip Lat Pulldown\n6. Chest Supported Rows";
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        case 2://HOME
            switch (wrktime)
            {
            case 1://WORK TIME 1-2 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Home Plan (0-3 Months! Experience 3-4 Sets - 8-12 Repititions!)\nWorkout A\n1. Body Weight Squats\n2. Pull Ups\n3. Mountain Climbers\nWorkout B\n1. Push Ups\n2. Dips\n3. Chin Ups\nMeal Plan\nMeal 1. Protein Shake\n Ingreadients\nBanana, 1 Medium Oats, 60Grams Whey Protein, 30g Peanut Butter.\nMeal 2 Lentils\n Ingreadients\n100G Red Lentils, 2 Tomatoes, Chosen Spices (eg. Paprika, Salt, Pepper), 60g Green Beans.\nMeal 3 Chicken\nIngredients\n150g Chicken Breasts, Chosen Spices, 200g White Potato, 30g Broccoli, 30g Carrots\nMeal 4 Eggs\nIngreadients\n3-4 Large Eggs, 200g White Rice, 50g Cabbage, Chosen Spices";
                        break;
                    case 2:
                        cout << "Newbie Home Plan (0-3 Months! Experience 3-4 Sets - 8-12 Repititions!)\nWorkout A\n1. Body Weight Squats\n2. Pull Ups\n3. Mountain Climbers\nWorkout B\n1. Push Ups\n2. Dips\n3. Chin Ups\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nWorkout A\n1. 150 Normal Squats\n2. 200 Pushups\n3. 100 Crunches\n4. 50 Pullups (Assited Or Negatives)\nWorkout B.\nCardio (Sports, Running, Walking)\nMeal Plan\nMeal 1. Protein Shake\n Ingreadients\nBanana, 1 Medium Oats, 60Grams Whey Protein, 30g Peanut Butter.\nMeal 2 Lentils\n Ingreadients\n100G Red Lentils, 2 Tomatoes, Chosen Spices (eg. Paprika, Salt, Pepper), 60g Green Beans.\nMeal 3 Chicken\nIngredients\n150g Chicken Breasts, Chosen Spices, 200g White Potato, 30g Broccoli, 30g Carrots\nMeal 4 Eggs\nIngreadients\n3-4 Large Eggs, 200g White Rice, 50g Cabbage, Chosen Spices";
                        break;
                    case 2:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nWorkout A\n1. 150 Normal Squats\n2. 200 Pushups\n3. 100 Crunches\n4. 50 Pullups (Assited Or Negatives)\nWorkout B.\nCardio (Sports, Running, Walking)\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Home Workout (1+ Years Experience! Whole Day Workouts)\nWorkout A.\n1. 100 Pike Pushups\n2. 100 Decline Push Ups\n3. 200 Glute Bridge March\n3. Tricep Dips\n4. 50 Chin Ups\n5. 50 Lying Leg Raises\nWorkout B.\nCardio (Sports, RUnning, Walking)\nMeal Plan\nMeal 1. Protein Shake\n Ingreadients\nBanana, 1 Medium Oats, 60Grams Whey Protein, 30g Peanut Butter.\nMeal 2 Lentils\n Ingreadients\n100G Red Lentils, 2 Tomatoes, Chosen Spices (eg. Paprika, Salt, Pepper), 60g Green Beans.\nMeal 3 Chicken\nIngredients\n150g Chicken Breasts, Chosen Spices, 200g White Potato, 30g Broccoli, 30g Carrots\nMeal 4 Eggs\nIngreadients\n3-4 Large Eggs, 200g White Rice, 50g Cabbage, Chosen Spices";
                        break;
                    case 2:
                        cout << "Experienced Home Workout (1+ Years Experience! Whole Day Workouts)\nWorkout A.\n1. 100 Pike Pushups\n2. 100 Decline Push Ups\n3. 200 Glute Bridge March\n3. Tricep Dips\n4. 50 Chin Ups\n5. 50 Lying Leg Raises\nWorkout B.\nCardio (Sports, RUnning, Walking)\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            case 2:// WORK TIME 3-5 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1\nAir Squats\n2. Nordic Hamstring Curls\n3. Jumping Lunges\n4. Jumping Jacks\n5. Mountain Climbers\nDay 2\n1. Push\n2. Pike Push Ups\n3. Wide Push Ups\n.4 Wall Handstands\n5. Tricep Dips\nDay 3\n1. Squat Jumps\n2. Reverse Lunges\n3. GLute Bridge March\n.4 Jumping Lunges\5. Tuck Jumps\nMeal Plan\nMeal 1. Tuna Omelet\nIngreadients\n1.2 Eggs\n2. 1/4 Cup of Canned Tuna\n3. Onions\n4. Chosen Seasoning\nMeal 2. Chicken Tinola\nIngreadients\n1. 4 Cloves of Garlic\n2. 1 whole Onion\n3. 1 Small Ginger\n4. 1/2 Kilo Chicken\n5. 4 Cups of Water\n6. 2 Tablespoons of Fishsauce\n7. 1 Cup Malunggay Leaves\n8. 1 Green Papaya\n9. Salt and Pepper\nMeal 3. Beef and Brocolli Stir Fry\nIngredients\n1. 1/4 kilo beef sirloin, sliced thinly\n2. 2 tablespoons soy sauce\n3. 1 tablespoon vinegar\n4. 1 teaspoon sugar\n5. 4 cloves garlic, minced\n6. 1/4 cup of water\n6. 2 tablespoons oyster sauce\n7. 2 Cups of Brocolli\n8. Preffered Seasonings";
                        break;
                    case 2:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1\nAir Squats\n2. Nordic Hamstring Curls\n3. Jumping Lunges\n4. Jumping Jacks\n5. Mountain Climbers\nDay 2\n1. Push\n2. Pike Push Ups\n3. Wide Push Ups\n.4 Wall Handstands\n5. Tricep Dips\nDay 3\n1. Squat Jumps\n2. Reverse Lunges\n3. GLute Bridge March\n.4 Jumping Lunges\5. Tuck Jumps\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nDay 1\n1.Kettlebell Goblet Squats\n2. Sumo Squats\n3. Lunges\n4. Jumping Jacks\5.Laying Leg Raises\nDay 2 Cardio\nDay 3.\n1. Mountain Climbers\n2. Plank\n3. Alternating High Knees\n4. Superman Holds\n5. Jumping Jacks\nDay 4\n1. Pull Ups (Assisted or Negatives)\n2. Push Ups\n3. Lunges\n4. Calf Raises\n5. Dips\nDay 5\n1. Cardio\nMeal Plan\nMeal 1. Tuna Omelet\nIngreadients\n1.2 Eggs\n2. 1/4 Cup of Canned Tuna\n3. Onions\n4. Chosen Seasoning\nMeal 2. Chicken Tinola\nIngreadients\n1. 4 Cloves of Garlic\n2. 1 whole Onion\n3. 1 Small Ginger\n4. 1/2 Kilo Chicken\n5. 4 Cups of Water\n6. 2 Tablespoons of Fishsauce\n7. 1 Cup Malunggay Leaves\n8. 1 Green Papaya\n9. Salt and Pepper\nMeal 3. Beef and Brocolli Stir Fry\nIngredients\n1. 1/4 kilo beef sirloin, sliced thinly\n2. 2 tablespoons soy sauce\n3. 1 tablespoon vinegar\n4. 1 teaspoon sugar\n5. 4 cloves garlic, minced\n6. 1/4 cup of water\n6. 2 tablespoons oyster sauce\n7. 2 Cups of Brocolli\n8. Preffered Seasonings";
                        break;
                    case 2:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nDay 1\n1.Kettlebell Goblet Squats\n2. Sumo Squats\n3. Lunges\n4. Jumping Jacks\5.Laying Leg Raises\nDay 2 Cardio\nDay 3.\n1. Mountain Climbers\n2. Plank\n3. Alternating High Knees\n4. Superman Holds\n5. Jumping Jacks\nDay 4\n1. Pull Ups (Assisted or Negatives)\n2. Push Ups\n3. Lunges\n4. Calf Raises\n5. Dips\nDay 5\n1. Cardio\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Home Workout (1+ Years Experience! Whole Day Workouts)\nDay 1\n1. Diamond Push Ups\n2. Pike Push Ups\n3. Jump Squats\n4. Jump Lunges\n5. Single-Leg Calf Raises\nDay 2\n1. Archer Pull-Ups\n2. L-Sit Pull Ups\n3. Hanging Leg Raises\n4. Single leg Deadlifts\n5. Pistol Squats\nDay 3\n1. Handstand Push Ups\n2. Plyometric Push-Ups\n3. Burpee Pull Ups\n4. Jumping Lunges\n5. Box Jumps\n4. Rest/Light Cardio\nDay 5\n1. One Arm Push Ups\n2. Handstand Pushups\n3. Jump Squats\n4. Jump Lunges\n5. Single Leg Calf Raises\nMeal Plan\nMeal 1. Tuna Omelet\nIngreadients\n1.2 Eggs\n2. 1/4 Cup of Canned Tuna\n3. Onions\n4. Chosen Seasoning\nMeal 2. Chicken Tinola\nIngreadients\n1. 4 Cloves of Garlic\n2. 1 whole Onion\n3. 1 Small Ginger\n4. 1/2 Kilo Chicken\n5. 4 Cups of Water\n6. 2 Tablespoons of Fishsauce\n7. 1 Cup Malunggay Leaves\n8. 1 Green Papaya\n9. Salt and Pepper\nMeal 3. Beef and Brocolli Stir Fry\nIngredients\n1. 1/4 kilo beef sirloin, sliced thinly\n2. 2 tablespoons soy sauce\n3. 1 tablespoon vinegar\n4. 1 teaspoon sugar\n5. 4 cloves garlic, minced\n6. 1/4 cup of water\n6. 2 tablespoons oyster sauce\n7. 2 Cups of Brocolli\n8. Preffered Seasonings";
                        break;
                    case 2:
                        cout << "Experienced Home Workout (1+ Years Experience! Whole Day Workouts)\nDay 1\n1. Diamond Push Ups\n2. Pike Push Ups\n3. Jump Squats\n4. Jump Lunges\n5. Single-Leg Calf Raises\nDay 2\n1. Archer Pull-Ups\n2. L-Sit Pull Ups\n3. Hanging Leg Raises\n4. Single leg Deadlifts\n5. Pistol Squats\nDay 3\n1. Handstand Push Ups\n2. Plyometric Push-Ups\n3. Burpee Pull Ups\n4. Jumping Lunges\n5. Box Jumps\n4. Rest/Light Cardio\nDay 5\n1. One Arm Push Ups\n2. Handstand Pushups\n3. Jump Squats\n4. Jump Lunges\n5. Single Leg Calf Raises\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            case 3:// WORK TIME 6-7 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nDay 2 Rest\nDay 3\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nDay 4 Cardio\nDay 5\n1. Squats\n2. Push-Ups\n3. Lunges\n4. Plank\n5. Jumping\nDay 6 Rest\nDay 7\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nMealplan\nMeal 1. Oatmeal\nIngreadients\n1. 1 Pack of Oatmeal\n2. 1 Banana Sliced\n3. 1/2 Cup of Blue Berries\nMeal 2. Chicken Adobo\nIngredients\n1. 1lb Chicken Thighs\n2. 1/2 Cupy Soy Sauce\n3. 1/4 Cup Vinegar\n4. Cloves Garlic\n5. 2 Bay Leaves\n6. 1 Tsp Peppercorns\nMeal 3. Ginisang Munggo\nIngredients\n1. 1 Cup Mung Beans\n2. 1/2lb Pork Belly\n3. 4 Cloves Garlic\n4. 1 Onion\n5. 2 Tomatoes\n6. Salt And Pepper";
                        break;
                    case 2:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nDay 2 Rest\nDay 3\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nDay 4 Cardio\nDay 5\n1. Squats\n2. Push-Ups\n3. Lunges\n4. Plank\n5. Jumping\nDay 6 Rest\nDay 7\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nDay 1 Lower Body\n1. Stationary Lunges\n2. Squats\n3. Assited Pistol Squats\n4. Hamstring Bridges\n5. Single Leg Romanian Deadlift(Body Weight)\nDay 2. Active Rest Day (Cardio and Rest)\nDay 3. Core\n1. 1 Minute Plank\n2. Leg Raises\3. Bird Dog\n4. Bridge Hold\n5. 30 Sec Side Plank Both sides\nDay 4 Rest\nDay 5 Upper Body\n1. Military Push Up\n2. Wide Push Up\n3. Diamond Push Up\n4. Pike Push Ups\n5. Dips\nDay 6 Active Rest (Cardio and Rest)\nDay 7. Upper Boddy\n1. Chin Up\n2. Pull Up\n3. Neutral Grip Pull Up\n4. Assisted Pull Ups\n5. Bodyweight Rows\nMeal 1. Oatmeal\nIngreadients\n1. 1 Pack of Oatmeal\n2. 1 Banana Sliced\n3. 1/2 Cup of Blue Berries\nMeal 2. Chicken Adobo\nIngredients\n1. 1lb Chicken Thighs\n2. 1/2 Cupy Soy Sauce\n3. 1/4 Cup Vinegar\n4. Cloves Garlic\n5. 2 Bay Leaves\n6. 1 Tsp Peppercorns\nMeal 3. Ginisang Munggo\nIngredients\n1. 1 Cup Mung Beans\n2. 1/2lb Pork Belly\n3. 4 Cloves Garlic\n4. 1 Onion\n5. 2 Tomatoes\n6. Salt And Pepper";
                        break;
                    case 2:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nDay 1 Lower Body\n1. Stationary Lunges\n2. Squats\n3. Assited Pistol Squats\n4. Hamstring Bridges\n5. Single Leg Romanian Deadlift(Body Weight)\nDay 2. Active Rest Day (Cardio and Rest)\nDay 3. Core\n1. 1 Minute Plank\n2. Leg Raises\3. Bird Dog\n4. Bridge Hold\n5. 30 Sec Side Plank Both sides\nDay 4 Rest\nDay 5 Upper Body\n1. Military Push Up\n2. Wide Push Up\n3. Diamond Push Up\n4. Pike Push Ups\n5. Dips\nDay 6 Active Rest (Cardio and Rest)\nDay 7. Upper Boddy\n1. Chin Up\n2. Pull Up\n3. Neutral Grip Pull Up\n4. Assisted Pull Ups\n5. Bodyweight Rows\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Home Workout (1+ Years Experience! Whole Day Workouts)\nDay 1 Shoulders\n1. Pike Push Ups\n2. HandStand Push Ups (Wall Assisted)\n3. Dive Shoulder Push Ups\n4. Diamond Push Ups\n5. Shoulder Taps\nDay 2 Chest\n1. Normal Push Ups\n2. Wide Push Ups\n3. Diamond Push Ups\n4. Chest Dips\n5. Decline Push Ups\n3. Active Rest (Cardio and Rest)\nDay 4 Back\n1. Supermans\n2. Body Weight Rows\n3. Pull Ups\n4. Muscle Ups\n5. Hollow Hold\nDay 5 Core\n1. Plank\n2. Bicycle Crunches\n3. Russian Twists\n4. Leg Raises\n5. Hollow Hold\nDay 6 Upper Body\n1. Normal Push Ups\n2. Diamond Push Ups\n3. Dips\n4. Chin Ups\n5. Close Grip Chin Ups\nDay 7 Legs\n1. Squats\n2. Lunges\n3. Bulgarian Split Squats (weighted or body weight)\n4. Calf Raises\n5. Wall Sits\n6. Dragon Squats\nNo Meal Plan";
                        break;
                    case 2:
                        cout << "Experienced Home Workout (1+ Years Experience! Whole Day Workouts)\nDay 1 Shoulders\n1. Pike Push Ups\n2. HandStand Push Ups (Wall Assisted)\n3. Dive Shoulder Push Ups\n4. Diamond Push Ups\n5. Shoulder Taps\nDay 2 Chest\n1. Normal Push Ups\n2. Wide Push Ups\n3. Diamond Push Ups\n4. Chest Dips\n5. Decline Push Ups\n3. Active Rest (Cardio and Rest)\nDay 4 Back\n1. Supermans\n2. Body Weight Rows\n3. Pull Ups\n4. Muscle Ups\n5. Hollow Hold\nDay 5 Core\n1. Plank\n2. Bicycle Crunches\n3. Russian Twists\n4. Leg Raises\n5. Hollow Hold\nDay 6 Upper Body\n1. Normal Push Ups\n2. Diamond Push Ups\n3. Dips\n4. Chin Ups\n5. Close Grip Chin Ups\nDay 7 Legs\n1. Squats\n2. Lunges\n3. Bulgarian Split Squats (weighted or body weight)\n4. Calf Raises\n5. Wall Sits\n6. Dragon Squats\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    case 2://GAIN MUSCLE MASS
        switch (location)
        {
        case 1://GYM
            switch (wrktime)
            {
            case 1://WORK TIME 1-2 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 2-3 Sets - 8-12 Repititions!)\nDay 1 Upper Body\n1. Pull Ups or Lat Pull Downs\n2. Bench Press\n3. Overhead Press\nDay 2 Lower Body\n1. Deadlift\n2. Squats\n3. Calf Raises\nMeal Plan\nMeal 1 Greek Yogurt\nIngredients\n1. 1 Cup Greek Yogurt\n2. 1/2 Cup Mixed Berries\n3. 1/4 Cup Almonds\nMeal 2 Snacks\n1. 1 Medium Apple Sliced\n2. 2tbsp Of Peanut Butter\nMeal 3 Chicken Breast\nIngredients\n1. 4oz Grilled Chicken Breasts\n2. 1 Cup Vegetables\n2. 2 Eggs\nMeal 4 Salmon\n1. 4oz Baked Salmon\n2. 1 Medium Sweet Potato\n2. 1 Cup Green Beans\n";
                        break;
                    case 2:
                        cout << "Newbie Gym Plan(0-3 Months Experience!2 - 3 Sets - 8 - 12 Repititions!)\nDay 1 Upper Body\n1.Pull Ups or Lat Pull Downs\n2.Bench Press\n3.Overhead Press\nDay 2 Lower Body\n1.Deadlift\n2.Squats\n3.Calf Raises\nNo meal plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1. Upper Body\n1. Bench Press\n2. Barbell Rows\n3. Overhead Press\n4. Pull ups\n5. Dumbbell Curls\nDay 2 Lower Body\n1. Squats\n2. Deadlifts\n3. Leg Press\n4. Calf Raises\n5. Leg Curls\nMeal Plan\nMeal 1 Greek Yogurt\nIngredients\n1. 1 Cup Greek Yogurt\n2. 1/2 Cup Mixed Berries\n3. 1/4 Cup Almonds\nMeal 2 Snacks\n1. 1 Medium Apple Sliced\n2. 2tbsp Of Peanut Butter\nMeal 3 Chicken Breast\nIngredients\n1. 4oz Grilled Chicken Breasts\n2. 1 Cup Vegetables\n2. 2 Eggs\nMeal 4 Salmon\n1. 4oz Baked Salmon\n2. 1 Medium Sweet Potato\n2. 1 Cup Green Beans\n";
                        break;
                    case 2:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1. Upper Body\n1. Bench Press\n2. Barbell Rows\n3. Overhead Press\n4. Pull ups\n5. Dumbbell Curls\nDay 2 Lower Body\n1. Squats\n2. Deadlifts\n3. Leg Press\n4. Calf Raises\n5. Leg Curls\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nDay 1 Upper Body\n1. Bench Press\n2. Incline Bench Press\n2. Weighted Pull Ups\n3. T-Bar Rows\n4. Face Pulls\n5. Lateral Raises\n6. Bicep Curls\n7. Tricep Rope Push Downs\nDay 2 Lower Body\n1. Barbell Squats\n2. Hack Squats\n3. Leg Curls\n4. Leg Extenders\n5. Weighted Bulgarian Split Squats\n6. Leg Press\n7. Standing Calf Raise\nMeal Plan\nMeal 1 Greek Yogurt\nIngredients\n1. 1 Cup Greek Yogurt\n2. 1/2 Cup Mixed Berries\n3. 1/4 Cup Almonds\nMeal 2 Snacks\n1. 1 Medium Apple Sliced\n2. 2tbsp Of Peanut Butter\nMeal 3 Chicken Breast\nIngredients\n1. 4oz Grilled Chicken Breasts\n2. 1 Cup Vegetables\n2. 2 Eggs\nMeal 4 Salmon\n1. 4oz Baked Salmon\n2. 1 Medium Sweet Potato\n2. 1 Cup Green Beans\n";
                        break;
                    case 2:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nDay 1 Upper Body\n1. Bench Press\n2. Incline Bench Press\n2. Weighted Pull Ups\n3. T-Bar Rows\n4. Face Pulls\n5. Lateral Raises\n6. Bicep Curls\n7. Tricep Rope Push Downs\nDay 2 Lower Body\n1. Barbell Squats\n2. Hack Squats\n3. Leg Curls\n4. Leg Extenders\n5. Weighted Bulgarian Split Squats\n6. Leg Press\n7. Standing Calf Raise\\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            case 2:// WORK TIME 3-5 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 2-3 Sets - 8-12 Repititions!)\n1. Day 1 Push\n1. Bench Press\n2. Chest Flys\n3. Overhead Press\nDay 2. Pull\n1. Face Pulls\n2. Assited Pull ups\n3. Single Hand Rows\nDay 3 Rest\n Day 4 Legs\n1. Squats\n2. Leg Press\n3. Lunges\nDay 5 Cardio\nMeal Plan\nMeal 1 Eggs\nIngredients\n1. 3 Eggs\n2. 2 Slices of Whole Wheat\n3. 1 Cup of Milk\nMeal 2 Turkey\nIngredients\n1. 4 oz Turkey Breast\n2. 1 Slice Cheddar Cheese\n3. 1 Cup Rice\n4. 2 Cups Mixed vegetables\nMeal 3 Snack\nIngredients\n1. 1 Cup Baby Carrots\n2. 2 tbsp hummus\nMeal 4 Stir Fried Beef Sirloin\nIngredients\n1. 4oz Beef Sirloin\n2. 1 Cup Rice\n 1 Cup Broccoli Florets";
                        break;
                    case 2:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 2-3 Sets - 8-12 Repititions!)\n1. Day 1 Push\n1. Bench Press\n2. Chest Flys\n3. Overhead Press\nDay 2. Pull\n1. Face Pulls\n2. Assited Pull ups\n3. Single Hand Rows\nDay 3 Rest\n Day 4 Legs\n1. Squats\n2. Leg Press\n3. Lunges\nDay 5 Cardio\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1 Push\n1. Barbell Bench Press\n2. Barbell Military Press\n3. Dumbbell Incline Press\n4. Dumbbell Lateral Raise\n5. Tricep Extensions\nDay 2 Pull\n1. Barbell Deadlifts\n2. Barbell Bent Over Row\n3. Lat Pull Downs\n4. Dumbbell upright Rows\n5. Bicep Curls\nDay 3 Legs\n1. Barbell Squats\n2. Bulgarian Split Squats\n3. Leg Press\n4. Leg Extensions\n5. Calf Raises\nDay 4 Rest\nDay 5 Cardio\nMeal Plan\nMeal 1 Eggs\nIngredients\n1. 3 Eggs\n2. 2 Slices of Whole Wheat\n3. 1 Cup of Milk\nMeal 2 Turkey\nIngredients\n1. 4 oz Turkey Breast\n2. 1 Slice Cheddar Cheese\n3. 1 Cup Rice\n4. 2 Cups Mixed vegetables\nMeal 3 Snack\nIngredients\n1. 1 Cup Baby Carrots\n2. 2 tbsp hummus\nMeal 4 Stir Fried Beef Sirloin\nIngredients\n1. 4oz Beef Sirloin\n2. 1 Cup Rice\n 1 Cup Broccoli Florets";
                        break;
                    case 2:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1 Push\n1. Barbell Bench Press\n2. Barbell Military Press\n3. Dumbbell Incline Press\n4. Dumbbell Lateral Raise\n5. Tricep Extensions\nDay 2 Pull\n1. Barbell Deadlifts\n2. Barbell Bent Over Row\n3. Lat Pull Downs\n4. Dumbbell upright Rows\n5. Bicep Curls\nDay 3 Legs\n1. Barbell Squats\n2. Bulgarian Split Squats\n3. Leg Press\n4. Leg Extensions\n5. Calf Raises\nDay 4 Rest\nDay 5 Cardio\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nDay 1 Chest and Triceps\n1. Bench Press\n2. Incline Bench Press\n3. Dumbbell Flyes\n4. Chest Press Machine\n5. Cable Tricep Pushdowns\n6. Katana Tricep Extensions\n7. Single Hand Tricep Pull\nDay 2 Back And Biceps\n1. Deadlifts\n2. T-Bar Row\n3. Seated cable Rows\n4. Weighted Pull Ups/Lat Pull Downs\n5. Kneeling Lat Pullover\n6. Bicep Curls\n7. Hammer Curls\n8. Preacher Curls\nDay 3 Legs\n1. Barbell Squats\n2. Sissy Barbell Squats\n3. Deadlifts\n4. Hack Squats\n5. Leg Extensions\n6. Romanian Deadlifts\nDay 4 Shoulders and Abs\n1. Military Press\n2. Lateral Raises\n3. Front Dumbbell Raises\n4. Upright Rows\n5. Hanging Leg Raises\n6. Cable Crunches\nDay 5. Cardio\nMeal Plan\nMeal 1 Eggs\nIngredients\n1. 3 Eggs\n2. 2 Slices of Whole Wheat\n3. 1 Cup of Milk\nMeal 2 Turkey\nIngredients\n1. 4 oz Turkey Breast\n2. 1 Slice Cheddar Cheese\n3. 1 Cup Rice\n4. 2 Cups Mixed vegetables\nMeal 3 Snack\nIngredients\n1. 1 Cup Baby Carrots\n2. 2 tbsp hummus\nMeal 4 Stir Fried Beef Sirloin\nIngredients\n1. 4oz Beef Sirloin\n2. 1 Cup Rice\n 1 Cup Broccoli Florets";
                        break;
                    case 2:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nDay 1 Chest and Triceps\n1. Bench Press\n2. Incline Bench Press\n3. Dumbbell Flyes\n4. Chest Press Machine\n5. Cable Tricep Pushdowns\n6. Katana Tricep Extensions\n7. Single Hand Tricep Pull\nDay 2 Back And Biceps\n1. Deadlifts\n2. T-Bar Row\n3. Seated cable Rows\n4. Weighted Pull Ups/Lat Pull Downs\n5. Kneeling Lat Pullover\n6. Bicep Curls\n7. Hammer Curls\n8. Preacher Curls\nDay 3 Legs\n1. Barbell Squats\n2. Sissy Barbell Squats\n3. Deadlifts\n4. Hack Squats\n5. Leg Extensions\n6. Romanian Deadlifts\nDay 4 Shoulders and Abs\n1. Military Press\n2. Lateral Raises\n3. Front Dumbbell Raises\n4. Upright Rows\n5. Hanging Leg Raises\n6. Cable Crunches\nDay 5. Cardio\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            case 3:// WORK TIME 6-7 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 2-3 Sets - 8-12 Repititions!)\nDay 1 Shoulders\n1. Cable Lateral Raises\n2. Front Raises\n3. Overhead Press\nDay 2. Cardio\nDay 3 Back and Abs\n1. Wide Grip Lat Pull Down\n2. Deadlift\n3. Cable Crunches\nDay 4. Rest\nDay 5. Chest + Biceps\n1. Bench Press\n2. Push Ups\n3. Bicep Curls\nDay 6. Cardio\nDay 7. Legs\n1. Body Weight Squats\n2. Leg Curls\n3. Calf Raises\nMeal Plan\nMeal 1 Greek Yogurt and Berries\nIngredients\n1. 1 Cup Greek Yogurt\n2. 1/2 Cup of Granola\n3. 1/2 Cup Mixed berries\nMeal 2 Snacks Chosen Fruits\nMeal 3 Grilled Chicken\n1/2 Grilled Chicken Breast\n1/2 Cup of Rice\n1 Cup of Steamed Broccoli\nMeal 4 Fried Salmon\n1 Grilled Salmon\n1/2 cup of Rice\n1 cup of Roasted Brussels Sprouds";
                        break;
                    case 2:
                        cout << "Newbie Gym Plan(0 - 3 Months Experience!2 - 3 Sets - 8 - 12 Repititions!)\nDay 1 Shoulders\n1.Cable Lateral Raises\n2.Front Raises\n3.Overhead Press\nDay 2. Cardio\nDay 3 Back and Abs\n1.Wide Grip Lat Pull Down\n2.Deadlift\n3.Cable Crunches\nDay 4. Rest\nDay 5. Chest + Biceps\n1.Bench Press\n2.Push Ups\n3.Bicep Curls\nDay 6. Cardio\nDay 7. Legs\n1.Body Weight Squats\n2.Leg Curls\n3.Calf Raises\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1 Lower Body\n1. Back Squat\n2. Romanian Deadlifts\n3. Walking Lunges\n4. Normal Squats\nDay 2 Upper\n1. Incline Bench Press\n2. Pull Ups or Lat Pulldown\n3. Flat Bench Press\n4. One Arm Dumbbell Row\nDay 3. Active Rest (Cardio and Rest)\nDay 4. Lower\n1. Deadlifts\n2. Goblet Squats\n3. Leg extenders\n4. Split Squats\nDay 5. Upper\n1. Military Press\n2. Skull Crushers\n3. Tricep Push Downs\n4. Barbell Curls\nDay 6. Rest\nDay 7. Cardio\n\nMeal Plan\nMeal 1 Greek Yogurt and Berries\nIngredients\n1. 1 Cup Greek Yogurt\n2. 1/2 Cup of Granola\n3. 1/2 Cup Mixed berries\nMeal 2 Snacks Chosen Fruits\nMeal 3 Grilled Chicken\n1/2 Grilled Chicken Breast\n1/2 Cup of Rice\n1 Cup of Steamed Broccoli\nMeal 4 Fried Salmon\n1 Grilled Salmon\n1/2 cup of Rice\n1 cup of Roasted Brussels Sprouds";
                        break;
                    case 2:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1 Lower Body\n1. Back Squat\n2. Romanian Deadlifts\n3. Walking Lunges\n4. Normal Squats\nDay 2 Upper\n1. Incline Bench Press\n2. Pull Ups or Lat Pulldown\n3. Flat Bench Press\n4. One Arm Dumbbell Row\nDay 3. Active Rest (Cardio and Rest)\nDay 4. Lower\n1. Deadlifts\n2. Goblet Squats\n3. Leg extenders\n4. Split Squats\nDay 5. Upper\n1. Military Press\n2. Skull Crushers\n3. Tricep Push Downs\n4. Barbell Curls\nDay 6. Rest\nDay 7. Cardio\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nDay 1 Lower\n1. Romanian Deadlifts\n2. Back Squats\n3. Goblet Squats\n4. Bulgarian Split Squats\n5. Hip Thrusts\nDay 2. Upper\n1. Incline Bench Press\n2. Weighted Pull Ups/Heavy Lat Pulldowns\n3. Flat Bench Press\n4. T-Bar Row\n5. Cable Chest Flye\nDay 3. Upper\n1. Seated Military Press\n2. Upright Rows\n3. Cable Lateral Raises\n4. Preacher Curls\n5. Hammer Curls\nDay 4. Lower\n1. Conventional Deadlifts\n2. Hack Squats\n3. Leg Curls\n4. Leg Extenders\n5. Sled Drag\nDay 5 Rest\nDay 6. Cardio\nDay 7 Full Body\n1. Deadlifts\n2. Bench Press\n3. Lateral Raises\n4. Barbell Squats\n5. Crunches\n\nMeal Plan\nMeal 1 Greek Yogurt and Berries\nIngredients\n1. 1 Cup Greek Yogurt\n2. 1/2 Cup of Granola\n3. 1/2 Cup Mixed berries\nMeal 2 Snacks Chosen Fruits\nMeal 3 Grilled Chicken\n1/2 Grilled Chicken Breast\n1/2 Cup of Rice\n1 Cup of Steamed Broccoli\nMeal 4 Fried Salmon\n1 Grilled Salmon\n1/2 cup of Rice\n1 cup of Roasted Brussels Sprouds";
                        break;
                    case 2:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nDay 1 Lower\n1. Romanian Deadlifts\n2. Back Squats\n3. Goblet Squats\n4. Bulgarian Split Squats\n5. Hip Thrusts\nDay 2. Upper\n1. Incline Bench Press\n2. Weighted Pull Ups/Heavy Lat Pulldowns\n3. Flat Bench Press\n4. T-Bar Row\n5. Cable Chest Flye\nDay 3. Upper\n1. Seated Military Press\n2. Upright Rows\n3. Cable Lateral Raises\n4. Preacher Curls\n5. Hammer Curls\nDay 4. Lower\n1. Conventional Deadlifts\n2. Hack Squats\n3. Leg Curls\n4. Leg Extenders\n5. Sled Drag\nDay 5 Rest\nDay 6. Cardio\nDay 7 Full Body\n1. Deadlifts\n2. Bench Press\n3. Lateral Raises\n4. Barbell Squats\n5. Crunches\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        case 2://HOME
            switch (wrktime)
            {
            case 1://WORK TIME 1-2 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1 Upper Body\n1. Australian Push Ups\n2. Banded Pull Ups\n3. Crunches\n4. Bag Bicep Curls\nDay 2. Lower Body\n1. Squats\n2. Lunges\n3. Body weight Calf Raises\nMeal Plan\nMeal 1 Eggs And Oats\nIngredients\n1. 3 Poached Eggs\n2. 1 Cup Oatmeal\n3. Milk\n4. Chosen Fruits\nMeal 2. Snacks\nIngredients\n1. 1 Ounce Cheddar Cheese\n2. 15 Whole Grain Crackers\n3. 1 Cup Seedless Grapes\nMeal 2. Tuna\nIngredients\n1. 3 Ounces of Tuna\n2. 1 Tbsp Mayonnaise\n3. 2 Whole Eggs\n4. Whole wheat Wrap\nMeal 4 Chicken\nIngredients\n1. 5 Ounces Chicken Breasts\n2. 1 Whole wheat pasta\n2. 6 Asparagus\n3. Chosen Seasonings";
                        break;
                    case 2:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1 Upper Body\n1. Australian Push Ups\n2. Banded Pull Ups\n3. Crunches\n4. Bag Bicep Curls\nDay 2. Lower Body\n1. Squats\n2. Lunges\n3. Body weight Calf Raises.\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nDay 1 Upper Body\n1. 100 Push Ups\n2. 50 Pull Ups\n3. Leg Raises\n4. Planks\n5. Dips\nDay 2. Lower Body\n1. Jump Squats\n2. Squat Holds\n3. Lunges\n4. Single Leg Calf Raises\nDay 5. Split Squats\nIngredients\n1. 3 Poached Eggs\n2. 1 Cup Oatmeal\n3. Milk\n4. Chosen Fruits\nMeal 2. Snacks\nIngredients\n1. 1 Ounce Cheddar Cheese\n2. 15 Whole Grain Crackers\n3. 1 Cup Seedless Grapes\nMeal 2. Tuna\nIngredients\n1. 3 Ounces of Tuna\n2. 1 Tbsp Mayonnaise\n3. 2 Whole Eggs\n4. Whole wheat Wrap\nMeal 4 Chicken\nIngredients\n1. 5 Ounces Chicken Breasts\n2. 1 Whole wheat pasta\n2. 6 Asparagus\n3. Chosen Seasonings";
                        break;
                    case 2:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nDay 1 Upper Body\n1. 100 Push Ups\n2. 50 Pull Ups\n3. Leg Raises\n4. Planks\n5. Dips\nDay 2. Lower Body\n1. Jump Squats\n2. Squat Holds\n3. Lunges\n4. Single Leg Calf Raises\nDay 5. Split Squats\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Home Workout (1 + Years Experience! Whole Day Workouts)\nDay 1. Upper\n1. Pike Push Ups\n2. Muscle Ups\n2. Archer Pull Ups\n3. Single Hand Pull Ups\n4. L raises\n5. Hanging Leg Raises\nDay 2.  Lower Body\n1. Weighted Squats\n2. Pistol Squats\n3. Dragon Squats\n4. Switching Lunges\n5. Bulgarian Split Squats\nIngredients\n1. 3 Poached Eggs\n2. 1 Cup Oatmeal\n3. Milk\n4. Chosen Fruits\nMeal 2. Snacks\nIngredients\n1. 1 Ounce Cheddar Cheese\n2. 15 Whole Grain Crackers\n3. 1 Cup Seedless Grapes\nMeal 2. Tuna\nIngredients\n1. 3 Ounces of Tuna\n2. 1 Tbsp Mayonnaise\n3. 2 Whole Eggs\n4. Whole wheat Wrap\nMeal 4 Chicken\nIngredients\n1. 5 Ounces Chicken Breasts\n2. 1 Whole wheat pasta\n2. 6 Asparagus\n3. Chosen Seasonings";
                        break;
                    case 2:
                        cout << "Experienced Home Workout (1 + Years Experience! Whole Day Workouts)\nDay 1. Upper\n1. Pike Push Ups\n2. Muscle Ups\n2. Archer Pull Ups\n3. Single Hand Pull Ups\n4. L raises\n5. Hanging Leg Raises\nDay 2.  Lower Body\n1. Weighted Squats\n2. Pistol Squats\n3. Dragon Squats\n4. Switching Lunges\n5. Bulgarian Split Squats\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            case 2:// WORK TIME 3-5 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)Day 1 Full Body\n1. Plank\n2. Squats\n3. Lunges\n4. Push Ups\nDay2 Upper Body\n1. Chin Ups\n2. Pull Ups\n3. Dips\n4. Close Hand Chin Ups\nDay 3. Cardio\nDay 4. Lower Body\n1. Squats\n2. Mountain Climbers\n3. Calf Raises\n4. Goblet Squats\nMeal Plan\nMeal 1. Cereal\nIngredients\n1. High Protein Cereal chosen brand\n2. 2 Eggs\3. 1 Turkey Sausage\n4. Protein Shake\nMeal 2 Chosen Fruit Snacks\nMeal3. Turkey and Rice\nIngredients\n1. 4oz Shredded Turkey\n2. 1/4 Cup Spinich\n3. 1/2 Cup Rice\nMeal 4 Lean Beef Steak\nIngredients\n1. 5oz Steak\n2. 1/2 cup Rice\n3. 1/2 Cup Quinoa Salad";
                        break;
                    case 2:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)Day 1 Full Body\n1. Plank\n2. Squats\n3. Lunges\n4. Push Ups\nDay2 Upper Body\n1. Chin Ups\n2. Pull Ups\n3. Dips\n4. Close Hand Chin Ups\nDay 3. Cardio\nDay 4. Lower Body\n1. Squats\n2. Mountain Climbers\n3. Calf Raises\n4. Goblet Squats\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Home Workout (5 - 8 Months Experience!Whole Day Workouts)\nDay 1 Lower Body\n1. Stationary Lunges\n2. Squats\n3. Assited Pistol Squats\nDay 2. Active Rest\nDay 3 Core\n1. Plank\n2. Leg Raises\n3. Bird Dog\nDay 4. Active Rest\nDay5. Upper Body\n1. Pull ups\n2. Chin Ups\n3. Push Ups\nClose Grip Push Upsl\nIngredients\n1. High Protein Cereal chosen brand\n2. 2 Eggs\3. 1 Turkey Sausage\n4. Protein Shake\nMeal 2 Chosen Fruit Snacks\nMeal3. Turkey and Rice\nIngredients\n1. 4oz Shredded Turkey\n2. 1/4 Cup Spinich\n3. 1/2 Cup Rice\nMeal 4 Lean Beef Steak\nIngredients\n1. 5oz Steak\n2. 1/2 cup Rice\n3. 1/2 Cup Quinoa Salad";
                        break;
                    case 2:
                        cout << "With Experience Home Workout (5 - 8 Months Experience!Whole Day Workouts)\nDay 1 Lower Body\n1. Stationary Lunges\n2. Squats\n3. Assited Pistol Squats\nDay 2. Active Rest\nDay 3 Core\n1. Plank\n2. Leg Raises\n3. Bird Dog\nDay 4. Active Rest\nDay5. Upper Body\n1. Pull ups\n2. Chin Ups\n3. Push Ups\nClose Grip Push Ups\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Home Workout (1 + Years Experience!Whole Day Workouts)\nDay 1 Lower Body\n1. Lateral Lunges\n2. Hamstring Bridges\n3. Nordic Hamstring  Curl\n4. Pistol Squats\n5. Single Leg Romanian Deadlifts\nDay 2 Cardio\nDay 3. Abs\n1. Max Plank\n2. L sits\n3. Limb Lift\n4. Bridge Hold\n5. Side Planks\nDay 4. Rest\nDay 5. Upper Body\n1. Military Push Ups\n2. Diamond Push Ups\n3. Pike Push Ups\n4. MUscle Ups\n5. Archer Pull Upsl\nIngredients\n1. High Protein Cereal chosen brand\n2. 2 Eggs\3. 1 Turkey Sausage\n4. Protein Shake\nMeal 2 Chosen Fruit Snacks\nMeal3. Turkey and Rice\nIngredients\n1. 4oz Shredded Turkey\n2. 1/4 Cup Spinich\n3. 1/2 Cup Rice\nMeal 4 Lean Beef Steak\nIngredients\n1. 5oz Steak\n2. 1/2 cup Rice\n3. 1/2 Cup Quinoa Salad";
                        break;
                    case 2:
                        cout << "Experienced Home Workout (1 + Years Experience!Whole Day Workouts)\nDay 1 Lower Body\n1. Lateral Lunges\n2. Hamstring Bridges\n3. Nordic Hamstring  Curl\n4. Pistol Squats\n5. Single Leg Romanian Deadlifts\nDay 2 Cardio\nDay 3. Abs\n1. Max Plank\n2. L sits\n3. Limb Lift\n4. Bridge Hold\n5. Side Planks\nDay 4. Rest\nDay 5. Upper Body\n1. Military Push Ups\n2. Diamond Push Ups\n3. Pike Push Ups\n4. MUscle Ups\n5. Archer Pull Ups\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            case 3:// WORK TIME 6-7 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1\n1. Max PLank\n2. Lunges\n3. Squats\nDay 2\n1. Assited Chin Ups\n2. Crunches\n3. Laying Leg Raises\nDay 3. Active Rest (Cardio and Rest)\nDay4\n1.Australian Push Ups\n2. Mountain Climbers\n3. Wall Sits\nDay 5\n1. Plank\n2. Jumping Jacks\n3. Side Crunches\nDay 6. Cardio\nDay 7 Rest Dayl\nIngredients\n1. High Protein Cereal chosen brand\n2. 2 Eggs\3. 1 Turkey Sausage\n4. Protein Shake\nMeal 2 Chosen Fruit Snacks\nMeal3. Turkey and Rice\nIngredients\n1. 4oz Shredded Turkey\n2. 1/4 Cup Spinich\n3. 1/2 Cup Rice\nMeal 4 Lean Beef Steak\nIngredients\n1. 5oz Steak\n2. 1/2 cup Rice\n3. 1/2 Cup Quinoa Salad";
                        break;
                    case 2:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1\n1. Max PLank\n2. Lunges\n3. Squats\nDay 2\n1. Assited Chin Ups\n2. Crunches\n3. Laying Leg Raises\nDay 3. Active Rest (Cardio and Rest)\nDay4\n1.Australian Push Ups\n2. Mountain Climbers\n3. Wall Sits\nDay 5\n1. Plank\n2. Jumping Jacks\n3. Side Crunches\nDay 6. Cardio\nDay 7 Rest Day\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Home Workout (5 - 8 Months Experience!Whole Day Workouts)\nDay 1. Upper and Core\n1. Chin Ups\n2. Back Extensions\n3. Push Ups\n4. Crunches\n5. Side Plank Raises\nDay 2. Active Rest (Cardio and Rest)\nDay 3. Lower Body\n1. Jumping Squats\n2. Bulgarian Split Squats\n3. Lunges\n4. Calf Raises\nDay 4. Active Rest(Cardio and Rest)\nDay 5 Core\n1. Knee to Elbow\n2. Butterfly Hold\n3. Crunches\n4. Side Crunches\nDay 6. Rest\nDay 7 Cardiol\nIngredients\n1. High Protein Cereal chosen brand\n2. 2 Eggs\3. 1 Turkey Sausage\n4. Protein Shake\nMeal 2 Chosen Fruit Snacks\nMeal3. Turkey and Rice\nIngredients\n1. 4oz Shredded Turkey\n2. 1/4 Cup Spinich\n3. 1/2 Cup Rice\nMeal 4 Lean Beef Steak\nIngredients\n1. 5oz Steak\n2. 1/2 cup Rice\n3. 1/2 Cup Quinoa Salad";
                        break;
                    case 2:
                        cout << "With Experience Home Workout (5 - 8 Months Experience!Whole Day Workouts)\nDay 1. Upper and Core\n1. Chin Ups\n2. Back Extensions\n3. Push Ups\n4. Crunches\n5. Side Plank Raises\nDay 2. Active Rest (Cardio and Rest)\nDay 3. Lower Body\n1. Jumping Squats\n2. Bulgarian Split Squats\n3. Lunges\n4. Calf Raises\nDay 4. Active Rest(Cardio and Rest)\nDay 5 Core\n1. Knee to Elbow\n2. Butterfly Hold\n3. Crunches\n4. Side Crunches\nDay 6. Rest\nDay 7 Cardio\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Home Workout (1 + Years Experience!Whole Day Workouts)\nDay 1. Upper Body\n1. Archer Push Ups\n2. Pike Push Ups\n3. Diamond Push Ups\n4. Chest to Bar Pull ups\n5. Muscle Ups\nDay 2. Arms\n1. Tricep Dips\n2. Diamond Push Ups\n3. Plank Shoulder Taps\n4. Burpees\n5 Inchworms\nDay 3. Active Rest (Cardio and Rest)\nDay 4. Back\n1. Superman\n2. Bodyweight Rows\n3. Y-Raises\n4. Bodyweight Face Pulls\n5. Bridges\n Day 5. Rest\n Day 6 Shoulder Workout\n1. Handstand Push Ups\n2. Pike Pushups\n3. Shoulder Taps\n4. Shrugs\nDay 7. Core\n1. Flutter Kicks\n2. Hollow Rock Holds\n3. Reverse Plank Leg lifts\n4. Windshield Wipers\n5. Bear Crawll\nIngredients\n1. High Protein Cereal chosen brand\n2. 2 Eggs\3. 1 Turkey Sausage\n4. Protein Shake\nMeal 2 Chosen Fruit Snacks\nMeal3. Turkey and Rice\nIngredients\n1. 4oz Shredded Turkey\n2. 1/4 Cup Spinich\n3. 1/2 Cup Rice\nMeal 4 Lean Beef Steak\nIngredients\n1. 5oz Steak\n2. 1/2 cup Rice\n3. 1/2 Cup Quinoa Salad";
                        break;
                    case 2:
                        cout << "Experienced Home Workout (1 + Years Experience!Whole Day Workouts)\nDay 1. Upper Body\n1. Archer Push Ups\n2. Pike Push Ups\n3. Diamond Push Ups\n4. Chest to Bar Pull ups\n5. Muscle Ups\nDay 2. Arms\n1. Tricep Dips\n2. Diamond Push Ups\n3. Plank Shoulder Taps\n4. Burpees\n5 Inchworms\nDay 3. Active Rest (Cardio and Rest)\nDay 4. Back\n1. Superman\n2. Bodyweight Rows\n3. Y-Raises\n4. Bodyweight Face Pulls\n5. Bridges\n Day 5. Rest\n Day 6 Shoulder Workout\n1. Handstand Push Ups\n2. Pike Pushups\n3. Shoulder Taps\n4. Shrugs\nDay 7. Core\n1. Flutter Kicks\n2. Hollow Rock Holds\n3. Reverse Plank Leg lifts\n4. Windshield Wipers\n5. Bear Crawl\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    case 3:// LOSE WEIGHT
        switch (location)
        {
        case 1://GYM
            switch (wrktime)
            {
            case 1://WORK TIME 1-2 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 2-3 Sets - 8-12 Repititions!)\nDay 1 Upper Body\n1. Pull Ups or Lat Pull Downs\n2. Bench Press\n3. Overhead Press\nDay 2 Lower Body\n1. Deadlift\n2. Squats\n3. Calf Raises\nMeal Plan\nMeal 1 Vegetable Omelette\nIngredients\n1. 2 Eggs\n2. 1/4 Cup Diced Bell Peppers\n3. 1/4 cup of Spinach\n4. 1/4 Cup of Onions\nMeal 2 Grilled Chicken Salad\nIngredients\n1. 4oz Grilled Chicken Breast\n2. Chosen Greens (Kale, Lettuce, Spinach)\n3. 1/4 Cup Cherry Tomatoes\n4. 1/4 cup cucumber slices\nMeal 3. Baked Salmon with Vegetables\n1. 5 oz salmon fillet\n2. Assorted Roasted Vegetables (zucchini, bell peppers, asparagus)\n";
                        break;
                    case 2:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 2-3 Sets - 8-12 Repititions!)\nDay 1 Upper Body\n1. Pull Ups or Lat Pull Downs\n2. Bench Press\n3. Overhead Press\nDay 2 Lower Body\n1. Deadlift\n2. Squats\n3. Calf Raises\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1. Cardio and Strength Training\n1. 45 minute Cardio (Biking/Running/Swimming/)\n2. Squats\n3. Walking Lunges\nDay 2. Weight training\n1. Pull Ups/Lat Pull downs\n2. Overhead Press\n3. Bench Press\nMeal Plan\nMeal 1 Vegetable Omelette\nIngredients\n1. 2 Eggs\n2. 1/4 Cup Diced Bell Peppers\n3. 1/4 cup of Spinach\n4. 1/4 Cup of Onions\nMeal 2 Grilled Chicken Salad\nIngredients\n1. 4oz Grilled Chicken Breast\n2. Chosen Greens (Kale, Lettuce, Spinach)\n3. 1/4 Cup Cherry Tomatoes\n4. 1/4 cup cucumber slices\nMeal 3. Baked Salmon with Vegetables\n1. 5 oz salmon fillet\n2. Assorted Roasted Vegetables (zucchini, bell peppers, asparagus)\n";
                        break;
                    case 2:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1. Cardio and Strength Training\n1. 45 minute Cardio (Biking/Running/Swimming/)\n2. Squats\n3. Walking Lunges\nDay 2. Weight training\n1. Pull Ups/Lat Pull downs\n2. Overhead Press\n3. Bench Press\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nDay 1. Full Body Workout\n1. Bench Press\n2. Deadlifts\n3. Overhead Press\4. Barbell Squats\n5. Pull Ups/Lat Pull Downs\nDay 2. Cardio (Biking/Running/Swimming)\nMeal Plan\nMeal 1 Vegetable Omelette\nIngredients\n1. 2 Eggs\n2. 1/4 Cup Diced Bell Peppers\n3. 1/4 cup of Spinach\n4. 1/4 Cup of Onions\nMeal 2 Grilled Chicken Salad\nIngredients\n1. 4oz Grilled Chicken Breast\n2. Chosen Greens (Kale, Lettuce, Spinach)\n3. 1/4 Cup Cherry Tomatoes\n4. 1/4 cup cucumber slices\nMeal 3. Baked Salmon with Vegetables\n1. 5 oz salmon fillet\n2. Assorted Roasted Vegetables (zucchini, bell peppers, asparagus)\n";
                        break;
                    case 2:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nDay 1. Full Body Workout\n1. Bench Press\n2. Deadlifts\n3. Overhead Press\4. Barbell Squats\n5. Pull Ups/Lat Pull Downs\nDay 2. Cardio (Biking/Running/Swimming)\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            case 2:// WORK TIME 3-5 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 2-3 Sets - 8-12 Repititions!)\nDay 1. Upper Body\n1. Bench Press\n2. Shoulder Press\n3. Planks\nDay 2. Cardio and Core\n1. 45 Minute Cardio (Running/Cycling/Swimming)\n2. Russian Twists\n3. Jumping Jacks\nDay 3. Lower Body\n1. Squats\n2. Lunges\n3. Calf Raises\nDay 4. Rest\nDay 5. Cardio\nMeal Plan\nMeal 1. Greek Yogurt with Berries and Nuts\nIngredients\n1. 1 Cup Greek Yogurt\n2. 1/2 Cup Mixed Berries\n3. 1tbsp Chopped walnuts\nMeal 2. Turkey and Veggie Stir Fry\nIngredients\n1. 4 oz Lean Ground Turkey\2. Mixed Sir Fry veggies (bell peppers, broccoli, peas\n3. 1/2 Brown rice\nMeal 3. Salmon and Broccoli\nIngredients\n1. 5 oz Salmon fillet\n2. Seasoned Herbs\n3. Steamed Broccoli\n4. 1/2 cup Brown Rice";
                        break;
                    case 2:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 2-3 Sets - 8-12 Repititions!)\nDay 1. Upper Body\n1. Bench Press\n2. Shoulder Press\n3. Planks\nDay 2. Cardio and Core\n1. 45 Minute Cardio (Running/Cycling/Swimming)\n2. Russian Twists\n3. Jumping Jacks\nDay 3. Lower Body\n1. Squats\n2. Lunges\n3. Calf Raises\nDay 4. Rest\nDay 5. Cardio\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1 Upper Body\n1. Chest press\n2. Push Ups\n3. Overhead Press\n4. Tricep Dips\n6. Plank\nDay 2 Cardio\n Day 3. Back\n1. Pull Ups/Lat Pulldown\n2. Chin Ups\n3. Machine Row\n4. Rear Delt Fly\n5. One arm Pull Down\nDay 4. Cardio\nDay. 5 Rest\nDay 6. Legs\n1. Squats\n2. Deadlifts\n3. Leg Curls\n4. Leg Extensions\n5. Lunges\nMeal Plan\nMeal 1. Greek Yogurt with Berries and Nuts\nIngredients\n1. 1 Cup Greek Yogurt\n2. 1/2 Cup Mixed Berries\n3. 1tbsp Chopped walnuts\nMeal 2. Turkey and Veggie Stir Fry\nIngredients\n1. 4 oz Lean Ground Turkey\2. Mixed Sir Fry veggies (bell peppers, broccoli, peas\n3. 1/2 Brown rice\nMeal 3. Salmon and Broccoli\nIngredients\n1. 5 oz Salmon fillet\n2. Seasoned Herbs\n3. Steamed Broccoli\n4. 1/2 cup Brown Rice";
                        break;
                    case 2:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1 Upper Body\n1. Chest press\n2. Push Ups\n3. Overhead Press\n4. Tricep Dips\n6. Plank\nDay 2 Cardio\n Day 3. Back\n1. Pull Ups/Lat Pulldown\n2. Chin Ups\n3. Machine Row\n4. Rear Delt Fly\n5. One arm Pull Down\nDay 4. Cardio\nDay. 5 Rest\nDay 6. Legs\n1. Squats\n2. Deadlifts\n3. Leg Curls\n4. Leg Extensions\n5. Lunges\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Gym Goer(1 + Years Experience!4 - 5 Sets - 8 - 15 Repititions!)\nDay 1 Full Body\n1.Squats\n2.Bench Press\n3.Bent Over Rows\n4.Planks\nDay 2. Cardio\nDay 3 Rest\nDay 4. Upper Body\n1.Bench Press\n2.Pull Ups / Lat Pulldown\n3.Overhead Press\n4.Bicep Curls\n5.Tricep Dips\nDay 5. Cardio\nMeal Plan\nMeal 1. Greek Yogurt with Berries and Nuts\nIngredients\n1. 1 Cup Greek Yogurt\n2. 1 / 2 Cup Mixed Berries\n3. 1tbsp Chopped walnuts\nMeal 2. Turkey and Veggie Stir Fry\nIngredients\n1. 4 oz Lean Ground Turkey\2. Mixed Sir Fry veggies(bell peppers, broccoli, peas\n3. 1 / 2 Brown rice\nMeal 3. Salmon and Broccoli\nIngredients\n1. 5 oz Salmon fillet\n2.Seasoned Herbs\n3.Steamed Broccoli\n4. 1 / 2 cup Brown Rice";
                        break;
                    case 2:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nDay 1 Full Body\n1. Squats\n2. Bench Press\n3. Bent Over Rows\n4. Planks\nDay 2. Cardio\nDay 3 Rest\nDay 4. Upper Body\n1. Bench Press\n2. Pull Ups/Lat Pulldown\n3. Overhead Press\n4. Bicep Curls\n5. Tricep Dips\nDay 5. Cardio\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            case 3:// WORK TIME 6-7 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 2-3 Sets - 8-12 Repititions!)\nDay 1. Full Body\n1. Push Ups\n2. Planks\n3. Push Ups\nDay 2. Cardio\nDay 3 Rest\nDay 4. Full Body\n1. Body Weight Lunges\n2. Assited Pull Ups\n3. Plank\nDay 5. Cardio\nDay 6.Rest\nDay 7. Legs\n1. Lunges\n2. Squats\n3. Jumping Squats\nMeal Plan\nMeal 1. Scrambled Eggs with Avocado Toast\nIngredients\n1. 2 Eggs\n2. 1/2 Avocado\n3. 2 Slices Whole-Grain Bread\nMeal 2 Grilled Chicken Salad\nIngredients\n1. 4 oz Grilled Chicken Breast\n2. Mixed Greens\n3. 1/2 Cucumber\n4. 1/2 Bell Peppers\n5. Tomatoes\nMeal 3 Baked Salmon\n1. 4 oz Baked salmon\n2. 1/2 Cup Brown Rice\n3. Chosen Vegetabless";
                        break;
                    case 2:
                        cout << "Newbie Gym Plan (0-3 Months Experience! 2-3 Sets - 8-12 Repititions!)\nDay 1. Full Body\n1. Push Ups\n2. Planks\n3. Push Ups\nDay 2. Cardio\nDay 3 Rest\nDay 4. Full Body\n1. Body Weight Lunges\n2. Assited Pull Ups\n3. Plank\nDay 5. Cardio\nDay 6.Rest\nDay 7. Legs\n1. Lunges\n2. Squats\n3. Jumping Squats\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1. Upper Body\n1. Push Ups\n2. Chest Dips\n3. Pull Ups/Lat Pull Downs\n4. Chin Ups\n5. Plank\nDay 2. Lower Body\n1. Barbell Squats\n2. Jumping Squats\n3. Wall Sit\n4. Lunges\n5. Leg Extensions\nDay 3. Cardio\nDay 4. Rest Day\nDay 5. Upper Body\n1. Lat Pull Downs\n2. Single Hand Dumbbell Rows\n3. Single Hand Cable Pull Overs\n4. Bicep Curls\nDay 5. Tricep Push Downns\nDay 6. Lower Body\n1. Squats\n2. Leg curls\n3. Leg Press\n4. Leg Extension\n5. Calf Raises\nDay 7. Cardio\nMeal 1. Scrambled Eggs with Avocado Toast\nIngredients\n1. 2 Eggs\n2. 1/2 Avocado\n3. 2 Slices Whole-Grain Bread\nMeal 2 Grilled Chicken Salad\nIngredients\n1. 4 oz Grilled Chicken Breast\n2. Mixed Greens\n3. 1/2 Cucumber\n4. 1/2 Bell Peppers\n5. Tomatoes\nMeal 3 Baked Salmon\n1. 4 oz Baked salmon\n2. 1/2 Cup Brown Rice\n3. Chosen Vegetables";
                    case 2:
                        cout << "With Experience Gym Goer (5-8 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1. Upper Body\n1. Push Ups\n2. Chest Dips\n3. Pull Ups/Lat Pull Downs\n4. Chin Ups\n5. Plank\nDay 2. Lower Body\n1. Barbell Squats\n2. Jumping Squats\n3. Wall Sit\n4. Lunges\n5. Leg Extensions\nDay 3. Cardio\nDay 4. Rest Day\nDay 5. Upper Body\n1. Lat Pull Downs\n2. Single Hand Dumbbell Rows\n3. Single Hand Cable Pull Overs\n4. Bicep Curls\nDay 5. Tricep Push Downns\nDay 6. Lower Body\n1. Squats\n2. Leg curls\n3. Leg Press\n4. Leg Extension\n5. Calf Raises\nDay 7. Cardio\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Gym Goer(1 + Years Experience!4 - 5 Sets - 8 - 15 Repititions!)\nDay 1. High - Intensity Interval Training(HIIT)\n1.Baldur Burpees\n2.Mountain Climbers\nJump Squats\nDay 2. Rest\nDay 3. Whole Body\n1.Bench Press\n2.Chest Flys\n3.Weighted Pull Ups / Lat Pull Down\n4.Deadlifts\n5.Squats\nDay 4 Cardio\nDay 5. Upper Body\n1.Bench Press\n2.Cable Rows\n3.Barbell Rows\n4.Chest Supported Rows\n5.Facepulls\nDay 6. Cardio\nDay 7. Rest\nMeal 1. Scrambled Eggs with Avocado Toast\nIngredients\n1. 2 Eggs\n2. 1 / 2 Avocado\n3. 2 Slices Whole - Grain Bread\nMeal 2 Grilled Chicken Salad\nIngredients\n1. 4 oz Grilled Chicken Breast\n2.Mixed Greens\n3. 1 / 2 Cucumber\n4. 1 / 2 Bell Peppers\n5.Tomatoes\nMeal 3 Baked Salmon\n1. 4 oz Baked salmon\n2. 1 / 2 Cup Brown Rice\n3.Chosen Vegetables";
                        break;
                    case 2:
                        cout << "Experienced Gym Goer (1+ Years Experience! 4-5 Sets - 8-15 Repititions!)\nDay 1. High-Intensity Interval Training (HIIT)\n1. Baldur Burpees\n2. Mountain Climbers\nJump Squats\nDay 2. Rest\nDay 3. Whole Body\n1. Bench Press\n2. Chest Flys\n3. Weighted Pull Ups/Lat Pull Down\n4. Deadlifts\n5. Squats\nDay 4 Cardio\nDay 5. Upper Body\n1. Bench Press\n2. Cable Rows\n3. Barbell Rows\n4. Chest Supported Rows\n5. Facepulls\nDay 6. Cardio\nDay 7. Rest\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        case 2://HOME
            switch (wrktime)
            {
            case 1://WORK TIME 1-2 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Home Plan (0-3 Months! Experience 3-4 Sets - 8-12 Repititions!)\nWorkout A\n1. Body Weight Squats\n2. Pull Ups\n3. Mountain Climbers\nWorkout B\n1. Push Ups\n2. Dips\n3. Chin Ups\nMeal Plan\nMeal 1. Protein Shake\n Ingreadients\nBanana, 1 Medium Oats, 60Grams Whey Protein, 30g Peanut Butter.\nMeal 2 Lentils\n Ingreadients\n100G Red Lentils, 2 Tomatoes, Chosen Spices (eg. Paprika, Salt, Pepper), 60g Green Beans.\nMeal 3 Chicken\nIngredients\n150g Chicken Breasts, Chosen Spices, 200g White Potato, 30g Broccoli, 30g Carrots\nMeal 4 Eggs\nIngreadients\n3-4 Large Eggs, 200g White Rice, 50g Cabbage, Chosen Spices";
                        break;
                    case 2:
                        cout << "Newbie Home Plan (0-3 Months! Experience 3-4 Sets - 8-12 Repititions!)\nWorkout A\n1. Body Weight Squats\n2. Pull Ups\n3. Mountain Climbers\nWorkout B\n1. Push Ups\n2. Dips\n3. Chin Ups\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nWorkout A\n1. 150 Normal Squats\n2. 200 Pushups\n3. 100 Crunches\n4. 50 Pullups (Assited Or Negatives)\nWorkout B.\nCardio (Sports, Running, Walking)\nMeal Plan\nMeal 1. Protein Shake\n Ingreadients\nBanana, 1 Medium Oats, 60Grams Whey Protein, 30g Peanut Butter.\nMeal 2 Lentils\n Ingreadients\n100G Red Lentils, 2 Tomatoes, Chosen Spices (eg. Paprika, Salt, Pepper), 60g Green Beans.\nMeal 3 Chicken\nIngredients\n150g Chicken Breasts, Chosen Spices, 200g White Potato, 30g Broccoli, 30g Carrots\nMeal 4 Eggs\nIngreadients\n3-4 Large Eggs, 200g White Rice, 50g Cabbage, Chosen Spices";
                        break;
                    case 2:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nWorkout A\n1. 150 Normal Squats\n2. 200 Pushups\n3. 100 Crunches\n4. 50 Pullups (Assited Or Negatives)\nWorkout B.\nCardio (Sports, Running, Walking)\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Home Workout (1+ Years Experience! Whole Day Workouts)\nWorkout A.\n1. 100 Pike Pushups\n2. 100 Decline Push Ups\n3. 200 Glute Bridge March\n3. Tricep Dips\n4. 50 Chin Ups\n5. 50 Lying Leg Raises\nWorkout B.\nCardio (Sports, RUnning, Walking)\nMeal Plan\nMeal 1. Protein Shake\n Ingreadients\nBanana, 1 Medium Oats, 60Grams Whey Protein, 30g Peanut Butter.\nMeal 2 Lentils\n Ingreadients\n100G Red Lentils, 2 Tomatoes, Chosen Spices (eg. Paprika, Salt, Pepper), 60g Green Beans.\nMeal 3 Chicken\nIngredients\n150g Chicken Breasts, Chosen Spices, 200g White Potato, 30g Broccoli, 30g Carrots\nMeal 4 Eggs\nIngreadients\n3-4 Large Eggs, 200g White Rice, 50g Cabbage, Chosen Spices";
                        break;
                    case 2:
                        cout << "Experienced Home Workout(1 + Years Experience!Whole Day Workouts)\nWorkout A.\n1. 100 Pike Pushups\n2. 100 Decline Push Ups\n3. 200 Glute Bridge March\n3.Tricep Dips\n4. 50 Chin Ups\n5. 50 Lying Leg Raises\nWorkout B.\nCardio(Sports, RUnning, Walking)\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            case 2:// WORK TIME 3-5 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1\nAir Squats\n2. Nordic Hamstring Curls\n3. Jumping Lunges\n4. Jumping Jacks\n5. Mountain Climbers\nDay 2\n1. Push\n2. Pike Push Ups\n3. Wide Push Ups\n.4 Wall Handstands\n5. Tricep Dips\nDay 3\n1. Squat Jumps\n2. Reverse Lunges\n3. GLute Bridge March\n.4 Jumping Lunges\5. Tuck Jumps\nMeal Plan\nMeal 1. Tuna Omelet\nIngreadients\n1.2 Eggs\n2. 1/4 Cup of Canned Tuna\n3. Onions\n4. Chosen Seasoning\nMeal 2. Chicken Tinola\nIngreadients\n1. 4 Cloves of Garlic\n2. 1 whole Onion\n3. 1 Small Ginger\n4. 1/2 Kilo Chicken\n5. 4 Cups of Water\n6. 2 Tablespoons of Fishsauce\n7. 1 Cup Malunggay Leaves\n8. 1 Green Papaya\n9. Salt and Pepper\nMeal 3. Beef and Brocolli Stir Fry\nIngredients\n1. 1/4 kilo beef sirloin, sliced thinly\n2. 2 tablespoons soy sauce\n3. 1 tablespoon vinegar\n4. 1 teaspoon sugar\n5. 4 cloves garlic, minced\n6. 1/4 cup of water\n6. 2 tablespoons oyster sauce\n7. 2 Cups of Brocolli\n8. Preffered Seasonings";
                        break;
                    case 2:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1\nAir Squats\n2. Nordic Hamstring Curls\n3. Jumping Lunges\n4. Jumping Jacks\n5. Mountain Climbers\nDay 2\n1. Push\n2. Pike Push Ups\n3. Wide Push Ups\n.4 Wall Handstands\n5. Tricep Dips\nDay 3\n1. Squat Jumps\n2. Reverse Lunges\n3. GLute Bridge March\n.4 Jumping Lunges\5. Tuck Jumps\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nDay 1\n1.Kettlebell Goblet Squats\n2. Sumo Squats\n3. Lunges\n4. Jumping Jacks\5.Laying Leg Raises\nDay 2 Cardio\nDay 3.\n1. Mountain Climbers\n2. Plank\n3. Alternating High Knees\n4. Superman Holds\n5. Jumping Jacks\nDay 4\n1. Pull Ups (Assisted or Negatives)\n2. Push Ups\n3. Lunges\n4. Calf Raises\n5. Dips\nDay 5\n1. Cardio\nMeal Plan\nMeal 1. Tuna Omelet\nIngreadients\n1.2 Eggs\n2. 1/4 Cup of Canned Tuna\n3. Onions\n4. Chosen Seasoning\nMeal 2. Chicken Tinola\nIngreadients\n1. 4 Cloves of Garlic\n2. 1 whole Onion\n3. 1 Small Ginger\n4. 1/2 Kilo Chicken\n5. 4 Cups of Water\n6. 2 Tablespoons of Fishsauce\n7. 1 Cup Malunggay Leaves\n8. 1 Green Papaya\n9. Salt and Pepper\nMeal 3. Beef and Brocolli Stir Fry\nIngredients\n1. 1/4 kilo beef sirloin, sliced thinly\n2. 2 tablespoons soy sauce\n3. 1 tablespoon vinegar\n4. 1 teaspoon sugar\n5. 4 cloves garlic, minced\n6. 1/4 cup of water\n6. 2 tablespoons oyster sauce\n7. 2 Cups of Brocolli\n8. Preffered Seasonings";
                        break;
                    case 2:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nDay 1\n1.Kettlebell Goblet Squats\n2. Sumo Squats\n3. Lunges\n4. Jumping Jacks\5.Laying Leg Raises\nDay 2 Cardio\nDay 3.\n1. Mountain Climbers\n2. Plank\n3. Alternating High Knees\n4. Superman Holds\n5. Jumping Jacks\nDay 4\n1. Pull Ups (Assisted or Negatives)\n2. Push Ups\n3. Lunges\n4. Calf Raises\n5. Dips\nDay 5\n1. Cardio\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Home Workout(1 + Years Experience!Whole Day Workouts)\nDay 1\n1.Diamond Push Ups\n2.Pike Push Ups\n3.Jump Squats\n4.Jump Lunges\n5.Single - Leg Calf Raises\nDay 2\n1.Archer Pull - Ups\n2.L - Sit Pull Ups\n3.Hanging Leg Raises\n4.Single leg Deadlifts\n5.Pistol Squats\nDay 3\n1.Handstand Push Ups\n2.Plyometric Push - Ups\n3.Burpee Pull Ups\n4.Jumping Lunges\n5.Box Jumps\n4.Rest / Light Cardio\nDay 5\n1.One Arm Push Ups\n2.Handstand Pushups\n3.Jump Squats\n4.Jump Lunges\n5.Single Leg Calf Raises\nMeal Plan\nMeal 1. Tuna Omelet\nIngreadients\n1.2 Eggs\n2. 1 / 4 Cup of Canned Tuna\n3.Onions\n4.Chosen Seasoning\nMeal 2. Chicken Tinola\nIngreadients\n1. 4 Cloves of Garlic\n2. 1 whole Onion\n3. 1 Small Ginger\n4. 1 / 2 Kilo Chicken\n5. 4 Cups of Water\n6. 2 Tablespoons of Fishsauce\n7. 1 Cup Malunggay Leaves\n8. 1 Green Papaya\n9.Salt and Pepper\nMeal 3. Beef and Brocolli Stir Fry\nIngredients\n1. 1 / 4 kilo beef sirloin, sliced thinly\n2. 2 tablespoons soy sauce\n3. 1 tablespoon vinegar\n4. 1 teaspoon sugar\n5. 4 cloves garlic, minced\n6. 1 / 4 cup of water\n6. 2 tablespoons oyster sauce\n7. 2 Cups of Brocolli\n8.Preffered Seasonings";
                        break;
                    case 2:
                        cout << "Experienced Home Workout (1+ Years Experience! Whole Day Workouts)\nDay 1\n1. Diamond Push Ups\n2. Pike Push Ups\n3. Jump Squats\n4. Jump Lunges\n5. Single-Leg Calf Raises\nDay 2\n1. Archer Pull-Ups\n2. L-Sit Pull Ups\n3. Hanging Leg Raises\n4. Single leg Deadlifts\n5. Pistol Squats\nDay 3\n1. Handstand Push Ups\n2. Plyometric Push-Ups\n3. Burpee Pull Ups\n4. Jumping Lunges\n5. Box Jumps\n4. Rest/Light Cardio\nDay 5\n1. One Arm Push Ups\n2. Handstand Pushups\n3. Jump Squats\n4. Jump Lunges\n5. Single Leg Calf Raises\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            case 3:// WORK TIME 6-7 DAYS
                switch (exp)
                {
                case 1:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nDay 2 Rest\nDay 3\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nDay 4 Cardio\nDay 5\n1. Squats\n2. Push-Ups\n3. Lunges\n4. Plank\n5. Jumping\nDay 6 Rest\nDay 7\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nMealplan\nMeal 1. Oatmeal\nIngreadients\n1. 1 Pack of Oatmeal\n2. 1 Banana Sliced\n3. 1/2 Cup of Blue Berries\nMeal 2. Chicken Adobo\nIngredients\n1. 1lb Chicken Thighs\n2. 1/2 Cupy Soy Sauce\n3. 1/4 Cup Vinegar\n4. Cloves Garlic\n5. 2 Bay Leaves\n6. 1 Tsp Peppercorns\nMeal 3. Ginisang Munggo\nIngredients\n1. 1 Cup Mung Beans\n2. 1/2lb Pork Belly\n3. 4 Cloves Garlic\n4. 1 Onion\n5. 2 Tomatoes\n6. Salt And Pepper";
                        break;
                    case 2:
                        cout << "Newbie Home Plan (0-3 Months Experience! 3-4 Sets - 8-12 Repititions!)\nDay 1\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nDay 2 Rest\nDay 3\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nDay 4 Cardio\nDay 5\n1. Squats\n2. Push-Ups\n3. Lunges\n4. Plank\n5. Jumping\nDay 6 Rest\nDay 7\n1. Squats\n2. Push Ups\n3. Lunges\n4. Plank\n5. Jumping Jacks\nNo Meal Plan";
                        break;
                    }
                    break;
                case 2:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nDay 1 Lower Body\n1. Stationary Lunges\n2. Squats\n3. Assited Pistol Squats\n4. Hamstring Bridges\n5. Single Leg Romanian Deadlift(Body Weight)\nDay 2. Active Rest Day (Cardio and Rest)\nDay 3. Core\n1. 1 Minute Plank\n2. Leg Raises\3. Bird Dog\n4. Bridge Hold\n5. 30 Sec Side Plank Both sides\nDay 4 Rest\nDay 5 Upper Body\n1. Military Push Up\n2. Wide Push Up\n3. Diamond Push Up\n4. Pike Push Ups\n5. Dips\nDay 6 Active Rest (Cardio and Rest)\nDay 7. Upper Boddy\n1. Chin Up\n2. Pull Up\n3. Neutral Grip Pull Up\n4. Assisted Pull Ups\n5. Bodyweight Rows\nMeal 1. Oatmeal\nIngreadients\n1. 1 Pack of Oatmeal\n2. 1 Banana Sliced\n3. 1/2 Cup of Blue Berries\nMeal 2. Chicken Adobo\nIngredients\n1. 1lb Chicken Thighs\n2. 1/2 Cupy Soy Sauce\n3. 1/4 Cup Vinegar\n4. Cloves Garlic\n5. 2 Bay Leaves\n6. 1 Tsp Peppercorns\nMeal 3. Ginisang Munggo\nIngredients\n1. 1 Cup Mung Beans\n2. 1/2lb Pork Belly\n3. 4 Cloves Garlic\n4. 1 Onion\n5. 2 Tomatoes\n6. Salt And Pepper";
                        break;
                    case 2:
                        cout << "With Experience Home Workout (5-8 Months Experience! Whole Day Workouts)\nDay 1 Lower Body\n1. Stationary Lunges\n2. Squats\n3. Assited Pistol Squats\n4. Hamstring Bridges\n5. Single Leg Romanian Deadlift(Body Weight)\nDay 2. Active Rest Day (Cardio and Rest)\nDay 3. Core\n1. 1 Minute Plank\n2. Leg Raises\3. Bird Dog\n4. Bridge Hold\n5. 30 Sec Side Plank Both sides\nDay 4 Rest\nDay 5 Upper Body\n1. Military Push Up\n2. Wide Push Up\n3. Diamond Push Up\n4. Pike Push Ups\n5. Dips\nDay 6 Active Rest (Cardio and Rest)\nDay 7. Upper Boddy\n1. Chin Up\n2. Pull Up\n3. Neutral Grip Pull Up\n4. Assisted Pull Ups\n5. Bodyweight Rows\nNo Meal Plan";
                        break;
                    }
                    break;
                case 3:
                    switch (mealplan)
                    {
                    case 1:
                        cout << "Experienced Home Workout (1+ Years Experience! Whole Day Workouts)\nDay 1 Shoulders\n1. Pike Push Ups\n2. HandStand Push Ups (Wall Assisted)\n3. Dive Shoulder Push Ups\n4. Diamond Push Ups\n5. Shoulder Taps\nDay 2 Chest\n1. Normal Push Ups\n2. Wide Push Ups\n3. Diamond Push Ups\n4. Chest Dips\n5. Decline Push Ups\n3. Active Rest (Cardio and Rest)\nDay 4 Back\n1. Supermans\n2. Body Weight Rows\n3. Pull Ups\n4. Muscle Ups\n5. Hollow Hold\nDay 5 Core\n1. Plank\n2. Bicycle Crunches\n3. Russian Twists\n4. Leg Raises\n5. Hollow Hold\nDay 6 Upper Body\n1. Normal Push Ups\n2. Diamond Push Ups\n3. Dips\n4. Chin Ups\n5. Close Grip Chin Ups\nDay 7 Legs\n1. Squats\n2. Lunges\n3. Bulgarian Split Squats (weighted or body weight)\n4. Calf Raises\n5. Wall Sits\n6. Dragon Squats\nMeal Plan\nMeal 1. Oatmeal\nIngreadients\n1. 1 Pack of Oatmeal\n2. 1 Banana Sliced\n3. 1/2 Cup of Blue Berries\nMeal 2. Chicken Adobo\nIngredients\n1. 1lb Chicken Thighs\n2. 1/2 Cupy Soy Sauce\n3. 1/4 Cup Vinegar\n4. Cloves Garlic\n5. 2 Bay Leaves\n6. 1 Tsp Peppercorns\nMeal 3. Ginisang Munggo\nIngredients\n1. 1 Cup Mung Beans\n2. 1/2lb Pork Belly\n3. 4 Cloves Garlic\n4. 1 Onion\n5. 2 Tomatoes\n6. Salt And Pepper";
                        break;
                    case 2:
                        cout <<  "Experienced Home Workout (1+ Years Experience! Whole Day Workouts)\nDay 1 Shoulders\n1. Pike Push Ups\n2. HandStand Push Ups (Wall Assisted)\n3. Dive Shoulder Push Ups\n4. Diamond Push Ups\n5. Shoulder Taps\nDay 2 Chest\n1. Normal Push Ups\n2. Wide Push Ups\n3. Diamond Push Ups\n4. Chest Dips\n5. Decline Push Ups\n3. Active Rest (Cardio and Rest)\nDay 4 Back\n1. Supermans\n2. Body Weight Rows\n3. Pull Ups\n4. Muscle Ups\n5. Hollow Hold\nDay 5 Core\n1. Plank\n2. Bicycle Crunches\n3. Russian Twists\n4. Leg Raises\n5. Hollow Hold\nDay 6 Upper Body\n1. Normal Push Ups\n2. Diamond Push Ups\n3. Dips\n4. Chin Ups\n5. Close Grip Chin Ups\nDay 7 Legs\n1. Squats\n2. Lunges\n3. Bulgarian Split Squats (weighted or body weight)\n4. Calf Raises\n5. Wall Sits\n6. Dragon Squats\nNo Meal Plan";
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
    cout << "\n=====================================================================================";

    return 0;
}