// array

const arr = [10, 20, 9, 20, 40, 20, 34];
arr.forEach((value) => console.log(value));

// map

const map = new Map([
  ["a", 10],
  ["b", 20],
  ["c", 38],
  ["d", 43],
]);

map.forEach((value, key) => {
  console.log(`${key}: ${value}`);
});

// set

const set = new Set([23, 34, 13, 49, 83, 23, 11, 98]);

set.forEach((value) => console.log(value));
