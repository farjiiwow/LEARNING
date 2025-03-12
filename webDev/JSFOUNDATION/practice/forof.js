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
