/**
 * @file carbon-monoxide-solana.c
 * @author Alejandro Velez Arce (amva13@alum.mit.edu)
 * @brief Molecular Dynamics simulation solana program adapted from the paper by <a href="https://onlinelibrary.wiley.com/doi/full/10.1002/qua.27035 />
 * @version 0.1
 * @date 2023-10-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <solana_sdk.h>

extern uint64_t entrypoint(const uint8_t *input) {
    std::cout << "testing";
    return SUCCESS;
}
