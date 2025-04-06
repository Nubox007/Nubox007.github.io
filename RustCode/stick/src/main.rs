use std::io;

fn main() {
    
    
    let mut input : i8 ;
    let mut count : i8 = 0;
    io::stdin().read_line(&mut input);

    for i in 0.. 7
    {
        count += input & 1;
        input >>= 1;
    }

    println!(count);

}
