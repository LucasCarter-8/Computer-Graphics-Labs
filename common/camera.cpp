#include <common/camera.hpp>

Camera::Camera(const glm::vec3 eye, const glm::vec3 Target)
{
	this->eye = eye;
	this->target = target;
}

void Camera::calculateMatrices()
{
	// Calculate camera vectors
	calculateCameraVectors();

	//Calculate view matrix
	view = glm::lookAt(eye, eye + front, worldUp);

	//Calculate projection matrix
	projection = glm::perspective(fov, aspect, near, far);
}

void Camera::calculateCameraVectors()
{
	
	if(!jumping)
	eye.y = 0;

	front = glm::vec3(cos(yaw) * cos(pitch), sin(pitch), sin(yaw) * cos(pitch));
	right = glm::normalize(glm::cross(front, worldUp));
	up = glm::cross(right, front);
}

