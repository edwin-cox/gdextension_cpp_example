#include "register_types.h"

// #include "gdexample.h"
#include "summator.h"
#include "example.h"


#include <gdextension_interface.h>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

// void initialize_gdexample_module(ModuleInitializationLevel p_level) {
//     if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
//  		return;
//  	}

//  	ClassDB::register_class<GDExample>();
// }

// void uninitialize_gdexample_module(ModuleInitializationLevel p_level) {
//  	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
//  		return;
//  	}
// }

void initialize_summator_types(ModuleInitializationLevel p_level)
{
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<Summator>();
}

void uninitialize_summator_types(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}

void initialize_example_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	ClassDB::register_class<ExampleRef>();
	ClassDB::register_class<ExampleMin>();
	ClassDB::register_class<Example>();
	ClassDB::register_class<ExampleVirtual>(true);
	ClassDB::register_abstract_class<ExampleAbstract>();
}

void uninitialize_example_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}


extern "C" {
    // Initialization.
	GDExtensionBool GDE_EXPORT summator_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
		GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

    	// init_obj.register_initializer(initialize_gdexample_module);
	    // init_obj.register_terminator(uninitialize_gdexample_module);

		init_obj.register_initializer(initialize_summator_types);
		init_obj.register_terminator(uninitialize_summator_types);

		init_obj.register_initializer(initialize_example_module);
		init_obj.register_terminator(uninitialize_example_module);

		init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

		return init_obj.init();
	}
}