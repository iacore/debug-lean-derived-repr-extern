#include <lean/lean.h>

typedef struct Vector2 {
    float x;                // Vector x component
    float y;                // Vector y component
} Vector2;

LEAN_EXPORT static void lean_raylib_default_foreach(void* a, b_lean_obj_arg b) {}

static inline lean_object* lean_raylib_Vector2_to (Vector2 const* obj) {
    static lean_external_class* class_ = NULL;
    if (class_ == NULL) {
        class_ = lean_register_external_class(free, lean_raylib_default_foreach);
    }
    return lean_alloc_external(class_, (void*)obj);
}

static inline Vector2* lean_raylib_Vector2_from (b_lean_obj_arg obj) {
    return (Vector2*) lean_get_external_data(obj);
}

LEAN_EXPORT lean_obj_res lean_raylib__Vector2_mk(double x, double y) {
    Vector2* vec = malloc(sizeof(Vector2)); *vec = ((Vector2){.x = (float)x, .y = (float)y});;
    return lean_raylib_Vector2_to(vec);
}

LEAN_EXPORT double lean_raylib__Vector2_x(b_lean_obj_arg vec) {
    return lean_raylib_Vector2_from(vec)->x;
}

LEAN_EXPORT double lean_raylib__Vector2_y(b_lean_obj_arg vec) {
    return lean_raylib_Vector2_from(vec)->y;
}
