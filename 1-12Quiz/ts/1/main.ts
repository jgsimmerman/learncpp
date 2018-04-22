
function readNumber(){
    
    return prompt("Enter a number ");
}

function writeAnswer(a: number, b: number){
    console.log(`The answer is ${a + b}`);
}

(function main(){
    let a: number = parseInt(readNumber());
    let b: number = parseInt(readNumber());
    writeAnswer(a,b);

})();