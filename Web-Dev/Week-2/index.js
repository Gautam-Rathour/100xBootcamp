// console.log("hello there ....");

// function sum( a, b) {
//     let ans = a + b;
//     return ans;
// }

// console.log(sum ("10", "40"));

// let age = 28;

// if(age > 18) {
//     console.log("he is adult");
// } else {
//     console.log("he is not adult");
// }


// let num = 29;

// if(num % 2 == 0) {
//     console.log("number is even");
// } else {
//     console.log("number is odd");
// }


// function sum (num) {
//     let ans = 0;
//     for(let i = 1; i <= num; i++) {
//         ans += i;
//     }
//     return ans;
// }

// console.log(sum (100));


// // Object : --

// let user1 = {
//     name : "raman",
//     age : 23,
//     email : "raman@gmail.com",
//     city : "delhi",
//     isMarried : false,
//     skills : ["html", "css", "javascript", "react"],
//     address : {
//         street : "123 main st",
//         city : "new york",
//         state : "ny",
//     }
// }



// ============================================================
// ============================================================


// Create a function that takes an array of objects as input,
// and returns the users whose age > 18 and are male


function getUser(array) {
    
    for(let i=0; i<array.length; i++) {
        if(array[i].age > 18 && array[i].gender == "male") {
            console.log(array[i].name);
        }
    }
}

let array = [{
    name : "raman",
    age: 23,
    gender : "male",
}, {
    name : "shrey",
    age: 20,
    gender : "female",
}, {
    name : "monu",
    age: 17,
    gender : "male",
}]


getUser(array);
    