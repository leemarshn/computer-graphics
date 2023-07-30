cmake_minimum_required(VERSION 3.25)
project(untitled2 C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled2 main.c)
add_executable(assignment assignment2.c)

add_executable(brasen_circle Brasenham.c)
add_executable(mid_point_circle MidPointCircle.c)
add_executable(brasen_line BrasenhamLineDrawing.c)




# Find required OpenGL and GLUT libraries
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

# Add OpenGL and GLUT libraries to the linker
target_link_libraries(brasen_circle PRIVATE ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} m)
target_link_libraries(mid_point_circle PRIVATE ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} m)
target_link_libraries(brasen_line PRIVATE ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} m)

