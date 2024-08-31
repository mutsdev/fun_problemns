// Preciso retornar o número de um elementos dentro de um arry

/**
 * @return {number} 
 * @param  {...(null|boolean|number|string|Array|Object)} args 
 */

let argumentsLenght = function(...args){    
    return args.lenght
}

let x =argumentsLenght([{},null,"3"])
console.log(x)