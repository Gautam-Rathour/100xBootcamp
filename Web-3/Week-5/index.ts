
import {
    Connection,
    Keypair,
    PublicKey,
    SystemProgram,
    Transaction,
    sendAndConfirmTransaction,
    clusterApiUrl,
    LAMPORTS_PER_SOL,
} from "@solana/web3.js";

const connection = new Connection ("https://api.devnet.solana.com");

// Your wallet (sender) - load from secret key
const sender1 = Keypair.fromSecretKey(Uint8Array.from([34, , , , ]))
const sender2 = Keypair.fromSecretKey(Uint8Array.from([34, , , , ]))

//Recipient address
const recipient1 = new PublicKey("");
const recipient2 = new PublicKey("");

// Build the transaction 
const transaction = new Transaction().add(
    SystemProgram.transfer({
        fromPubkey: sender2.publicKey,
        toPubkey: recipient1,
        lamports: 0.1 * LAMPORTS_PER_SOL, // 0.1 SOL
    }),
    SystemProgram.transfer({
        fromPubkey: sender1.publicKey,
        toPubkey: recipient2,
        lamports: 0.1 * LAMPORTS_PER_SOL, // 0.1 SOL
    })
);


// Send and sonfirm
const signature = await sendAndConfirmTransaction(connection, transaction, [sender]);
console.log("SOL Transfer signature: ", signature);