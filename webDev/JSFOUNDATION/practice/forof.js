let array = [10, 20, 30];

for (const value of array) {
  console.log(value);
}

let string = "boo";
for (const value of string) {
  console.log(value);
}

let map = new Map([
  ["a", 1],
  ["b", 2],
  ["c", 3],
]);
for (const value of map) {
  console.log(value);
}

for (const [key, value] of map) {
  console.log(value);
}

for (const [key, value] of map) {
  console.log(key);
}
console.log(typeof map);

let set = new Set([1, 2, 3, 4, 5, 6, 7]);
for (const value of set) {
  console.log(value);
}

// typed array
console.log("typed array");
let typedArray = new Uint8Array([1, 2, 3, 4]);
for (const value of typedArray) {
  console.log(value);
}

// arguments

function foo() {
  for (const value of arguments) {
    console.log(value);
  }
}

foo(1, 2, 3, "Hello", 6, 7, 8, "yep");
