const {getBalance} = require("@solana/web3.js")


const response = await getBalance("D5HcPGNYx7Lc8i8y4gbzFLLYjR6PhPvdWcCL66jJwLrC")

console.log(response);