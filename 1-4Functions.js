// http://www.learncpp.com/cpp-tutorial/14-a-first-look-at-functions/
function getValueFromUser(){
    return prompt("enter an integer");
  }
  
  let x = parseInt(getValueFromUser());
  let y = parseInt(getValueFromUser());
  
  console.log(`${x} + ${y} = ${x+y}`);