// Number

let balance = 120;
let anotherBalance = new Number(120);

console.log(balance);
console.log(anotherBalance);
console.log(anotherBalance.valueOf());
console.log(typeof balance); //number
console.log(typeof anotherBalance); //object

//boolean

let isActive = true;
let isReallyActive = new Boolean(true);

console.log(typeof isActive);
console.log(typeof isReallyActive);

//null and undefined

let firstname;
let lastname = null;
console.log(firstname);
console.log(lastname);

// string

let myString = "hello";
let myStringOne = "Hola";
let userName = "farjii";

// let oldGreet = myString + "farjii";
let oldGreet = myString + " " + "farjii";
console.log(oldGreet);

let greetMessage = `Great ${userName} !`;
let demoOne = `Value is ${2 * 2}`;
console.log(greetMessage);
console.log(demoOne);

// Symbol

let sm1 = Symbol();
let sm2 = Symbol();

console.log(sm1 == sm2);

let sm3 = Symbol("farjii");
let sm4 = Symbol("farjii");

console.log(sm3 == sm4);
