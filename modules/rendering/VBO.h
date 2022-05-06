#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "utils/logger.h"

namespace giz
{
    template <typename T>
    class VBO
    {
    public:
        unsigned int m_BufferId;

        VBO(float data[], unsigned long long size, int bufferType, int usage);
        VBO(int data[], unsigned long long size, int bufferType, int usage);
        // VBO(unsigned int data[], unsigned long long size, GLenum bufferType, GLenum usage);
    };
}