class ParkingSystem {
public:
    int b,m,s;
    ParkingSystem(int big, int medium, int small) {
        b=big;
        m=medium;
        s=small;
       
        
        
    }
    
    bool addCar(int carType) {
        if(carType==1)
        {
            if(b>=1)
            {
                b=b-1;
                return 1;
            }
            else
                return 0;
        }
        else if(carType==2 )
        {
            if(m>=1)
            {
            m=m-1;
            return 1;
            }
            else
                return 0;
        }
        
        else if(carType==3 )
        {
            if(s>=1)
            {
            s=s-1;
            return 1;
            }
            else
                return 0;
        }
        else
            return 0;
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
