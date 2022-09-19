idf_component_register(SRC_DIRS "cifar" "mbnet128" "mnist" "vww96"
        INCLUDE_DIRS "cifar" "mbnet128" "mnist" "vww96" "pic"
        REQUIRES TinyMaix tmdl)
target_compile_options(${COMPONENT_LIB} PRIVATE -Wunused-variable -Wno-error=format= -Wno-error=pointer-sign)