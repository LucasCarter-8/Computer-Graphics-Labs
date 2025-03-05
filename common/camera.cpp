#include <common/camera.hpp>

Camera::Camera(const glm::vec3 eye, const glm::vec3 Target)
{
	this->eye = eye;
	this->target = target;
}

void Camera::calculateMatrices()
{
	//Calculate view matrix
	view = glm::lookAt(eye, target, worldUp);

	//Calculate projection matrix
	projection = glm::perspective(fov, aspect, near, far);
}
