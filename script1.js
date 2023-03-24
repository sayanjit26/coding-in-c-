
// yo
// var course="react";
// var a=56;
// var b=67;
// var c=78;
// console.log(`
// maths:${a}
// bio:${b}
// chem:${c}
// `)
// console.log(typeof a)
// var name=true;
// name ? console.log("a") : console.log("b");
// var user= "test phase";

// switch (user){
//     case "value":
//         console.log("you got access");
//         break;
//     case "novalue":
//          console.log("you are denied to access");
//          break;
//     default  :
//          console.log("you r nobody");
//          break;   
var name="sayanjit";
function getuserrole(name,role){
    switch (role) {
        case "admin":
            return `${name} can acess everything`;
        case "subadmin":
            return `${name} can add or delete files`;
        case "testprep":
            return `${name} can add or delete test papers`;
        case "user":
            return `${name} can consume contents`;        
        default:
            return `${name} is trial user`;
            
    }

}
console.log(getuserrole(name,"testprep"));
