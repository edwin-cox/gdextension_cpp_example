// #ifndef GDEXAMPLE_REGISTER_TYPES_H
// #define GDEXAMPLE_REGISTER_TYPES_H

// #include <godot_cpp/core/class_db.hpp>

// using namespace godot;

// void initialize_gdexample_module(ModuleInitializationLevel p_level);
// void uninitialize_gdexample_module(ModuleInitializationLevel p_level);

// #endif // GDEXAMPLE_REGISTER_TYPES_H

#ifndef SUMMATOR_REGISTER_TYPES_H
#define SUMMATOR_REGISTER_TYPES_H

void initialize_summator_types();
void uninitialize_summator_types();

#endif // SUMMATOR_REGISTER_TYPES_H

#ifndef EXAMPLE_REGISTER_TYPES_H
#define EXAMPLE_REGISTER_TYPES_H

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void initialize_example_module(ModuleInitializationLevel p_level);
void uninitialize_example_module(ModuleInitializationLevel p_level);

#endif // EXAMPLE_REGISTER_TYPES_H
