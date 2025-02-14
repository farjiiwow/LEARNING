let citiesPopulation = {
  London: 8900000,
  "New York": 8400000,
  Paris: 2200000,
  Berlin: 3500000,
};

let cityNewPopulations = {};

// console.log(Object.keys(citiesPopulation));
// console.log(Object.values(citiesPopulation));

for (const city in citiesPopulation) {
  if (city === "Berlin") {
    break;
  }
  cityNewPopulations[city] = citiesPopulation[city];
}

console.log(cityNewPopulations);
