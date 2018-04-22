function readNumber() {
    return prompt("Enter a number ");
}
function writeAnswer(a, b) {
    console.log("The answer is " + (a + b));
}
(function main() {
    var a = parseInt(readNumber());
    var b = parseInt(readNumber());
    writeAnswer(a, b);
})();
