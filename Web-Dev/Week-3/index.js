
// function sum (a, b) {
//     return a + b;
// }

// function sub (a, b) {
//     return a - b;
// }

// function doArithmetic(a, b, fn) {
//     return fn (a, b);
// } 

// const ans1 = doArithmetic (1, 2, sum);
// const ans2 = doArithmetic (5, 2, sub);


// console.log(ans1);
// console.log(ans2);

// ===============================================
// ===============================================


// const fs = require("fs");

// function fileReadCallback(err, contents) {
//     console.log(contents);
//     console.log(contents);
//     console.log(contents);
// }

// fs.readFile("a.txt", "utf-8", fileReadCallback);

// let s = 0;
// for(let i=0; i<1000000; i++) {
//     s += i
// }

// console.log(s);

// ===============================================
// ===============================================


// let ctr = 0;
// function callback() {
//     console.log(ctr);
//     ctr = ctr + 1;
// }

// setIntervel(callback, 1000);

// let x = 0;
// for(let i=0; i<40000000000; i++) {
//     x = x + i
// }

// console.log(x);

// ===============================================
// ===============================================


// const input = [1, 2, 3, 4, 5];

// function transform(i) {
//     return i * 2;
// }

// const ans = input.map(function(i) {
//     return i * 2;
// });
// console.log(ans);


// other question 

//filtering
// what if I tell u, given an input array , give me back
// all the even values from it

// const arr = [1, 2, 3, 4, 5]

// // ans 
// const newArr = [];
// for(let i=0; i<arr.length; i++) {
//     if(arr[i] % 2 == 0) {
//         newArr.push(arr[i]);
//     }
// }

// console.log(newArr);

// other solution : ---

// const arr = [1, 2, 3, 4, 5];



// const result = arr.filter(function(i){
//     if(i % 2 == 0) {
//         return true;
//     } else {
//         return false;
//     }
// });
// console.log(result);

// ===============================================
// ===============================================


// console.log("harkirat".startsWith("h"));

// create a map fn that takes an array and a
// transfrm fn as input and returns the transfrmed
// arra as output

const input = [1, 2, 3, 4, 5];

function fs(n) {
    return n * 2;
}

let output = [];
for(let i=0; i<input.length; i++) {
    output.push(fs(input[i]));
}

console.log(output);

// ===============================================
