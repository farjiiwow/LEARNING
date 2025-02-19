let computer = { cpu: 12, ram: 24 };
let lenovo = {
  screen: "HD",
  "refresh rate": 144,
  __proto__: computer,
};
let tomHardware = {
  // __proto__: computer,
  __proto__: lenovo,
};

console.log(`computer `, computer);
console.log(`computer `, computer.__proto__);
console.log(`lenovo `, lenovo.__proto__);
console.log(`lenovo `, lenovo.ram);
console.log(`lenovo `, lenovo);
console.log(`lenovo `, lenovo["refresh rate"]);
console.log(`tomHardware `, tomHardware.__proto__);
console.log(`tomHardware `, tomHardware.cpu);

let genericCar = { tyres: 4 };
let tesla = {
  driver: "AI",
};

Object.setPrototypeOf(tesla, genericCar);
console.log(`tesla `, tesla);
console.log(`tesla `, tesla.tyres);
console.log(`tesla `, tesla.driver);
console.log(`tesla `, Object.getPrototypeOf(tesla));
