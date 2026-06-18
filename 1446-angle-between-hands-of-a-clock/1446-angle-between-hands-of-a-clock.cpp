class Solution {
public:
    double angleClock(int hour, int minutes) {

        double x = hour + minutes/60.0;
        double diff = fmod(11.0*x, 12.0);
        return min(diff, 12.0 - diff)*30.0;
        
    }
};


// A circular clock will have 360 as anagle nd 60 as minutes right 
// so each minute is worth 6 degrees
// and also hour hand moves 30 deg in one hour or 5 place , so 30/60 each minute is the hour hand moves 0.5 degrees
// now we need to calculate the difference bw them .
// another that just clicked by me is that just convert the hours into minutes and multiply the difference by 0.5