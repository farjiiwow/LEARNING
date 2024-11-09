const character = "#";
const count = 8;
let rows = [];

function padRow(rowNumber, totalRowCount) {
  return (
    " ".repeat(totalRowCount - rowNumber) +
    character.repeat(2 * rowNumber - 1) +
    " ".repeat(totalRowCount - rowNumber)
  );
}

for (let i = 1; i < count; i++) {
  rows.push(padRow(i, count));
}

let result = "";

for (const row of rows) {
  result = result + row + "\n";
}

console.log(result);
