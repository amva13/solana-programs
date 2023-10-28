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

#include <solana_sdk.h>
using namespace std;

extern uint64_t entrypoint(const uint8_t *input) {
    cout << "test solana" << endl;
    return SUCCESS;
//   SolAccountInfo accounts[1];
//   SolParameters params = (SolParameters){.ka = accounts};

//   if (!sol_deserialize(input, &params, SOL_ARRAY_SIZE(accounts))) {
//     return ERROR_INVALID_ARGUMENT;
//   }

//   return logging(&params);
}
