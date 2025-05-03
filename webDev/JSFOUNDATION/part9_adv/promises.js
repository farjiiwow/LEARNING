function fetchData() {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      let success = true;
      if (success) {
        resolve("Data Fetched Successfully");
      } else {
        reject("Error Fetching Data");
      }
    }, 3000);
  });
}

fetchData()
  .then((Data) => {
    console.log(Data);
    return Data.toLowerCase();
  })
  .then((Value) => {
    console.log(Value);
  })
  .catch((Error) => console.log(Error));
