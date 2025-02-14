let numbers = [2, 5, 7, 9];
let doubledNumbers = [];

for (let i = 0; i < numbers.length; i++) {
  if (numbers[i] === 7) {
    continue;
  }
  // doubledNumbers[i] = numbers[i] * 2;
  doubledNumbers.push(numbers[i] * 2);
}

console.log(doubledNumbers);
