#ifndef CONFIGURATION_LULZBOT
#define CONFIGURATION_LULZBOT

/*

   If compiling from the command line:

      build-all-taz-toolheads.sh

   Else, if compiling using Arduino IDE, edit the "#define" lines below.

   Printer Model Choices:
      Gladiola_Mini                     // Lulzbot Mini (Gladiola)
      Gladiola_MiniLCD                  // Lulzbot Mini (Gladiola w/ LCD)
      Hibiscus_Mini2                    // Lulzbot Mini 2 (Hibiscus)
      Juniper_TAZ5                      // Lulzbot TAZ 5 (Juniper, Juniperberry, Juniperbush)
      Oliveoil_TAZ6                     // Lulzbot TAZ 6 (Oliveoil)
      Quiver_TAZPro                     // Lulzbot TAZ Pro (Quiver)

   Mini Toolhead Choices:
      Gladiola_SingleExtruder           // Standard Single Extruder (Gladiola)
      Albatross_Flexystruder            // Flexystruder (Albatross)
      Finch_Aerostruder                 // Titan Aerostruder v1 0.50 mm (Finch)

   TAZ Toolhead Choices:
      Tilapia_SingleExtruder            // Standard Single Extruder (Tilapia)
      Kanyu_Flexystruder                // Flexystruder (Kanyu)
      Opah_Moarstruder                  // Moarstruder (Opah)
      Javelin_DualExtruderV2            // Dual Extruder v2 (Javelin)
      Longfin_FlexyDually               // FlexyDually (Longfin)
      Yellowfin_DualExtruderV3          // Dual Extruder v3 (Yellowfin)

   Universal Toolheads (Mini/Mini 2/TAZ):
      CecropiaSilk_SingleExtruderAeroV2 // SE  | 0.5 mm (Aero v2)
      AchemonSphinx_SmallLayer          // SL  | 0.25 mm (Micro)
      BandedTiger_HardenedSteel         // HS  | 0.8 mm
      DingyCutworm_HardenedSteelPlus    // HS+ | 1.2 mm

   Quiver Toolhead Choices:
      Quiver_DualExtruder               // Standard Dual Aerostruder (Quiver)

*/

// If compiling using the Arduino IDE, remove the "//" from the following lines and
// set printer model and toolhead after the "LULZBOT_" and "TOOLHEAD_" respectively:

#define LULZBOT_Quiver_TAZPro
//#define TOOLHEAD_CecropiaSilk_AerostruderV2
#define TOOLHEAD_Quiver_DualExtruder

#endif /* CONFIGURATION_LULZBOT */
