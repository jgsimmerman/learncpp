"use strict";
exports.__esModule = true;
var io = require("./io");
(function main() {
    var a = parseInt(io.readNumber());
    var b = parseInt(io.readNumber());
    io.writeAnswer(a, b);
})();
