#include "haptic_teleoperation/VirtualImpedanceForce.h"
sensor_msgs::PointCloud obstacles_positions;
bool testFlag = true ;


int main(int argc, char **argv)
{
    ros::init(argc, argv, "prf");

    ros::NodeHandle n;
    ros::NodeHandle n_priv("~");
    double freq;
    n_priv.param<double>("frequency", freq, 50.0);
    ros::Rate loop_rate(freq);
   //************* testing one sample data ******************** //

    // ******************* End*************************//


    //**************** real time experiment ******************** //
    std::cout<<"Main"<<"\n";

//        Eigen::Vector3d robotVel ;
//        robotVel(0) = 0 ;
//        robotVel(1) = 0 ;
//        robotVel(2) = 0 ;
        VirtualImpedanceForce obj(n);
        //obj.setInitFlag(false);
      //  obj.runTestVirtualImpedance() ;
    // ******************* End **********************************//




    //************** USED FOR TESTING **********************//
    //        double rpz[4] = {0.2, 0.4, 0.6, 0.8} ;
    //        double amax= 1.0 ;
    //        double  tahead = 2 ;

    //        Eigen::Vector3d Robo_vel ;



    //        VirtualForcePrf prf_obj(n);

    //        for (int j=0 ; j<=8 ; j++)
    //        {
    //            std::cout << "J" << j << std::endl ;
    //            Robo_vel(0) =  (double) j/2 ;
    //            Robo_vel(1) = 0 ;
    //            Robo_vel(2) = 0 ;
    //            prf_obj.setRobotVelocity(Robo_vel);

    //            for ( int i = 0 ; i < 4 ; i++ )
    //            {
    //                double dmin= 3.0 * rpz[i] ;
    //                prf_obj.setParameters(dmin,amax,rpz[i],tahead) ;
    //                std::string name = prf_obj.testName(dmin,amax,rpz[i],tahead, j, (double) j/2) ;
    //                prf_obj.runTestPrf(name);
    //            }
    //        }
    //************************* End testing *************************//



    while(ros::ok())
    {
        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}


