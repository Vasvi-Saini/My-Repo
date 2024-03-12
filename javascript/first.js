

const simran_promise = new Promise((resolve , reject) =>{
    let parent_decision = false
    if(parent_decision){
        resolve("yay shadi ki taiyari kro")
    }
    else{
        reject("papa ne ias dhoondh liya")
    }
});

simran_promise.then((msg)=>{
    console.log("simran message : ", msg)
    console.log("Let's book the wedding venue")
}).catch((msg)=>{
    console.log("simran message : ",msg)
     console.log("chalo tinder pr id bnate hai")
    })