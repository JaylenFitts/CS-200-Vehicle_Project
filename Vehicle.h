//Vehicle.c

class Vehicle {
    public:
        Vehicle();
        Vehicle(double tankSize, double mpg);
        void fillTank(double gasAmount);
        void setDistTraveled(double dist);
        double getGasLevel();
        double getDistTraveled();
    private:
        double distTraveled;
        double gasAmount;
        double gasTankSize;
        double mpg;
};
