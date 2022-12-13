let stocks ={
  Fruits: ["strawberry","grapes","banana","apple"],
  liquid: ["water","ice"],
  holder: ["cone","cup","stick"],
  toppings: ["choclate","peanuts"]
};
let is_shop_open = true;

function time(ms){
  return new Promise((resolve,reject)=>{
    if(is_shop_open){
      setTimeout(resolve,ms);
    }
    else{
      reject(console.log("shop is closed"));
    }
  });
}

async function kitchen(){
  try{
    await time(2000)
    console.log(`${stocks.Fruits[0]} flavour`);
    
    await time(0000)
    console.log("Start the production");
    
    await time(2000)
    console.log("Fruits chopped");
    
    await time(1000)
    console.log(`Added ${stocks.liquid[0]} and ${stocks.liquid[1]}`);
    
    await time(1000)
    console.log("machine started");
    
    await time(2000)
    console.log(`${stocks.holder[0]} selected as the container`);
    
    await time(3000)
    console.log(`${stocks.toppings[0]} placed on the ice cream`);
    
    await time(2000)
    console.log("ice cream served");
  }
  catch(error){
    console.log("sorry for the inconvenience")
  }
  finally{
    console.log("day ended shop is closed")
  }
}
kitchen();