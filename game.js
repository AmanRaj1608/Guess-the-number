'using strict'

const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
  })
  
let count=0;
let sec;

sec = Math.floor(Math.random()*200);

readline.question(`I'm thinking of a number! Try to guess the number I'm thinking of: `, (num) => {
    while( num!=sec ) {
        if(sec>num) {
            readline.question(`Too low! Guess again: `, (num) => {
                readline.close()
              })
            count++;
        }
        else if( sec<num ) {
            readline.question(`Too high! Guess again: `, (num) => {
                readline.close()
              })
            count++;
        }
        console.log('inside while')
    }
    readline.close()
  })

console.log("That's it! You won");
console.log(`Your score is ${count}`);