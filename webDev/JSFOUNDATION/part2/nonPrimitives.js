let username = {
  "first name": "farjii",
  isLoggedin: true,
};

const anotherUser = {
  firstName: "wow",
  isLoggedin: true,
};
anotherUser.firstName = "farjii";
console.log(anotherUser.firstName);
anotherUser.lastName = "wow";
console.log(anotherUser.lastName);
console.log(anotherUser);

// const myFirstName = "farjii";
// myFirstName = "farjiiwow";
// console.log(myFirstName);

// console.log(username.firstname);
console.log();
console.log(username["first name"]);
console.log(typeof username);

let today = new Date();
console.log(today.getDate());

// Array

let secondUser = ["farjii", true];
console.log();
console.log(secondUser[0]);

console.log(1 + "1");
console.log("1" + 1);
let isValue = true;
console.log(isValue + 1);
console.log(Number(isValue) + 1);
console.log(Number(isValue));
isValue = "2";
console.log(Number(isValue));
isValue = "2abc";
console.log(Number(isValue));
console.log(typeof Number(isValue));
console.log(Number(null));
console.log(Number(undefined));
