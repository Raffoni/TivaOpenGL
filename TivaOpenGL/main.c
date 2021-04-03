#include "\\file\Usersp$\prl33\Home\My Documents\Unrelated\cglm\include\cglm\cglm.h"


#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define HALF_SCREEN_WIDTH 64
#define HALF_SCREEN_HEIGHT 18
#define FOCAL_LENGTH 10

#define TRI_NUM
#define INDEX_NUM

struct

void setTris(void) {
    int i = 0;
    for (i; i < INDEX_NUM; i+=3) {
        tris[i].v0
    }
}

int main(void)
{
    vec3 light_ray = new vec3(0, 1, 0)
	while (1) {
	    uint_8t screen_x;
	    uint_8t screen_y;
	    for (screen_x = -HALF_SCREEN_WIDTH; screen_x < HALF_SCREEN_WIDTH; screen_x++) {
	        for (screen_y = -HALF_SCREEN_HEIGHT; screen_y < HALF_SCREEN_HEIGHT; screen_y++) {
	            vec3 eye_origin = new vec3(0, 0, -FOCAL_LENGTH);
	            vec3 eye_dir = new vec3(screen_x, screen_y, FOCAL_LENGTH);
	            int i = 0;
	            for (i; i < TRI_NUM; i++) {
	                float dist = 0.0;
	                if (glm_ray_triangle(eye_origin, eye_dir, tris[i].v0, tris[i].v1, tris[i].v2, &dist)) {
	                    float face = glm_vec3_dot(glm_vec3_normalize(light_ray), glm_vec3_normalize())
	                }
	            }
	        }
	    }
	}
}
