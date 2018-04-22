function doIt(x: number){
    let y: number = 4;
    console.log(`doIt: x= ${x}, y= ${y}`);
    x = 3;
    console.log(`doIt: x= ${x}, y= ${y}`);
}

(function main(){
  let x: number = 1;
  let y: number = 2;
  
  console.log(`main: x= ${x}, y= ${y};`)
  doIt(x);
  console.log(`main: x= ${x}, y= ${y};`)
})();