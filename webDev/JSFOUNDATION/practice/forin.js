const obj = { a: 1, b: 2, c: 3, d: 4 };
for (const value in obj) {
  console.log(value);
}

for (const value in obj) {
  console.log(obj[value]);
}

const arr = [10, 20, 11, 5, 100, 23, 67];
for (const value in arr) {
  console.log(value);
}

for (const value in arr) {
  console.log(arr[value]);
}
