// string comparision
// string are compared letter by letter

console.log("z" > "a");
console.log("z" > "A");
console.log("Glow" > "Glee");
console.log("Bee" > "Be");

//  operands of different types are converted to numbers by the equality operator ==
// A strict equality operator === checks the equality without type conversion

console.log();
console.log(null === undefined); // false
console.log(null == undefined); // true

console.log();
console.log(null > 0); // (1) false
console.log(null == 0); // (2) false
console.log(null >= 0); // (3) true

// Comparisons convert null to a number, treating it as 0. That’s why (3) null >= 0 is true and (1) null > 0 is false.
// the equality check == for undefined and null is defined such that, without any conversions, they equal each other and don’t equal anything else. That’s why (2) null == 0 is false

// The values null and undefined equal == each other and do not equal any other value.
