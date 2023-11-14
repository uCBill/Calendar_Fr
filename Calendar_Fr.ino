/*
Calendar_Fr
Version 1.0.1
https://github.com/uCBill/Calendar_Fr
French Calendar watchface by Bill Eichner
French format starting with Lundi (Monday, US) as first day of the week.
*/

#include <Watchy.h> //include the Watchy library
#include "calendar_img.h"
#include "Teko_Regular12pt7b.h"
#include "settings.h"

class WatchFace : public Watchy { //inherit and extend Watchy class
  using Watchy::Watchy;
  public:
    void drawWatchFace() { //override this method to customize how the watch face looks
      
      int16_t  x1, y1;
      uint16_t w, h;
      String textstring;
      int frame;
      int mth;
      int yr;
      int days;
      int wkday;
      int x;
      int y;
      bool light = true; // left this here if someone wanted to tweak for dark

      //resets step counter at midnight everyday
      if(currentTime.Hour == 00 && currentTime.Minute == 00) {
        sensor.resetStepCounter();
      }

    
    // draw background
    display.fillScreen(light ? GxEPD_WHITE : GxEPD_BLACK);
    display.drawBitmap(0,0, calendar_fr_grid, 200, 200, light ? GxEPD_BLACK : GxEPD_WHITE);
    display.setTextColor(light ? GxEPD_BLACK : GxEPD_WHITE);
    display.setTextWrap(false);

    // draw Calendar
    mth = currentTime.Month;
    yr = currentTime.Year + 1970;
    display.setFont(&Teko_Regular12pt7b);
    
        textstring = currentTime.Day;
        textstring += "/";

        if (mth >= 12) {
        days = 31;
        textstring += "DECEMBRE";
        if (yr <= 2020) {
        frame = -140;//Mar
        }
        else if (yr <= 2021) {
        frame = -112;//Mer
        }
        else if (yr <= 2022) {
        frame = -84;//Jeu
        }
        else if (yr <= 2023) {
        frame = -56;//Ven
        }
        else if (yr <= 2024) {
        frame = 1;//Dim
        }
        else if (yr <= 2025) {
        frame = -168;//Lun
        }
        else if (yr <= 2026) {
        frame = -140;//Mar
        }
        else if (yr <= 2027) {
        frame = -112;//Mer
        }
        else if (yr <= 2028) {
        frame = -56;//Ven
        }
        else if (yr <= 2029) {
        frame = -28;//Sam
        }
        else if (yr <= 2030) {
        frame = 1;//Dim
        }
        else if (yr <= 2031) {
        frame = -168;//Lun
        }
        else if (yr <= 2032) {
        frame = -112;//Mer
        }
        else if (yr <= 2033) {
        frame = -84;//Jeu
        }
        else if (yr <= 2034) {
        frame = -56;//Ven
        }
        else if (yr <= 2035) {
        frame = -28;//Sam
        }
        else if (yr <= 2036) {
        frame = -168;//Lun
        }
        else if (yr <= 2037) {
        frame = -140;//Mar
        }
        else if (yr <= 2038) {
        frame = -112;//Mer
        }
        else if (yr <= 2039) {
        frame = -84;//Jeu
        }
        else if (yr <= 2040) {
        frame = -28;//Sam
        }
        }
        else if (mth >= 11) {
        days = 30;
        textstring += "NOVEMBRE";
        if (yr <= 2020) {
        frame = 1;//Dim
        }
        else if (yr <= 2021) {
        frame = -168;//Lun
        }
        else if (yr <= 2022) {
        frame = -140;//Mar
        }
        else if (yr <= 2023) {
        frame = -112;//Mer
        }
        else if (yr <= 2024) {
        frame = -56;//Ven
        }
        else if (yr <= 2025) {
        frame = -28;//Sam
        }
        else if (yr <= 2026) {
        frame = 1;//Dim
        }
        else if (yr <= 2027) {
        frame = -168;//Lun
        }
        else if (yr <= 2028) {
        frame = -112;//Mer
        }
        else if (yr <= 2029) {
        frame = -84;//Jeu
        }
        else if (yr <= 2030) {
        frame = -56;//Ven
        }
        else if (yr <= 2031) {
        frame = -28;//Sam
        }
        else if (yr <= 2032) {
        frame = -168;//Lun
        }
        else if (yr <= 2033) {
        frame = -140;//Mar
        }
        else if (yr <= 2034) {
        frame = -112;//Mer
        }
        else if (yr <= 2035) {
        frame = -84;//Jeu
        }
        else if (yr <= 2036) {
        frame = -28;//Sam
        }
        else if (yr <= 2037) {
        frame = 1;//Dim
        }
        else if (yr <= 2038) {
        frame = -168;//Lun
        }
        else if (yr <= 2039) {
        frame = -140;//Mar
        }
        else if (yr <= 2040) {
        frame = -84;//Jeu
        }
        }
        else if (mth >= 10) {
        days = 31;
        textstring += "OCTOBRE";
        if (yr <= 2020) {
        frame = -84;//Jeu
        }
        else if (yr <= 2021) {
        frame = -56;//Ven
        }
        else if (yr <= 2022) {
        frame = -28;//Sam
        }
        else if (yr <= 2023) {
        frame = 1;//Dim
        }
        else if (yr <= 2024) {
        frame = -140;//Mar
        }
        else if (yr <= 2025) {
        frame = -112;//Mer
        }
        else if (yr <= 2026) {
        frame = -84;//Jeu
        }
        else if (yr <= 2027) {
        frame = -56;//Ven
        }
        else if (yr <= 2028) {
        frame = 1;//Dim
        }
        else if (yr <= 2029) {
        frame = -168;//Lun
        }
        else if (yr <= 2030) {
        frame = -140;//Mar
        }
        else if (yr <= 2031) {
        frame = -112;//Mer
        }
        else if (yr <= 2032) {
        frame = -56;//Ven
        }
        else if (yr <= 2033) {
        frame = 1;//Sa
        }
        else if (yr <= 2034) {
        frame = 1;//Dim
        }
        else if (yr <= 2035) {
        frame = -168;//Lun
        }
        else if (yr <= 2036) {
        frame = -112;//Mer
        }
        else if (yr <= 2037) {
        frame = -84;//Jeu
        }
        else if (yr <= 2038) {
        frame = -56;//Ven
        }
        else if (yr <= 2039) {
        frame = -28;//Sam
        }
        else if (yr <= 2040) {
        frame = -168;//Lun
        }
        }
        else if (mth >= 9) {
        days = 30;
        textstring += "SEPTEMBRE";
        if (yr <= 2020) {
        frame = -140;//Mar
        }
        else if (yr <= 2021) {
        frame = -112;//Mer
        }
        else if (yr <= 2022) {
        frame = -84;//Jeu
        }
        else if (yr <= 2023) {
        frame = -56;//Ven
        }
        else if (yr <= 2024) {
        frame = 1;//Dim
        }
        else if (yr <= 2025) {
        frame = -168;//Lun
        }
        else if (yr <= 2026) {
        frame = -140;//Mar
        }
        else if (yr <= 2027) {
        frame = -112;//Mer
        }
        else if (yr <= 2028) {
        frame = -56;//Ven
        }
        else if (yr <= 2029) {
        frame = -28;//Sam
        }
        else if (yr <= 2030) {
        frame = 1;//Dim
        }
        else if (yr <= 2031) {
        frame = -168;//Lun
        }
        else if (yr <= 2032) {
        frame = -112;//Mer
        }
        else if (yr <= 2033) {
        frame = -56;//Th
        }
        else if (yr <= 2034) {
        frame = -56;//Ven
        }
        else if (yr <= 2035) {
        frame = 1;//Sa
        }
        else if (yr <= 2036) {
        frame = -168;//Lun
        }
        else if (yr <= 2037) {
        frame = -140;//Mar
        }
        else if (yr <= 2038) {
        frame = -112;//Mer
        }
        else if (yr <= 2039) {
        frame = -84;//Jeu
        }
        else if (yr <= 2040) {
        frame = 1;//Sa
        }
        }
        else if (mth >= 8) {
        days = 31;
        textstring += "AOUT";
        if (yr <= 2020) {
        frame = -28;//Sam
        }
        else if (yr <= 2021) {
        frame = 1;//Dim
        }
        else if (yr <= 2022) {
        frame = -168;//Lun
        }
        else if (yr <= 2023) {
        frame = -140;//Mar
        }
        else if (yr <= 2024) {
        frame = -84;//Jeu
        }
        else if (yr <= 2025) {
        frame = -56;//Ven
        }
        else if (yr <= 2026) {
        frame = -28;//Sam
        }
        else if (yr <= 2027) {
        frame = 1;//Dim
        }
        else if (yr <= 2028) {
        frame = -140;//Mar
        }
        else if (yr <= 2029) {
        frame = -112;//Mer
        }
        else if (yr <= 2030) {
        frame = -84;//Jeu
        }
        else if (yr <= 2031) {
        frame = -56;//Ven
        }
        else if (yr <= 2032) {
        frame = 1;//Dim
        }
        else if (yr <= 2033) {
        frame = -168;//Lun
        }
        else if (yr <= 2034) {
        frame = -140;//Mar
        }
        else if (yr <= 2035) {
        frame = -112;//Mer
        }
        else if (yr <= 2036) {
        frame = -56;//Ven
        }
        else if (yr <= 2037) {
        frame = -28;//Sam
        }
        else if (yr <= 2038) {
        frame = 1;//Dim
        }
        else if (yr <= 2039) {
        frame = -168;//Lun
        }
        else if (yr <= 2040) {
        frame = -112;//Mer
        }
        }
        else if (mth >= 7) {
        days = 31;
        textstring += "JUILLET";
        if (yr <= 2020) {
        frame = -112;//Mer
        }
        else if (yr <= 2021) {
        frame = -84;//Jeu
        }
        else if (yr <= 2022) {
        frame = -56;//Ven
        }
        else if (yr <= 2023) {
        frame = -28;//Sam
        }
        else if (yr <= 2024) {
        frame = -168;//Lun
        }
        else if (yr <= 2025) {
        frame = -140;//Mar
        }
        else if (yr <= 2026) {
        frame = -112;//Mer
        }
        else if (yr <= 2027) {
        frame = -84;//Jeu
        }
        else if (yr <= 2028) {
        frame = -28;//Sam
        }
        else if (yr <= 2029) {
        frame = 1;//Dim
        }
        else if (yr <= 2030) {
        frame = -168;//Lun;
        }
        else if (yr <= 2031) {
        frame = -140;//Mar
        }
        else if (yr <= 2032) {
        frame = -84;//Jeu
        }
        else if (yr <= 2033) {
        frame = -56;//Ven
        }
        else if (yr <= 2034) {
        frame = -28;//Sam
        }
        else if (yr <= 2035) {
        frame = 1;//Dim
        }
        else if (yr <= 2036) {
        frame = -140;//Mar
        }
        else if (yr <= 2037) {
        frame = -112;//Mer
        }
        else if (yr <= 2038) {
        frame = -84;//Jeu
        }
        else if (yr <= 2039) {
        frame = -56;//Ven
        }
        else if (yr <= 2040) {
        frame = 1;//Dim
        }
        }
        else if (mth >= 6) {
        days = 30;
        textstring += "JUIN";
        if (yr <= 2020) {
        frame = -168;//Lun
        }
        else if (yr <= 2021) {
        frame = -140;//Mar
        }
        else if (yr <= 2022) {
        frame = -112;//Mer
        }
        else if (yr <= 2023) {
        frame = -84;//Jeu
        }
        else if (yr <= 2024) {
        frame = -28;//Sam
        }
        else if (yr <= 2025) {
        frame = 1;//Dim
        }
        else if (yr <= 2026) {
        frame = -168;//Lun
        }
        else if (yr <= 2027) {
        frame = -140;//Mar
        }
        else if (yr <= 2028) {
        frame = -84;//Jeu
        }
        else if (yr <= 2029) {
        frame = -56;//Ven
        }
        else if (yr <= 2030) {
        frame = -28;//Sam
        }
        else if (yr <= 2031) {
        frame = 1;//Dim
        }
        else if (yr <= 2032) {
        frame = -140;//Mar
        }
        else if (yr <= 2033) {
        frame = -112;//Mer
        }
        else if (yr <= 2034) {
        frame = -84;//Jeu
        }
        else if (yr <= 2035) {
        frame = -56;//Ven
        }
        else if (yr <= 2036) {
        frame = 1;//Dim
        }
        else if (yr <= 2037) {
        frame = -168;//Lun;
        }
        else if (yr <= 2038) {
        frame = -140;//Mar
        }
        else if (yr <= 2039) {
        frame = -112;//Mer
        }
        else if (yr <= 2040) {
        frame = -56;//Ven
        }
        }
        else if (mth >= 5) {
        days = 31;
        textstring += "MAI";
        if (yr <= 2020) {
        frame = -56;//Ven
        }
        else if (yr <= 2021) {
        frame = -28;//Sam
        }
        else if (yr <= 2022) {
        frame = 1;//Dim
        }
        else if (yr <= 2023) {
        frame = -168;//Lun
        }
        else if (yr <= 2024) {
        frame = -112;//Mer
        }
        else if (yr <= 2025) {
        frame = -84;//Jeu
        }
        else if (yr <= 2026) {
        frame = -56;//Ven
        }
        else if (yr <= 2027) {
        frame = -28;//Sam
        }
        else if (yr <= 2028) {
        frame = -168;//Lun
        }
        else if (yr <= 2029) {
        frame = -140;//Mar
        }
        else if (yr <= 2030) {
        frame = -112;//Mer
        }
        else if (yr <= 2031) {
        frame = -84;//Jeu
        }
        else if (yr <= 2032) {
        frame = -28;//Sam
        }
        else if (yr <= 2033) {
        frame = 1;//Dim
        }
        else if (yr <= 2034) {
        frame = -168;//Lun
        }
        else if (yr <= 2035) {
        frame = -140;//Mar
        }
        else if (yr <= 2036) {
        frame = -84;//Jeu
        }
        else if (yr <= 2037) {
        frame = -56;//Ven
        }
        else if (yr <= 2038) {
        frame = -28;//Sam
        }
        else if (yr <= 2039) {
        frame = 1;//Dim
        }
        else if (yr <= 2040) {
        frame = -140;//Mar
        }
        }
        else if (mth >= 4) {
        days = 30;
        textstring += "AVRIL";
        if (yr <= 2020) {
        frame = -112;//Mer
        }
        else if (yr <= 2021) {
        frame = -84;//Jeu
        }
        else if (yr <= 2022) {
        frame = -56;//Ven
        }
        else if (yr <= 2023) {
        frame = -28;//Sam
        }
        else if (yr <= 2024) {
        frame = -168;//Lun
        }
        else if (yr <= 2025) {
        frame = -140;//Mar
        }
        else if (yr <= 2026) {
        frame = -112;//Mer
        }
        else if (yr <= 2027) {
        frame = -84;//Jeu
        }
        else if (yr <= 2028) {
        frame = -28;//Sam
        }
        else if (yr <= 2029) {
        frame = 1;//Dim
        }
        else if (yr <= 2030) {
        frame = -168;//Lun
        }
        else if (yr <= 2031) {
        frame = -140;//Mar
        }
        else if (yr <= 2032) {
        frame = -84;//Jeu
        }
        else if (yr <= 2033) {
        frame = -56;//Ven
        }
        else if (yr <= 2034) {
        frame = -28;//Sam
        }
        else if (yr <= 2035) {
        frame = 1;//Dim
        }
        else if (yr <= 2036) {
        frame = -140;//Mar
        }
        else if (yr <= 2037) {
        frame = -112;//Mer
        }
        else if (yr <= 2038) {
        frame = -84;//Jeu
        }
        else if (yr <= 2039) {
        frame = -56;//Ven
        }
        else if (yr <= 2040) {
        frame = 1;//Dim
        }
        }
        else if (mth >= 3) {
        days = 31;
        textstring += "MARS";
        if (yr <= 2020) {
        frame = 1;//Dim
        }
        else if (yr <= 2021) {
        frame = -168;//Lun
        }
        else if (yr <= 2022) {
        frame = -140;//Mar
        }
        else if (yr <= 2023) {
        frame = -112;//Mer
        }
        else if (yr <= 2024) {
        frame = -56;//Ven
        }
        else if (yr <= 2025) {
        frame = -28;//Sam
        }
        else if (yr <= 2026) {
        frame = 1;//Dim
        }
        else if (yr <= 2027) {
        frame = -168;//Lun
        }
        else if (yr <= 2028) {
        frame = -112;//Mer
        }
        else if (yr <= 2029) {
        frame = -84;//Jeu
        }
        else if (yr <= 2030) {
        frame = -56;//Ven
        }
        else if (yr <= 2031) {
        frame = -28;//Sam
        }
        else if (yr <= 2032) {
        frame = -168;//Lun
        }
        else if (yr <= 2033) {
        frame = -140;//Mar
        }
        else if (yr <= 2034) {
        frame = -112;//Mer
        }
        else if (yr <= 2035) {
        frame = -84;//Jeu
        }
        else if (yr <= 2036) {
        frame = -28;//Sam
        }
        else if (yr <= 2037) {
        frame = 1;//Dim
        }
        else if (yr <= 2038) {
        frame = -168;//Lun
        }
        else if (yr <= 2039) {
        frame = -140;//Mar
        }
        else if (yr <= 2040) {
        frame = -84;//Jeu
        }
        }
        else if (mth >= 2) {
        textstring += "FEVRIER";
        if (yr <= 2020) {
        days = 29;
        frame = -28;//Sam
        }
        else if (yr <= 2021) {
        days = 28;
        frame = -168;//Lun
        }
        else if (yr <= 2022) {
        days = 28;
        frame = -140;//Mar
        }
        else if (yr <= 2023) {
        days = 28;
        frame = -112;//Mer
        }
        else if (yr <= 2024) {
        days = 29;
        frame = -84;//Jeu
        }
        else if (yr <= 2025) {
        days = 28;
        frame = -28;//Sam
        }
        else if (yr <= 2026) {
        days = 28;
        frame = 1;//Dim
        }
        else if (yr <= 2027) {
        days = 28;
        frame = -168;//Lun
        }
        else if (yr <= 2028) {
        days = 29;
        frame = -140;//Mar
        }
        else if (yr <= 2029) {
        days = 28;
        frame = -84;//Jeu
        }
        else if (yr <= 2030) {
        days = 28;
        frame = -56;//Ven
        }
        else if (yr <= 2031) {
        days = 28;
        frame = -28;//Sam
        }
        else if (yr <= 2032) {
        days = 29;
        frame = 1;//Dim
        }
        else if (yr <= 2033) {
        days = 28;
        frame = -140;//Mar
        }
        else if (yr <= 2034) {
        days = 28;
        frame = -112;//Mer
        }
        else if (yr <= 2035) {
        days = 28;
        frame = -84;//Jeu
        }
        else if (yr <= 2036) {
        days = 29;
        frame = -56;//Ven
        }
        else if (yr <= 2037) {
        days = 28;
        frame = 1;//Dim
        }
        else if (yr <= 2038) {
        days = 28;
        frame = -168;//Lun
        }
        else if (yr <= 2039) {
        days = 28;
        frame = -140;//Mar
        }
        else if (yr <= 2040) {
        days = 29;
        frame = -112;//Mer
        }
        }
        else if (mth >= 1) {
        days = 31;
        textstring += "JANVIER";
        if (yr <= 2020) {
        frame =  -112;//Mer
        }
        else if (yr <= 2021) {
        frame = -56;//Ven
        }
        else if (yr <= 2022) {
        frame = -28;//Sam
        }
        else if (yr <= 2023) {
        frame = 1;//Dim
        }
        else if (yr <= 2024) {
        frame = -168;//Lun
        }
        else if (yr <= 2025) {
        frame = -112;//Mer
        }
        else if (yr <= 2026) {
        frame = -84;//Jeu
        }
        else if (yr <= 2027) {
        frame = -56;//Ven
        }
        else if (yr <= 2028) {
        frame = -28;//Sam
        }
        else if (yr <= 2029) {
        frame = -168;//Lun
        }
        else if (yr <= 2030) {
        frame = -140;//Mar
        }
        else if (yr <= 2031) {
        frame = -112;//Mer
        }
        else if (yr <= 2032) {
        frame = -84;//Jeu
        }
        else if (yr <= 2033) {
        frame = -28;//Sam
        }
        else if (yr <= 2034) {
        frame = 1;//Dim
        }
        else if (yr <= 2035) {
        frame = -168;//Lun
        }
        else if (yr <= 2036) {
        frame = -140;//Mar
        }
        else if (yr <= 2037) {
        frame = -84;//Jeu
        }
        else if (yr <= 2038) {
        frame = -56;//Ven
        }
        else if (yr <= 2039) {
        frame = -28;//Sam
        }
        else if (yr <= 2040) {
        frame = 1;//Dim
        }
        }

//      Ref: frame= -168:1=Sun, -140:1=Mon, -112:1=Tue, -84::1=Wed, -56:1=Thu, -28:1=Fri, 1:1=Sat
//      Ref: Sun=Dim=+1, Mon=Lun=-168, Tue=Mar=-140, Wed=Mer=-112, Thu=Jeu=-84, Fri=Ven=-56, Sat=Sam=-28
        if (days >= 31) {
        display.drawBitmap(frame, 58, calendar31n, 367, 142, light ? GxEPD_BLACK : GxEPD_WHITE);
        }
        else if (days >= 30) {
        display.drawBitmap(frame, 58, calendar30n, 367, 142, light ? GxEPD_BLACK : GxEPD_WHITE);
        }
        else if (days >= 29) {
        display.drawBitmap(frame, 58, calendar29n, 367, 142, light ? GxEPD_BLACK : GxEPD_WHITE);
        }
        else if (days >= 28) {
        display.drawBitmap(frame, 58, calendar28n, 367, 142, light ? GxEPD_BLACK : GxEPD_WHITE);
        }

    textstring += "/";
    textstring += currentTime.Year + 1970;

    display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
    display.setCursor(100-w/2, 38); // date position
    display.print(textstring);
    // END draw Calendar
      
    // highlight calendar day
        textstring = dayShortStr(currentTime.Wday);
        if (textstring == "Mon") {
        wkday = 1;
        }
        else if (textstring == "Tue") {
        wkday = 2;
        }
        else if (textstring == "Wed") {
        wkday = 3;
        }
        else if (textstring == "Thu") {
        wkday = 4;
        }
        else if (textstring == "Fri") {
        wkday = 5;
        }
        else if (textstring == "Sat") {
        wkday = 6;
        }
        else if (textstring == "Sun") {
        wkday = 7;
        }

        days = currentTime.Day;
        y = 56;//R1
        if (wkday <= 1) {
        x = -1;//Lun
        if (days <= 1) {
        y += 0;//R1
        }
        else if (days <= 8) {
        y += 28;//R2
        }
        else if (days <= 15) {
        y += 56;//R3
        }
        else if (days <= 22) {
        y += 84;//R4
        }
        else if (days <= 31) {
        y += 112;//R5
        }
        }
        else if (wkday <= 2) {
        x = 27;//Mar
        if (days <= 2) {
        y += 0;
        }
        else if (days <= 9) {
        y += 28;//R2
        }
        else if (days <= 16) {
        y += 56;//R3
        }
        else if (days <= 23) {
        y += 84;//R4
        }
        else if (days <= 31) {
        y += 112;//R5
        }
        }
        else if (wkday <= 3) {
        x = 55;//Mer
        if (days <= 3) {
        y += 0;
        }
        else if (days <= 10) {
        y += 28;//R2
        }
        else if (days <= 17) {
        y += 56;//R3
        }
        else if (days <= 24) {
        y += 84;//R4
        }
        else if (days <= 31) {
        y += 112;//R5
        }
        }
        else if (wkday <= 4) {
        x = 83;//Jeu
        if (days <= 4) {
        y += 0;
        }
        else if (days <= 11) {
        y += 28;//R2
        }
        else if (days <= 18) {
        y += 56;//R3
        }
        else if (days <= 25) {
        y += 84;//R4
        }
        else if (days <= 31) {
        y += 112;//R5
        }
        }
        else if (wkday <= 5) {
        x = 112;//Ven
        y += 0;//R2
        if (days <= 5) {
        y += 0;
        }
        else if (days <= 12) {
        y += 28;//R2
        }
        else if (days <= 19) {
        y += 56;//R3
        }
        else if (days <= 26) {
        y += 84;//R4
        }
        else if (days <= 31) {
        y += 112;//R5
        }
        }
        else if (wkday <= 6) {
        x = 140;//Sam
        if (days <= 6) {
        y += 0;
        }
        else if (days <= 13) {
        y += 28;//R2
        }
        else if (days <= 20) {
        y += 56;//R3
        }
        else if (days <= 27) {
        y += 84;//R4
        }
        else if (days <= 31) {
        y += 112;//R5
        }
        }
        else if (wkday <= 7) {
        x = 168;//Dim
        if (days <= 7) {
        y += 0;
        }
        else if (days <= 14) {
        y += 28;//R2
        }
        else if (days <= 21) {
        y += 56;//R3
        }
        else if (days <= 28) {
        y += 84;//R4
        }
        else if (days <= 31) {
        y += 112;//R5
        }
        }
      
        //draw day hightlight image
        if (wkday == 4) {
        display.drawBitmap(x,y, block35x34, 35, 34, light ? GxEPD_BLACK : GxEPD_WHITE);
        }
        display.drawBitmap(x,y, block34x34, 35, 34, light ? GxEPD_BLACK : GxEPD_WHITE);
        //END highlight calendar day
  
/*      //draw day hightlight image
      x = 27;//Lun:x=-1, Mar:x=27, Mer:x=55, Jeu:x=83, Ven:x=112, Sam:x=140, Dim:x=168
      y = 140;//R1:y=56, R2:y=84, R3:y=112, R4:y=140, R5:y=168
      display.drawBitmap(x,y, block34x34, 35, 34, GxEPD_BLACK);
      x = 83;//Jeu:x=83
      y = 140;//R1:y=56, R2:y=84, R3:y=112, R4:y=140, R5:y=168
      display.drawBitmap(x,y, block35x34, 35, 34, GxEPD_BLACK);
      //END highlight calendar day
*/      
    // draw time
/*    display.setFont(&Teko_Regular12pt7b);
    int displayHour;
    if (currentTime.Hour > 12) {
      textstring = ((currentTime.Hour+11)%12)+1;
    } else if (currentTime.Hour < 1) {
      textstring = 12;
    } else {
      textstring = currentTime.Hour;
    }
    textstring += ":";
    if (currentTime.Minute < 10) {
      textstring += "0";
    } else {
      textstring += "";
    }
    textstring += currentTime.Minute;
    //This option displays am or pm to 12 hour clock
    if (currentTime.Hour >= 12) {
      textstring += "PM";
    } else {
      textstring += "AM";
    }
*/
//    24 Hour Format
      if (currentTime.Hour < 10) {
        textstring = "0";
      } else {
        textstring = "";
      }
      textstring += currentTime.Hour;
      textstring += ":";
      if (currentTime.Minute < 10) {
        textstring += "0";
      } else {
        textstring += "";
      }
        textstring += currentTime.Minute;
     display.setCursor(5, 19);
     display.print(textstring);
    //END time

    //  Draw Battery Percent
     display.setFont(&Teko_Regular12pt7b);
     int8_t batteryLevel = 0;
     float VBAT = getBatteryVoltage();

     if(VBAT >= 4.2){
        batteryLevel = 100.0;
     }
     else if (VBAT >= 3.3) {
        batteryLevel = 100.0*(VBAT-3.3)/0.9;
    }
      textstring = "BAT:";
      textstring += batteryLevel;
      textstring += "%";
      display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
      display.setCursor(195-w, 19);
      display.print(textstring);
     //  END OF Draw Battery

    }

};

WatchFace m(settings); //instantiate your watchface

void setup() {
  m.init(); //call init in setup
}

void loop() {
  // this should never run, Watchy deep sleeps after init();
}
