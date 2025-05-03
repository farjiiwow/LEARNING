function outer() {
  let count = 5;
  return function () {
    count++;
    return count;
  };
}

let counter = outer();

console.log(counter());
console.log(counter());
console.log(counter());
console.log(counter());
