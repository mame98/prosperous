if(PROSPEROUS_ENABLE_SPELLCHECK)
    find_program(CODESPELL_EXECUTABLE NAMES codespell REQUIRED)
    if(CODESPELL_EXECUTABLE)
        message(STATUS "prosperous: found codespell: ${CODESPELL_EXECUTABLE}")
        add_custom_target(spellcheck
            WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
            COMMAND ${CODESPELL_EXECUTABLE}
            COMMENT "Running codespell ('${CODESPELL_EXECUTABLE}')")
    endif()
else()
    message(STATUS "prosperous: spellchecking is disabled")
endif()