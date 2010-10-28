#ifndef MVOG_GTK_GUI_CAMERA_H
#define MVOG_GTK_GUI_CAMERA_H

#include <math.h>

#include <btBulletDynamicsCommon.h>

#define DEG_TO_RAD 3.14159/180.0
#define RAD_TO_DEG 180.0/3.14159

namespace MVOG
{

class Camera
{
	private:

		btVector3 pos_;
		btVector3 look_;

		double lookTheta_;
		double lookPhi_;
		double lookR_;

	public:

		Camera();
		virtual ~Camera();

		void updateLook();
		void updatePos();

		double getPosX() const { return pos_.getX(); }
		double getPosY() const { return pos_.getY(); }
		double getPosZ() const { return pos_.getZ(); }

		double getLookX() const { return look_.getX(); }
		double getLookY() const { return look_.getY(); }
		double getLookZ() const { return look_.getZ(); }

		void pan(double a);
		void tilt(double a);
		void zoom (double r);
    void move(double x, double y);
};

} // namespace MVOG
#endif //MVOG_GTK_GUI_CAMERA_H
