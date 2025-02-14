function orderTea(teaType) {
  function confirmOrder() {
    return `Order confirmed for ${teaType}`;
  }
  console.log(confirmOrder());
}

orderTea("chai");
