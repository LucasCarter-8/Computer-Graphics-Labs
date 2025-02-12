#version 330 core

//Input
in vec2 UV;

//Output
out vec3 colour;

//Uniforms
//uniform sampler2D textureMap;
uniform sampler2D texture1;
uniform sampler2D texture2;

void main()
{
    //colour = vec3(texture(textureMap, UV));
    colour = vec3(mix(texture(texture1, UV), texture(texture2, vec2(-UV.x,UV.y)), 0.3));
}
