#include <math.h>
#include "vector.h"


float vec2_length(vec2_t v){
    return sqrt(v.x * v.x + v.y * v.y);
}

float vec2_dot_product(vec2_t a, vec2_t b){
    float dot_product;
    dot_product = (a.x * b.x) + (a.y * b.y);
    return dot_product;
}

vec2_t vec2_add(vec2_t a, vec2_t b) {
    vec2_t add_vec = {
        .x = a.x + b.x,
        .y = a.y + b.y,
    };

    return add_vec;
}

vec2_t vec2_subtract(vec2_t a, vec2_t b){
    vec2_t sub_vec = {
        .x = a.x - b.x,
        .y = a.y - b.y,
    };
    return sub_vec;
}

vec2_t vec2_multiply(vec2_t v, float factor){
    vec2_t mult_vec = {
        .x = v.x * factor,
        .y = v.y * factor,
    };
    return mult_vec;
}

vec2_t vec2_divide(vec2_t v, float factor){
    vec2_t div_vec = {
        .x = v.x / factor,
        .y = v.y / factor,
    };
    return div_vec;
}


float ve3_length(vec3_t v){
    return sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
}

float vec3_dot_product(vec3_t a, vec3_t b){
    float dot_product;
    dot_product = (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
    return dot_product;
}

vec3_t vec3_add(vec3_t a, vec3_t b){
    vec3_t add_vec = {
        .y = a.y + b.y,
        .x = a.x + b.x,
        .z = a.z + b.z,
    };
    return add_vec;
}

vec3_t vec3_subtract(vec3_t a, vec3_t b){
    vec3_t sub_vec = {
        .y = a.y - b.y,
        .x = a.x - b.x,
        .z = a.z - b.z,
    };
    return sub_vec;
}

vec3_t vec3_multiply(vec3_t v, float factor){
    vec3_t mult_vec = {
        .y = v.y * factor,
        .x = v.x * factor,
        .z = v.z * factor,
    };
    return mult_vec;
}

vec3_t vec3_divide(vec3_t v, float factor){
    vec3_t div_vec = {
        .z = v.z / factor,
        .x = v.x / factor,
        .y = v.y / factor,
    };
    return div_vec;
}

vec3_t vec3_cross_product(vec3_t a, vec3_t b){
    vec3_t cross_vec = {
        .x = a.y * b.z - a.z * b.y,
        .y = a.z * b.x - a.x * b.z,
        .z = a.x * b.y - a.y * b.x,
    };
    return cross_vec;
}
vec3_t vec3_rotate_x(vec3_t v, float angle) {
    vec3_t rotated_vector = {
        .x = v.x,
        .y = v.y * cos(angle) - v.z * sin(angle),
        .z = v.y * sin(angle) + v.z * cos(angle)
    };
    return rotated_vector;
}

vec3_t vec3_rotate_y(vec3_t v, float angle) {
    vec3_t rotated_vector = {
        .x = v.x * cos(angle) - v.z * sin(angle),
        .y = v.y,
        .z = v.x * sin(angle) + v.z * cos(angle)
    };
    return rotated_vector;
}

vec3_t vec3_rotate_z(vec3_t v, float angle) {
    vec3_t rotated_vector = {
        .x = v.x * cos(angle) - v.y * sin(angle),
        .y = v.x * sin(angle) + v.y * cos(angle),
        .z = v.z
    };
    return rotated_vector;
}
