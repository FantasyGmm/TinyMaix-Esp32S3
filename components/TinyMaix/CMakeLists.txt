idf_component_register(SRC_DIRS "src"
        INCLUDE_DIRS "include" "src"
        REQUIRES esp-dsp)
target_compile_options(${COMPONENT_LIB} PRIVATE -Wunused-variable -Wno-error=format= -Wno-error=pointer-sign -Werror=missing-braces)