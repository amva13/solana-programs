######################################################################
# @author      : Alejandro Velez (alejandro.velez.arce@gmail.com)
# @file        : makefile
# @created     : Friday Oct 27, 2023 19:50:24 MDT
######################################################################

OUT_DIR := outputs/
# TEST_NAMES := test_carbon-monoxide-solana
include ~/.local/share/solana/install/active_release/bin/sdk/sbf/c/sbf.mk


# SOLANA_PLATFORM_DEPS = ~/.local/share/solana/install/active_release/bin/sdk/sbf/dependencies/platform-tools/llvm/include/
# SOLANA_C_DEPS = ~/.local/share/solana/install/active_release/bin/sdk/sbf/c/inc/

# TESTS := $(notdir $(basename $(wildcard $(SRC_DIR)/$(PROGRAM)/$(TEST_PREFIX)*.cc)))
