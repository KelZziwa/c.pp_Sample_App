/*
    PROJECT TITLE:          TRIAL QUESTIONS
    AUTHOR:                 KELVIN STEPHEN ZZIWA.
*/


#include <iostream>

using namespace std;

int main()
{
    cout << "==============================================" << endl;
    cout << "CARBON CALCULATOR PROGRAM TO TEST AND REDUCE GREEN\nGREEN HOUSE GASES (GHG) IN THE CITY BY 15%" << endl;

    // Declaring and Initializing arrays (percentages for major contributors)
    int percentage [8] {19, 17, 15, 14, 10, 10, 10, 5};


    cout << "The following contribute to Green House Gases" << endl;
    cout << "=====================++=======================\n" << endl;
    cout << "=====================++=======================" << endl;
    cout << "Industry           : " << percentage[0] << "%" << endl;
    cout << "De-forestation     : " << percentage[1] << "%" << endl;
    cout << "Power & Energy     : " << percentage[2] << "%" << endl;
    cout << "Agriculture        : " << percentage[3] << "%" << endl;
    cout << "Transportation     : " << percentage[4] << "%" << endl;
    cout << "Waste              : " << percentage[5] << "%" << endl;
    cout << "Water Management   : " << percentage[6] << "%" << endl;
    cout << "Buildings          : " << percentage[7] << "%" << endl;

    // Sum of percentages
    int total_percentage = ( percentage[0] + percentage[1] + percentage[2] + percentage[3] +
                             percentage[4] + percentage[5] + percentage[6] + percentage[7] );
    cout << "=====================++=======================\n" << endl;
    cout << "Total Percentage   :" << total_percentage << endl;

    /*  This prints out each time the percentage is not yet reduced
        to 85%; therefore the iteration continues.                  */
    LOOP:cout << "\nPlease choose a variable to reduce: (and press enter)" << endl;
    cout << "=====================++=======================" << endl;
    cout << "1. Industry           : " << percentage[0] << "%" << endl;
    cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
    cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
    cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
    cout << "5. Transportation     : " << percentage[4] << "%" << endl;
    cout << "6. Waste              : " << percentage[5] << "%" << endl;
    cout << "7. Water Management   : " << percentage[6] << "%" << endl;
    cout << "8. Buildings          : " << percentage[7] << "%" << endl;
    cout << "____________";
    goto STEP_1;

    /*  This prints out each time the percentage is below 85%;   */
    BELOW:cout << "\nPlease choose a variable to add a negative to: (and press enter)" << endl;
    cout << "=====================++=======================" << endl;
    cout << "1. Industry           : " << percentage[0] << "%" << endl;
    cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
    cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
    cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
    cout << "5. Transportation     : " << percentage[4] << "%" << endl;
    cout << "6. Waste              : " << percentage[5] << "%" << endl;
    cout << "7. Water Management   : " << percentage[6] << "%" << endl;
    cout << "8. Buildings          : " << percentage[7] << "%" << endl;
    cout << "____________";

    /*  This stores integers 1 - 8, representing the major variables that
        contribute to GHG in the city                                       */
    STEP_1:int variable {0};
    cin >> variable;

    do {
        switch(variable){
        case 1:
            cout << "You have selected Industry, enter percentage to reduce: (and press enter)";
            int industry_reduction;
            cin >> industry_reduction;
            total_percentage = total_percentage - industry_reduction;
            percentage[0] = percentage[0] - industry_reduction;
            cout << "\nPercentages after reduction:" << endl;
            cout << "=====================++=======================" << endl;
            cout << "1. Industry           : " << percentage[0] << "%" << endl;
            cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
            cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
            cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
            cout << "5. Transportation     : " << percentage[4] << "%" << endl;
            cout << "6. Waste              : " << percentage[5] << "%" << endl;
            cout << "7. Water Management   : " << percentage[6] << "%" << endl;
            cout << "8. Buildings          : " << percentage[7] << "%" << endl;
            cout << "Total Percentage      : " << total_percentage << "% is still greater than Desired Percentage        : 85% by " << total_percentage - 85 << "%" << endl;
            if(total_percentage > 85)
                goto LOOP;
            break;
        case 2:
            cout << "You have selected De-forestation, enter percentage to reduce: (and press enter)";
            int de_forestation_reduction;
            cin >> de_forestation_reduction;
            total_percentage = total_percentage - de_forestation_reduction;
            percentage[1] = percentage[1] - de_forestation_reduction;
            cout << "\nPercentages after reduction:" << endl;
            cout << "=====================++=======================" << endl;
            cout << "1. Industry           : " << percentage[0] << "%" << endl;
            cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
            cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
            cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
            cout << "5. Transportation     : " << percentage[4] << "%" << endl;
            cout << "6. Waste              : " << percentage[5] << "%" << endl;
            cout << "7. Water Management   : " << percentage[6] << "%" << endl;
            cout << "8. Buildings          : " << percentage[7] << "%" << endl;
            cout << "Total Percentage      : " << total_percentage << "% is still greater than Desired Percentage        : 85% by " << total_percentage - 85 << "%" << endl;
            if(total_percentage > 85)
                goto LOOP;
            break;
        case 3:
            cout << "You have selected Power & Energy, enter percentage to reduce: (and press enter)";
            int power_energy_reduction;
            cin >> power_energy_reduction;
            total_percentage = total_percentage - power_energy_reduction;
            percentage[2] = percentage[2] - power_energy_reduction;
            cout << "\nPercentages after reduction:" << endl;
            cout << "=====================++=======================" << endl;
            cout << "1. Industry           : " << percentage[0] << "%" << endl;
            cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
            cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
            cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
            cout << "5. Transportation     : " << percentage[4] << "%" << endl;
            cout << "6. Waste              : " << percentage[5] << "%" << endl;
            cout << "7. Water Management   : " << percentage[6] << "%" << endl;
            cout << "8. Buildings          : " << percentage[7] << "%" << endl;
            cout << "Total Percentage      : " << total_percentage << "% is still greater than Desired Percentage        : 85% by " << total_percentage - 85 << "%" << endl;
            if(total_percentage > 85)
                goto LOOP;
            break;
        case 4:
            cout << "You have selected Agriculture, enter percentage to reduce: (and press enter)";
            int agriculture_reduction;
            cin >> agriculture_reduction;
            total_percentage = total_percentage - agriculture_reduction;
            percentage[3] = percentage[3] - agriculture_reduction;
            cout << "\nPercentages after reduction:" << endl;
            cout << "=====================++=======================" << endl;
            cout << "1. Industry           : " << percentage[0] << "%" << endl;
            cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
            cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
            cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
            cout << "5. Transportation     : " << percentage[4] << "%" << endl;
            cout << "6. Waste              : " << percentage[5] << "%" << endl;
            cout << "7. Water Management   : " << percentage[6] << "%" << endl;
            cout << "8. Buildings          : " << percentage[7] << "%" << endl;
            cout << "Total Percentage      : " << total_percentage << "% is still greater than Desired Percentage        : 85%  by " << total_percentage - 85 << "%" << endl;
            if(total_percentage > 85)
                goto LOOP;
            break;
        case 5:
            cout << "You have selected Transportation, enter percentage to reduce: (and press enter)";
            int transportation_reduction;
            cin >> transportation_reduction;
            total_percentage = total_percentage - transportation_reduction;
            percentage[4] = percentage[4] - transportation_reduction;
            cout << "\nPercentages after reduction:" << endl;
            cout << "=====================++=======================" << endl;
            cout << "1. Industry           : " << percentage[0] << "%" << endl;
            cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
            cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
            cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
            cout << "5. Transportation     : " << percentage[4] << "%" << endl;
            cout << "6. Waste              : " << percentage[5] << "%" << endl;
            cout << "7. Water Management   : " << percentage[6] << "%" << endl;
            cout << "8. Buildings          : " << percentage[7] << "%" << endl;
            cout << "Total Percentage      : " << total_percentage << "% is still greater than Desired Percentage        : 85% by " << total_percentage - 85 << "%" << endl;
            if(total_percentage > 85)
                goto LOOP;
            break;
        case 6:
            cout << "You have selected Waste, enter percentage to reduce: (and press enter)";
            int waste_reduction;
            cin >> waste_reduction;
            total_percentage = total_percentage - waste_reduction;
            percentage[5] = percentage[5] - waste_reduction;
            cout << "\nPercentages after reduction:" << endl;
            cout << "=====================++=======================" << endl;
            cout << "1. Industry           : " << percentage[0] << "%" << endl;
            cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
            cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
            cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
            cout << "5. Transportation     : " << percentage[4] << "%" << endl;
            cout << "6. Waste              : " << percentage[5] << "%" << endl;
            cout << "7. Water Management   : " << percentage[6] << "%" << endl;
            cout << "8. Buildings          : " << percentage[7] << "%" << endl;
            cout << "Total Percentage      : " << total_percentage << "% is still greater than Desired Percentage        : 85% by " << total_percentage - 85 << "%" << endl;
            if(total_percentage > 85)
                goto LOOP;
            break;
        case 7:
            cout << "You have selected Water Management, enter percentage to reduce: (and press enter)";
            int water_management_reduction;
            cin >> water_management_reduction;
            total_percentage = total_percentage - water_management_reduction;
            percentage[6] = percentage[6] - water_management_reduction;
            cout << "\nPercentages after reduction:" << endl;
            cout << "=====================++=======================" << endl;
            cout << "1. Industry           : " << percentage[0] << "%" << endl;
            cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
            cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
            cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
            cout << "5. Transportation     : " << percentage[4] << "%" << endl;
            cout << "6. Waste              : " << percentage[5] << "%" << endl;
            cout << "7. Water Management   : " << percentage[6] << "%" << endl;
            cout << "8. Buildings          : " << percentage[7] << "%" << endl;
            cout << "Total Percentage      : " << total_percentage << "% is still greater than Desired Percentage        : 85% by " << total_percentage - 85 << "%" << endl;
            if(total_percentage > 85)
                goto LOOP;
            break;
        case 8:
            cout << "You have selected Buildings, enter percentage to reduce: (and press enter)";
            int buildings_reduction;
            cin >> buildings_reduction;
            total_percentage = total_percentage - buildings_reduction;
            percentage[7] = percentage[7] - buildings_reduction;
            cout << "\nPercentages after reduction:" << endl;
            cout << "=====================++=======================" << endl;
            cout << "1. Industry           : " << percentage[0] << "%" << endl;
            cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
            cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
            cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
            cout << "5. Transportation     : " << percentage[4] << "%" << endl;
            cout << "6. Waste              : " << percentage[5] << "%" << endl;
            cout << "7. Water Management   : " << percentage[6] << "%" << endl;
            cout << "8. Buildings          : " << percentage[7] << "%" << endl;
            cout << "Total Percentage      : " << total_percentage << "% is still greater than Desired Percentage        : 85% by " << total_percentage - 85 << "%" << endl;
            if(total_percentage > 85)
                goto LOOP;
            break;
        default:
            cout << "Invalid Input, try again: " << endl;

        }

    }

    /*  Once the percentage of Green House Gases drops to 85% or drops by
        15%, then the while condition takes effect and the loop ends       */
    while(total_percentage > 85);
    {
        if(total_percentage == 85)
        {
            cout << "\nThe desired percentages are:" << endl;
            cout << "=====================++=======================" << endl;
            cout << "1. Industry           : " << percentage[0] << "%" << endl;
            cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
            cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
            cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
            cout << "5. Transportation     : " << percentage[4] << "%" << endl;
            cout << "6. Waste              : " << percentage[5] << "%" << endl;
            cout << "7. Water Management   : " << percentage[6] << "%" << endl;
            cout << "8. Buildings          : " << percentage[7] << "%" << endl;
            cout << "Total Percentage      : " << total_percentage << "% is equal to the Desired Percentage        : 85%" << endl;
        }
        else
        {
            cout << "\nThe desired percentages are:" << endl;
            cout << "=====================++=======================" << endl;
            cout << "1. Industry           : " << percentage[0] << "%" << endl;
            cout << "2. De-forestation     : " << percentage[1] << "%" << endl;
            cout << "3. Power & Energy     : " << percentage[2] << "%" << endl;
            cout << "4. Agriculture        : " << percentage[3] << "%" << endl;
            cout << "5. Transportation     : " << percentage[4] << "%" << endl;
            cout << "6. Waste              : " << percentage[5] << "%" << endl;
            cout << "7. Water Management   : " << percentage[6] << "%" << endl;
            cout << "8. Buildings          : " << percentage[7] << "%" << endl;
            cout << "Total Percentage      : " << total_percentage << "% is less than the desired percentage,       85% by " << 85 - total_percentage << "%" << endl;
            cout << "\n==============================================" << endl;
            cout << "Add a negative percentage onto a variable to archive the required Percentage (85%): ";
            goto BELOW;
        }
    }



    return 0;
}
