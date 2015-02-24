// %@ transition

var %@Spring = springSystem
  .createSpringWithBouncinessAndSpeed(%@, %@)
  .addListener({onSpringUpdate: set%@Progress});

var %@ = function(on) {
  %@Spring.setEndValue(on ? 1 : 0);
};